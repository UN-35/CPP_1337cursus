/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:49:38 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:36:51 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal( void );
    Animal( std::string T );
    Animal( Animal const& obj );
    Animal& operator=( Animal const& obj );
    ~Animal( void );

    void makeSound( void ) const;
    std::string getType( void ) const;
};



#endif // !ANIMAL_HPP