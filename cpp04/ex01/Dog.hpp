/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:56 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 19:54:55 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal , public Brain {
private:
    Brain* brain;
public:
    Dog();
    Dog( Dog const& obj );
    Dog& operator=( Dog const& obj);
    void makeSound();
    ~Dog();
};





#endif // !DOG_HPP