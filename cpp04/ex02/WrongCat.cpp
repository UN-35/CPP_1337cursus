/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:27:30 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:47:08 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "WrongCat" ) {
    std::cout << "this is WrongCat default constructor" << std::endl;
}
WrongCat::~WrongCat() {
    std::cout << "this is WrongCat destructor" << std::endl;
}
WrongCat::WrongCat( WrongCat const& obj ) : WrongAnimal( obj ) {
    std::cout << "this is WrongCat copy constructor" << std::endl;
    *this = obj;
}
WrongCat& WrongCat::operator=( WrongCat const& obj ) {
    std::cout << "this is WrongCat copy assignment" << std::endl;
    Type = obj.Type;
    return *this;
}
