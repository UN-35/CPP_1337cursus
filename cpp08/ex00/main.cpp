/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:55:51 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/01 22:37:46 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main() {
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(5);
    vect.push_back(3);
    try {
        easyfind( vect, 3 );
    } catch ( std::exception &e ) {
        std::cout << e.what() << ": cannot find the value u looking for." << std::endl;
    }
    
}