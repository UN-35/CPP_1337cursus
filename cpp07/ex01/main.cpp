/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:39:45 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/30 05:44:08 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void display( T const& t ) {
    std::cout << t << std::endl;
}

int main() {
    std::string arr[4] = {"look", "mom", "I can", "fly"};
    iter( arr, 4, display );
}