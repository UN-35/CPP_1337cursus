/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:10 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 16:29:07 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"



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
    std::cout << "Bark Bark" << std::endl;
}
