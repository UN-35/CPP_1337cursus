/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:40:22 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/03 00:25:51 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span( void ) : N(0) {}
Span::Span( unsigned int num ): N(num) {}
Span::Span( Span const& obj ): N(obj.N) {}
Span& Span::operator=( Span const& obj ) {
    if ( this != &obj ) {
        this->vect = obj.getVect();
        this->N = obj.getN();
    }
    return *this;
}
Span::~Span() {}



void Span::addNumber( int n ) {
    if ( this->vect.size() == this->N )
        throw std::range_error( "Couldn't add a Number!" );
    vect.push_back( n );
}


void Span::addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
    std::vector<int> v( begin , end );
    if (v.size() > N - vect.size())
        throw std::range_error( "Couldn't add Range!" );
    vect.insert( vect.end(), v.begin(), v.end() );
}


unsigned int Span::getN() const {
    return this->N;
}

std::vector<int> Span::getVect() const {
    return this->vect;
}

unsigned int Span::longestSpan() {
    if ( vect.size() <= 1 )
        throw std::range_error( "Couldn't find a span" );
    return *( std::max_element( vect.begin(), vect.end() ) )
        - *( std::min_element( vect.begin(), vect.end() ) );
}
unsigned int Span::shortestSpan() {
    if ( vect.size() <= 1 )
        throw std::range_error( "Couldn't find a span" );
    
    std::vector<int> V = vect;
    std::sort( V.begin(), V.end() );

    int sp = *(V.begin() + 1) - *(V.begin());
    if ( V.size() == 2 )
        return sp;
    for (std::vector<int>::iterator iter = V.begin() + 1; iter != V.end() - 1; iter++)
        if ( *(iter + 1) - *(iter) < sp)
            sp = *(iter + 1) - *(iter); 
    return sp;
}

