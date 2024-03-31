/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:21:45 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/31 23:18:23 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array {
    private:
        T* array;
        unsigned int Size;
    public:
        Array<T>( void ) : array( new T[0]() ), Size() {}
        Array<T>( unsigned int n ) : array( new T[n]() ), Size( n ) {}
        Array<T>( Array const& obj) : array( new T[obj.Size] ), Size( obj.Size ) {
            for ( unsigned int i = 0; i < Size; i++ )
                array[i] = obj.array[i];
        }
        Array<T>& operator=( Array const& obj) {
            if ( this != obj ) {
                if ( array )
                    delete array;
                array = new T[obj.Size]();
                Size = obj.Size;
                for ( unsigned int i = 0; i < Size; i++ )
                    array[i] = obj.array[i];
            }
            return *this;
        }
        ~Array( void ) {
            if ( array )
                delete[] array;
        }

        T& operator[]( unsigned int i ) {
            if ( i >= Size )
                throw std::exception();
            return array[i];
        }

        unsigned int size( void ) const {
            return Size;
        }
};

#endif