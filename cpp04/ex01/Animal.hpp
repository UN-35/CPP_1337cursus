/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:49:38 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 16:29:31 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal( std::string T );
    Animal( Animal const& obj );
    Animal& operator=( Animal const& obj );
    std::string getType() const;
    void makeSound() const;
    ~Animal();
};



#endif // !ANIMAL_HPP