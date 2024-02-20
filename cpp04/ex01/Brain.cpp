/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:42:50 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 19:59:00 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
}
Brain::Brain( Brain const& obj ) {
    *this = obj;
}
Brain& Brain::operator=( Brain const& obj) {
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    return *this;
}
Brain::~Brain() {
}
