/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:10 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 20:11:42 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"



Dog::Dog() : Animal( "Dog" ) {
    std::cout << "this is the Dog default constructor" << std::endl;
    brain = new Brain();
}
Dog::~Dog() {
    std::cout << "this is the Dog destructor" << std::endl;
    delete brain;
}
Dog::Dog( Dog const& obj ) : Animal( obj ) , Brain( obj ) {
    std::cout << "this is the Dog copy constructor" << std::endl;
    *this = obj;
}
Dog& Dog::operator=( Dog const& obj ) {
    std::cout << "this is the Dog copy assignment" << std::endl;
    if ( type != obj.type )
        type = obj.type;
    return *this;
}
void Dog::makeSound() {
    std::cout << "Bark Bark" << std::endl;
}
