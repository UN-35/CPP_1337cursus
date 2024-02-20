/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:26:13 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 17:08:45 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "this is WrongAnimal default constructor" << std::endl;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "this is WrongAnimal destructor" << std::endl;
}
WrongAnimal::WrongAnimal( WrongAnimal const& obj ) {
    std::cout << "this is WrongAnimal copy constructor" << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=( WrongAnimal const& ) {
    std::cout << "this is WrongAnimal copy assignment" << std::endl;
    return *this;
}


std::string WrongAnimal::getType( void ) {
    return Type;
}
void WrongAnimal::makeSound( void ) {
    std::cout << "Wrong Animal Sound" << std::endl;
}