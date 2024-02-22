/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:10 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/22 16:58:26 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ), dogBrain( new Brain() ) {
    std::cout << "this is the Dog constructor" << std::endl;
}
Dog::~Dog() {
    std::cout << "this is the Dog destructor" << std::endl;
    delete dogBrain;
}
Dog::Dog( Dog const& obj ) : Animal( obj ) {
    std::cout << "this is the Dog copy constructor" << std::endl;
    *this = obj;
}
Dog& Dog::operator=( Dog const& obj ) {
    std::cout << "this is the Dog copy assignment" << std::endl;
    if (this != &obj) {
        type = obj.type;
        if ( dogBrain )
            delete dogBrain;
        dogBrain = new Brain( *obj.dogBrain );
    }
    return *this;
}
void Dog::makeSound() const {
    std::cout << "The Bark" << std::endl;
}
