/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:54 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/13 13:09:57 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat B("LORD", 11);
        Form F("Form", 12, 70);
        B.signForm(F);
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
        return 1;
    }
}