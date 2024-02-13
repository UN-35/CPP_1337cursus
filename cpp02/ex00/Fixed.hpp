/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:55:43 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/13 14:55:45 by yoelansa         ###   ########.fr       */
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