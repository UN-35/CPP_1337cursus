/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:35:20 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/08 15:52:53 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int FixedP;
    static const int FractBits = 8;
public:
    Fixed( void );
    Fixed(Fixed& f);
    Fixed& operator=(Fixed& f);
    ~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif // !FIXED_HPP