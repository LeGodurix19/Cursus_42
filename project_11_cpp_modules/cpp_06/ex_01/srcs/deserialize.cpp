/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:47:59 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:50:10 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Data.class.hpp"

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}