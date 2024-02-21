/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:42:50 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:54:09 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "this is Brain default constructor" << std::endl;
}
Brain::Brain( Brain const& obj ) {
    std::cout << "this is Brain copy constructor" << std::endl;
    *this = obj;
}
Brain& Brain::operator=( Brain const& obj) {
    std::cout << "this is Brain copy assignment" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    return *this;
}
Brain::~Brain() {
    std::cout << "this is Brain destructor" << std::endl;
}
