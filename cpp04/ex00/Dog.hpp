/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:56 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:40:08 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"



class Dog : public Animal {
public:
    Dog( void );
    Dog( Dog const& obj );
    Dog& operator=( Dog const& obj);
    ~Dog( void );
    
    void makeSound( void ) const;
};





#endif // !DOG_HPP