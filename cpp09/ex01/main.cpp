/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 00:41:11 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 01:08:09 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char **av ) {
    if (ac != 2) {
		std::cerr <<  "Usage: ./RPN \"`num` `num` `operation` ...\"" << std::endl;
		return 1;
	}

	RPN calculator;
	std::string input = av[1];

	calculator.calculator(input);

	return 0;
}