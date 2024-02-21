/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:33 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:39:03 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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
Cat& Cat::operator=( Cat const& obj ) {
    std::cout << "this is the Cat copy assignment" << std::endl;
    type = obj.type;
    return *this;
}
void Cat::makeSound() const {
    std::cout << "The Meow" << std::endl;
}


