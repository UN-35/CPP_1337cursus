/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:54 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/04 20:48:44 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat B("LORD", 150);
        // B.decrement();
        std::cout << "BUUReauCrat" << std::endl;
        B.increment();
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
        return 1;
    }
}