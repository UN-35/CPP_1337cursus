/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:07:27 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/10 18:48:47 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>



class Fixed {
private:
    int FixedPointNum;
    static const int FractBits = 8;
public:
    Fixed( void );
    Fixed( const int number );
    Fixed( const float FPN );
    ~Fixed( void );
    
    Fixed(Fixed const& f);
    Fixed& operator=(Fixed const& f);

    float toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits( void ) const;
    void setRawBits( int const raw );


    bool operator<( Fixed const& op );
    bool operator>( Fixed const& op );
    bool operator>=( Fixed const& op );
    bool operator<=( Fixed const& op );
    bool operator==( Fixed const& op );
    bool operator!=( Fixed const& op );

    Fixed operator+( Fixed const& op);
    Fixed operator-( Fixed const& op);
    Fixed operator/( Fixed const& op);
    Fixed operator*( Fixed const& op);

    Fixed& operator++( void );
    Fixed& operator--( void );

    Fixed operator++( int fp );
    Fixed operator--( int fp );

    Fixed static& min(Fixed& obj1, Fixed& obj2);
    Fixed static const& min(Fixed const& obj1, Fixed const& obj2);
    Fixed static& max(Fixed& obj1, Fixed& obj2);
    Fixed static const& max(Fixed const& obj1, Fixed const& obj2);
};

std::ostream& operator<<( std::ostream& ostream, Fixed const& op);

#endif // !FIXED_HPP