/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:49:38 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/19 22:21:53 by yoelansa         ###   ########.fr       */
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
    std::string getType() const;
    void makeSound() const;
    ~Animal();
};




class Dog : public Animal {
public:
    Dog();
    Dog( Dog const& obj );
    Dog& operator=( Dog const& obj);
    void makeSound();
    ~Dog();
};




class Cat : public Animal {
public:
    Cat();
    Cat( Cat const& obj );
    Cat& operator=( Cat const& obj);
    void makeSound();
    ~Cat();
};

#endif // !ANIMAL_HPP