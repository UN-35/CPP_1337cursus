/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:50:50 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/10 11:58:22 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Fixed class constractors
Fixed::Fixed( void ) {
    std::cout << "Default constructor called" << std::endl;
    this->FixedPointNum = 0;
}
Fixed::Fixed( const int number ) {
    std::cout << "Int constructor called" << std::endl;
    FixedPointNum = number << FractBits;
}
Fixed::Fixed( const float number ) {
    std::cout << "Float constructor called" << std::endl;
    FixedPointNum = std::roundf( number * ( 1 << FractBits ) );
}


//Fixed class copy constractor
Fixed::Fixed( Fixed& f ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits( f.getRawBits() );
}

//Fixed class copy assignment operator
Fixed& Fixed::operator=( Fixed& f ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &f )
        this->FixedPointNum = f.getRawBits();
    return *this;
}

//Fixed class Destractor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//Fixed class member functions
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedPointNum;
}
void Fixed::setRawBits( int const raw ) {
    this->FixedPointNum = raw;
}



float Fixed::toFloat( void ) {
    return static_cast<float>( this->getRawBits() ) / ( 1 << FractBits );
}
int Fixed::toInt( void ) {
    return this->FixedPointNum >> FractBits;
}

std::ostream& operator<<( std::ostream& ostream, Fixed const& obj) {
    ostream << obj.toFloat();
    return ostream;
}
