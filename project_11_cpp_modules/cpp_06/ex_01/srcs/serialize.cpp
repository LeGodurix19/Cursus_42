/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:47:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:49:42 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Data.class.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}