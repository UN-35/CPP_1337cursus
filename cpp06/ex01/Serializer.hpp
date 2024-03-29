/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 00:01:26 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/29 03:12:34 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"
#include "stdint.h"

class Serializer {
    private:

        Serializer( void );
    public:
        Serializer( Serializer const& obj );
        Serializer& operator=( Serializer const& obj );
        ~Serializer( void );
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif