/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:41:06 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/22 17:17:11 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//Animal::things
AAnimal::AAnimal( void ) : type( "AAnimal" ) {
    // std::cout << "this is the AAnimal default constructor" << std::endl;
}
AAnimal::AAnimal( std::string T ) : type( T ) {
    // std::cout << "this is the AAnimal constructor" << std::endl;
}
AAnimal::~AAnimal() {
    // std::cout << "this is the AAnimal destructor" << std::endl;
}
AAnimal::AAnimal( AAnimal const& obj ) {
    // std::cout << "this is the AAnimal copy constructor" << std::endl;
    *this = obj;
}
AAnimal& AAnimal::operator=( AAnimal const& obj ) {
    // std::cout << "this is the AAnimal copy assignment" << std::endl;
    type = obj.type;
    return *this;
}
std::string AAnimal::getType() const {
    return type;
}
void AAnimal::makeSound() const {
    std::cout << type << " sound" << std::endl;
}




