/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 00:01:07 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/29 03:06:19 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer( Serializer const& obj ) {
    ( void )obj;
}
Serializer& Serializer::operator=( Serializer const& obj ) {
    ( void )obj;
    return *this;
}
Serializer::~Serializer( void ) {}

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>( ptr );
}
Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>( raw );
}