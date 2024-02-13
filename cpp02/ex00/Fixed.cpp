/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:55:36 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/13 14:55:39 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//Fixed class constractor
Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->FixedP = 0;
}

//Fixed class copy constractor
Fixed::Fixed(Fixed& f) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(f.getRawBits());
}

//Fixed class copy assignment operator
Fixed& Fixed::operator=( Fixed& f ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->FixedP = f.getRawBits();
    return *this;
}

//Fixed class Destractor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//Fixed class member functions
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedP;
}
void Fixed::setRawBits( int const raw ) {
    this->FixedP = raw;
}



