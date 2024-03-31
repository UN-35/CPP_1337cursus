/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:54:18 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/30 05:07:14 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap( T &a, T &b ) {
    T c = a;
    a = b;
    b = c;
}

template <typename T >
T const &min ( T &a, T &b) {
    if (a < b)
        return a;
    else
        return b;
}

template <typename T>
T const &max ( T &a, T &b) {
    if (a > b)
        return a;
    else
        return b;
}

#endif