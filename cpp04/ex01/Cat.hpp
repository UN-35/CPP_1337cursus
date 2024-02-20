/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:23:14 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 19:55:43 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal , public Brain {
private:
    Brain* catBrain;
public:
    Cat();
    Cat( Cat const& obj );
    Cat& operator=( Cat const& obj);
    void makeSound();
    ~Cat();
};





#endif // !CAT_HPP