/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:46:05 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/10 13:03:48 by uns-35           ###   ########.fr       */
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
};

std::ostream& operator<<( std::ostream& ostream, Fixed const& op);

#endif // !FIXED_HPP