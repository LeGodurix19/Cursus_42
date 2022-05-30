/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:13:20 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/05/30 12:45:21 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "tree.hpp"
#include "utility.hpp"

namespace ft
{
	template<class K, class V, class Compare, class Alloc>
	class map;

	// a tree, but with iterators
	template<class K, class V, class Compare = std::less<K>, class Alloc = std::allocator<ft::pair<const K, V> > >
	class map : public BinaryTree<ft::pair<const K, V> >
	{
		public:

			typedef K										key_type;
			typedef V										mapped_type;
			typedef ft::pair<const K, V>					value_type;
			typedef std::size_t								size_type;
			typedef std::ptrdiff_t							difference_type;
			typedef Compare									key_compare;
			typedef Alloc									allocator_type;
			typedef value_type&								reference;
			typedef const value_type&	 					const_reference;
			typedef typename Alloc::pointer					pointer;
			typedef typename Alloc::const_pointer			const_pointer;
			typedef NodeIterator<value_type>				iterator;
			typedef NodeConstIterator<value_type>			const_iterator;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

			class value_compare
			{
				protected:
				Compare comp;

				public:
				value_compare(const Compare& comp) : comp(comp) {}

				bool operator()(const value_type& lhs, const value_type& rhs) const		{ return comp(lhs.first, rhs.first); }
			};

	/************************/
	/*						*/
	/* CONSTRUCTOR			*/
	/*						*/
	/************************/

			map()
				: BinaryTree<value_type>()
				, _size(0)
				, _allocator(node_allocator())
				, _compare(Compare())
			{}

			explicit map(const Compare& comp, const Alloc& alloc = Alloc())
				: BinaryTree<value_type>()
				, _size(0)
				, _allocator(node_allocator(alloc))
				, _compare(comp)
			{}

			template<class InputIt>
			map(InputIt first, InputIt last, const Compare& comp = Compare(), const Alloc& alloc = Alloc())
				: BinaryTree<ft::pair<const K, V> >()
				, _size(0)
				, _allocator(node_allocator(alloc))
				, _compare(comp)
			{
				InputIt it = first;
				K this_key;
				K last_key;
				node_type* this_node = nullptr;
				for (; it != last; ++it)
				{
					this_key = it->first;
					if (it != first && (comp(this_key, last_key) || this_key == last_key))
						break;
					this_node = this->_insert(this_node, this_key, it->second);
					last_key = this_key;
				}
				if (it == last)
				{
					this->update_first_and_last();
					return;
				}
				for (; it != last; ++it)
					insert(*it);
			}

			map(const map& other)
				: BinaryTree<value_type>()
				, _size(other._size)
				, _allocator(node_allocator(other._allocator))
				, _compare(other._compare)
			{
				this->_root = _copy_node(nullptr, other._root);
				this->update_first_and_last();
			}

	/************************/
	/*						*/
	/* DESTRUCTOR			*/
	/*						*/
	/************************/

			virtual ~map() 
			{
				clear();
			}

	/************************/
	/*						*/
	/* OPERATOR =			*/
	/*						*/
	/************************/

			map& operator=(const map& other)
			{
				if (this != &other)
				{
					this->clear();
					this->_root = _copy_node(nullptr, other._root);
					_size = other._size;
					this->update_first_and_last();
				}
				return *this;
			}

	/************************/
	/*						*/
	/* ITERATOR				*/
	/*						*/
	/************************/

			iterator begin()								{ return iterator(this, this->_first); }
			iterator end()									{ return iterator(this, nullptr); }
			reverse_iterator rbegin()						{ return reverse_iterator(end()); }
			reverse_iterator rend()							{ return reverse_iterator(begin()); }
			
			const_iterator begin() const					{ return const_iterator(this, this->_first); }
			const_iterator end() const						{ return const_iterator(this, nullptr); }
			const_reverse_iterator rbegin() const			{ return const_reverse_iterator(end()); }
			const_reverse_iterator rend() const				{ return const_reverse_iterator(begin()); }

	/************************/
	/*						*/
	/* CAPACITY				*/
	/*						*/
	/************************/

			bool empty() const								{ return this->_size == 0; }
			size_type size() const							{ return _size; }
			size_type max_size() const						{ return this->_allocator.max_size(); }
	
	/************************/
	/*						*/
	/* CAPACITY				*/
	/*						*/
	/************************/
	
			V& operator[](const key_type& key)				{ return insert(ft::make_pair(key, V())).first->second; }
	
	/************************/
	/*						*/
	/* MODIFIERS			*/
	/*						*/
	/************************/

			ft::pair<iterator, bool> insert(const value_type& value)
			{
				size_type size = this->size();
				node_type* node = _insert(value.first, value.second);
				this->update_first_and_last();
				if (this->size() == size + 1)
					return ft::make_pair(iterator(this, node), true);
				return ft::make_pair(iterator(this, node), false);
			}

			iterator insert(iterator hint, const value_type& value)
			{
				node_type* ret_node;
				if ((ret_node = this->_find(value.first)) != nullptr)
					return iterator(this, ret_node);
				bool use_hint = true;
				if (hint == end())
					use_hint = false;
				node_type* node = hint._node;
				while (use_hint && node->parent != nullptr)
				{
					if ((node_type::is_left_child(node) && !Compare()(value.first, node->parent->data.first))
						|| (node_type::is_right_child(node) && !Compare()(node->parent->data.first, value.first)))
					{
						use_hint = false;
						break;
					}
					node = node->parent;
				}
				ret_node = use_hint ? _insert(hint._node, value.first, value.second) : _insert(value.first, value.second);
				this->update_first_and_last();
				return iterator(this, ret_node);
			}

			template<class InputIt>
			void insert(InputIt first, InputIt last)
			{
				for (; first != last; ++first)
					insert(*first);
				this->update_first_and_last();
			}

			void erase(iterator pos)					{ _erase(pos->first); }

			// TODO: wrong complexity ?
			void erase(iterator first, iterator last)
			{
				iterator next;
				while (first != last)
				{
					next = first;
					next++;
					erase(first);
					first = next;
				}
			}
			
			size_type erase(const key_type& key)
			{
				size_type ret = this->_erase(key);
				this->update_first_and_last();
				return ret;
			}

			void swap(map& other)
			{
				ft::swap(this->_compare, other._compare);
				ft::swap(this->_root, other._root);
				ft::swap(this->_size, other._size);
				ft::swap(this->_first, other._first);
				ft::swap(this->_last, other._last);
			}

			void clear()
			{
				_delete_node_rec(this->_root);
				this->_root = nullptr;
				_size = 0;
				this->_first = nullptr;
				this->_last = nullptr;
			}

	/************************/
	/*						*/
	/* OBSERVERS			*/
	/*						*/
	/************************/

			key_compare key_comp() const			{ return key_compare(this->_compare); }
			value_compare value_comp() const		{ return value_compare(this->_compare); }

	/************************/
	/*						*/
	/* OPERATIONS			*/
	/*						*/
	/************************/

			iterator find(const K& key)															{ return iterator(this, this->_find(key)); }
			const_iterator find(const K& key) const												{ return const_iterator(this, this->_find(key)); }
			size_t count(const K& key) const													{ return ((this->_find(key) == nullptr) ? 0 : 1); }
			
			iterator lower_bound(const K& key)
			{
				for (iterator it = begin(); it != end(); ++it)
					if (!this->_compare(it->first, key))
						return it;
				return end();
			}

			const_iterator lower_bound(const K& key) const
			{
				for (const_iterator it = begin(); it != end(); ++it)
					if (!this->_compare(it->first, key))
						return it;
				return end();
			}

			iterator upper_bound(const K& key)
			{
				for (iterator it = begin(); it != end(); ++it)
					if (this->_compare(key, it->first))
						return it;
				return end();
			}
			
			const_iterator upper_bound(const K& key) const
			{
				for (const_iterator it = begin(); it != end(); ++it)
					if (this->_compare(key, it->first))
						return it;
				return end();
			}

			ft::pair<iterator, iterator> equal_range(const K& key)								{ return ft::make_pair(lower_bound(key), upper_bound(key)); }
			ft::pair<const_iterator, const_iterator> equal_range(const K& key) const			{ return ft::make_pair(lower_bound(key), upper_bound(key)); }

	/************************/
	/*						*/
	/* ALLOCATOR			*/
	/*						*/
	/************************/

			allocator_type get_allocator() const			{ return this->_allocator; }
		
		private:

			typedef Node<value_type>										node_type;
			typedef typename Alloc::template rebind<node_type>::other		node_allocator;

			size_type														_size;
			node_allocator													_allocator;
			Compare															_compare;

			node_type* _copy_node(node_type* current, node_type* other)
			{
				if (!other)
					return nullptr;
				node_type* new_node = _allocator.allocate(1, current);
				new (new_node) node_type(value_type(other->data.first, other->data.second),
						current, 0, 0, other->balance_factor);
				new_node->left = _copy_node(new_node, other->left);
				new_node->right = _copy_node(new_node, other->right);
				return new_node;
			}

			void _delete_node_rec(node_type* node)
			{
				if (node == nullptr)
					return;
				if (node->left)
					_delete_node_rec(node->left);
				if (node->right)
					_delete_node_rec(node->right);
				_allocator.destroy(node);
				_allocator.deallocate(node, 1);
			}

			void update_balance_insert(node_type* node)
			{
				bool is_root = node_type::is_root(node);
				if (node->balance_factor > 1 || node->balance_factor < -1)
				{
					// the recursion must stop after rebalancing
					// as the height of the node is unchanged
					node = this->rebalance(node);
					this->_root = is_root ? node : this->_root;
					return;
				}

				if (node->parent)
				{
					if (node_type::is_left_child(node))
						node->parent->balance_factor--;
					else if (node_type::is_right_child(node))
						node->parent->balance_factor++;
					if (node->parent->balance_factor != 0)
						return update_balance_insert(node->parent);
					// the recursion must stop as the height of the parent is unchanged
					return;
				}
				this->_root = node;
				return;
			}

		// insert a key-value pair
			node_type* _insert(const K& key, const V& value)
			{
				node_type* node = _insert(this->_root, key, value);
				this->update_first_and_last();
				return node;
			}

			node_type* _insert(node_type* node, const K& k, const V& v)
			{
				if (!node)
				{
					node_type* new_node = _allocator.allocate(1, node);
					
					_size += 1;
					new (new_node) node_type(value_type(k, v), nullptr);
					this->_root = new_node;
					return new_node;
				}
				if (Compare()(k, node->data.first))
				{
					node_type* new_node = _allocator.allocate(1, node);

					if (node_type::has_left_child(node))
						return _insert(node->left, k, v);
					new (new_node) node_type(value_type(k, v), node);
					node->left = new_node;
					MY_ASSERT(node->left->parent == node);
					_size += 1;
					MY_ASSERT(node->left != 0);
					update_balance_insert(node->left);
					return new_node;
				}
				else if (Compare()(node->data.first, k))
				{
					if (node_type::has_right_child(node))
						return _insert(node->right, k, v);
					else
					{
						node_type* new_node = _allocator.allocate(1, node);
						new (new_node) node_type(value_type(k, v), node);
						node->right = new_node;
						MY_ASSERT(node->right->parent == node);
						_size += 1;
						MY_ASSERT(node->right != 0);
						update_balance_insert(node->right);
						return new_node;
					}
				}
				return node;
			}

			size_type _erase(const K& key)
			{
				node_type* node_to_delete = nullptr;

				begin_erase(this->_root, key, &node_to_delete);
				if (node_to_delete)
				{ // if the key appears and a node has to be deleted
					_size -= 1;
					end_erase(node_to_delete);
					this->update_first_and_last();
					return 1;
				}
				return 0;
			}

			node_type* begin_erase(node_type* node, K key, node_type** node_to_delete)
			{
				if (!node)
					return nullptr;
				if (Compare()(node->data.first, key))
				{
					node->right = begin_erase(node->right, key, node_to_delete);
					return node;
				}
				else if (node->data.first > key)
				{
					node->left = begin_erase(node->left, key, node_to_delete);
					return node;
				}
				if (!node->left && !node->right)
				{
					if (!node->parent)
						this->_root = nullptr;
					*node_to_delete = node;
					return node;
				}
				else if (!node->left || !node->right)
				{
					node_type *ret = node->left ? node->left : node->right;
					ret->parent = node->parent;
					if (!node->parent)
						this->_root = ret;
					node->parent = ret; // necessary for update_balance_delete to work correctly
					*node_to_delete = node;
					return ret;
				}
				node_type* temp = node->right;
				while (temp->left)
					temp = temp->left;
				this->swap_nodes(node, temp);
				temp->right = begin_erase(temp->right, node->data.first, node_to_delete);
				return temp;
			}
			// returns a possibly new root for the tree or nullptr
			// this function takes a node to be deleted and recursively balances its
			// ancestors
			// please note that node_to_delete, if not null, does not have any children
			void end_erase(node_type* node_to_delete)
			{
				if (!node_to_delete->parent)
					this->_root = nullptr;
				else
					update_balance_delete(node_to_delete);
				if (node_type::is_left_child(node_to_delete))
					node_to_delete->parent->left = nullptr;
				else if (node_type::is_right_child(node_to_delete))
					node_to_delete->parent->right = nullptr;
				delete node_to_delete;
			}

			void update_balance_delete(node_type* node)
			{
				if (!node)
					return;
				if (node->balance_factor > 1 || node->balance_factor < -1)
				{
					node_type* other_child = ((node->balance_factor == -2) ? node->left : node->right);
					bool stop_recursion = other_child->balance_factor == 0;
					node = this->rebalance(node);
					if (!node->parent)
						this->_root = node;
					if (stop_recursion)
					{
						this->_root = node->parent ? this->_root : node;
						return ;
					}
				}
				if (node->parent)
				{
					if (node_type::is_left_child(node))
						node->parent->balance_factor++;
					else if (node_type::is_right_child(node))
						node->parent->balance_factor--;
					if (node->parent->balance_factor == -1 || node->parent->balance_factor == 1)
						// the recursion must stop as the height of the parent is unchanged
						return;
					return update_balance_delete(node->parent);
				}
				return;
			}

			static node_type* _find(node_type* node, const K& key)
			{
				if (node == nullptr)
					return nullptr;
				else if (Compare()(key, node->data.first))
					return _find(node->left, key);
				else if (Compare()(node->data.first, key))
					return _find(node->right, key);
				return node;
			}
			// find a key-value pair
			node_type* _find(const K& key) const												{ return _find(this->_root, key); }

		};
}
#endif
