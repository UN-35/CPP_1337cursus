/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:56:24 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/14 21:55:29 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Fixed:: class constractors
Fixed::Fixed( void ) {
    this->FixedPointNum = 0;
}
Fixed::Fixed( const int number ) {
    FixedPointNum = number << FractBits;
}
Fixed::Fixed( const float number ) {
    FixedPointNum = roundf( number * ( 1 << FractBits ) );
}

//Fixed:: class copy constractor
Fixed::Fixed( Fixed const& f ) {
    this->setRawBits( f.getRawBits() );
}

//Fixed:: class copy assignment operator
Fixed& Fixed::operator=( Fixed const& f ) {
    if ( this != &f )
        this->FixedPointNum = f.getRawBits();
    return *this;
}

//Fixed:: class Destractor
Fixed::~Fixed() {
}

//Fixed:: class member functions
int Fixed::getRawBits( void ) const {
    return this->FixedPointNum;
}
void Fixed::setRawBits( int const raw ) {
    this->FixedPointNum = raw;
}

// to* functions
float Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << FractBits );
}
int Fixed::toInt( void ) const {
    return this->FixedPointNum >> FractBits;
}

//ostream operators
std::ostream& operator<<( std::ostream& ostream, Fixed const& op ) {
    ostream << op.toFloat();
    return ostream;
}


// comparison operators
bool Fixed::operator<( Fixed const& op ) {
    return this->FixedPointNum < op.getRawBits();
}
bool Fixed::operator>( Fixed const& op ) {
    return this->FixedPointNum > op.getRawBits();
}
bool Fixed::operator>=( Fixed const& op ) {
    return this->FixedPointNum >= op.getRawBits();
}
bool Fixed::operator<=( Fixed const& op ) {
    return this->FixedPointNum <= op.getRawBits();
}
bool Fixed::operator==( Fixed const& op ) {
    return this->FixedPointNum == op.getRawBits();
}
bool Fixed::operator!=( Fixed const& op ) {
    return this->FixedPointNum != op.getRawBits();
}

//Arithmetic operators
Fixed Fixed::operator+( Fixed const& op ) {
    return Fixed(this->toFloat() + op.toFloat());
}
Fixed Fixed::operator-( Fixed const& op ) {
    return Fixed(this->toFloat() - op.toFloat());
}
Fixed Fixed::operator/( Fixed const& op ) {
    return Fixed(this->toFloat() / op.toFloat());
}
Fixed Fixed::operator*( Fixed const& op ) {
    return Fixed(this->toFloat() * op.toFloat());
}

// increment/decrement operators
Fixed& Fixed::operator++( void ) {
    this->FixedPointNum++;
    return *this;
}
Fixed& Fixed::operator--( void ) {
    this->FixedPointNum--;
    return *this;
}

Fixed Fixed::operator++( int ) {
    Fixed tmp(*this);
    this->FixedPointNum++;
    return tmp;
}
Fixed Fixed::operator--( int ) {
    Fixed tmp(*this);
    this->FixedPointNum--;
    return tmp;
}



// min w max operators
Fixed& Fixed::min( Fixed& obj1, Fixed& obj2 ) { 
    if ( obj1.getRawBits() < obj2.getRawBits())
        return obj1;
    else
        return obj2;
}
Fixed const& Fixed::min(Fixed const& obj1, Fixed const& obj2) {
    if ( obj1.getRawBits() < obj2.getRawBits())
        return obj1;
    else
        return obj2;
}

Fixed& Fixed::max( Fixed& obj1, Fixed& obj2 ) { 
    if ( obj1.getRawBits() > obj2.getRawBits())
        return obj1;
    else
        return obj2;
}
Fixed const& Fixed::max(Fixed const& obj1, Fixed const& obj2) {
    if ( obj1.getRawBits() > obj2.getRawBits())
        return obj1;
    else
        return obj2;
}