/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:26:13 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:44:52 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Type ( "WrongType" ) {
    std::cout << "this is WrongAnimal default constructor" << std::endl;
}
WrongAnimal::WrongAnimal( std::string T ) : Type ( T ) {
    std::cout << "this is WrongAnimal constructor" << std::endl;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "this is WrongAnimal destructor" << std::endl;
}
WrongAnimal::WrongAnimal( WrongAnimal const& obj ) {
    std::cout << "this is WrongAnimal copy constructor" << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=( WrongAnimal const& obj ) {
    std::cout << "this is WrongAnimal copy assignment" << std::endl;
    Type = obj.Type;
    return *this;
}


std::string WrongAnimal::getType( void ) const {
    return Type;
}
void WrongAnimal::makeSound( void ) const {
    std::cout << "Wrong Animal Sound" << std::endl;
}