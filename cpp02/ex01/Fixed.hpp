/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:46:05 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/10 11:41:43 by yoelansa         ###   ########.fr       */
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
    
    Fixed(Fixed& f);
    Fixed& operator=(Fixed& f);

    float toFloat( void );
    int toInt( void );

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream& operator<<( std::ostream& ostream, Fixed const& obj);

#endif // !FIXED_HPP