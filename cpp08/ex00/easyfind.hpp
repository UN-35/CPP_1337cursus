/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:51:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/01 22:32:37 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind( T cont, int val) {
    if ( std::find( cont.begin(), cont.end(), val ) != cont.end() )
        std::cout << "Value Found" << std::endl;
    else
        throw std::exception();
}

#endif