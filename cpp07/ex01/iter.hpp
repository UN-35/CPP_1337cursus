/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:18:39 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/30 05:39:43 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


template <typename T>
void iter( T *array, int length, void( *f )( T const& ) ) {
    for ( int i = 0; i < length; i++ )
        f( array[i] );
}


#endif