/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:33 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 20:10:56 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ) {
    std::cout << "this is the Cat default constructor" << std::endl;
    catBrain = new Brain();
}
Cat::~Cat() {
    std::cout << "this is the Cat destructor" << std::endl;
    delete catBrain;
}
Cat::Cat( Cat const& obj ) : Animal( obj ) , Brain( obj ) {
    std::cout << "this is the Cat copy constructor" << std::endl;
    *this = obj;
}
Cat& Cat::operator=( Cat const& obj ) {
    std::cout << "this is the Cat copy assignment" << std::endl;
    if ( type != obj.type )
        type = obj.type;
    return *this;
}
void Cat::makeSound() {
    std::cout << "The Meow" << std::endl;
}


