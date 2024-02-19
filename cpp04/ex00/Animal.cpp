/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:41:06 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/19 22:22:32 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal::things
Animal::Animal() {
}
Animal::Animal( std::string T ) {
    type = T;
}
Animal::~Animal() {
}
std::string Animal::getType() const {
    return type;
}
void Animal::makeSound() const {
    std::cout << type << " animal sound" << std::endl;
}




//Dog::things
Dog::Dog() : Animal( "Dog" ) {
    std::cout << "this is the Dog constructor" << std::endl;
}
Dog::~Dog() {
    std::cout << "this is the Dog destructor" << std::endl;
}

Dog::Dog( Dog const& obj ) : Animal( obj ) {
    std::cout << "this is the Dog copy constructor" << std::endl;
    *this = obj;
}
Dog& Dog::operator=( Dog const& ) {
    std::cout << "this is the Dog copy assignment" << std::endl;
    return *this;
}
void Dog::makeSound() {
    std::cout << "dog sound" << std::endl;
}




//Cat::things
Cat::Cat() : Animal( "Cat" ) {
    std::cout << "this is the Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "this is the Cat destructor" << std::endl;
}

Cat::Cat( Cat const& obj ) : Animal( obj ) {
    std::cout << "this is the Cat copy constructor" << std::endl;
    *this = obj;
}
Cat& Cat::operator=( Cat const& ) {
    std::cout << "this is the Cat copy assignment" << std::endl;
    return *this;
}
void Cat::makeSound() {
    std::cout << "Cats sound" << std::endl;
}




