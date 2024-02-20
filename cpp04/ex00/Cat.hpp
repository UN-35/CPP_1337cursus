/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:23:14 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 16:24:02 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"



class Cat : public Animal {
public:
    Cat();
    Cat( Cat const& obj );
    Cat& operator=( Cat const& obj);
    void makeSound();
    ~Cat();
};





#endif // !CAT_HPP