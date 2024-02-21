/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:41:06 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:35:10 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal::things
Animal::Animal( void ) : type( "Animal" ) {
    std::cout << "this is the Animal default constructor" << std::endl;
}
Animal::Animal( std::string T ) : type( T ) {
    std::cout << "this is the Animal constructor" << std::endl;
}
Animal::~Animal() {
    std::cout << "this is the Animal destructor" << std::endl;
}
Animal::Animal( Animal const& obj ) {
    std::cout << "this is the Animal copy constructor" << std::endl;
    *this = obj;
}
Animal& Animal::operator=( Animal const& ) {
    std::cout << "this is the Animal copy assignment" << std::endl;
    return *this;
}
std::string Animal::getType() const {
    return type;
}
void Animal::makeSound() const {
    std::cout << type << " sound" << std::endl;
}




