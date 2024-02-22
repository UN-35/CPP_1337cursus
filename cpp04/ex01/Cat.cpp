/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:33 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/22 17:02:40 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ) , catBrain( new Brain() ) {
    std::cout << "this is the Cat constructor" << std::endl;
}
Cat::~Cat() {
    std::cout << "this is the Cat destructor" << std::endl;
    delete catBrain;
}
Cat::Cat( Cat const& obj ) : Animal( obj ) {
    std::cout << "this is the Cat copy constructor" << std::endl;
    *this = obj;
}
Cat& Cat::operator=( Cat const& obj ) {
    std::cout << "this is the Cat copy assignment" << std::endl;
    if (this != &obj) {
        type = obj.type;
        if ( catBrain )
            delete catBrain;
        catBrain = new Brain( *obj.catBrain );
    }
    return *this;
}
void Cat::makeSound() const {
    std::cout << "The Meow" << std::endl;
}


