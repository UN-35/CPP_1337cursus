/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:40:02 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/03 00:26:45 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    std::vector<int> v;
    v.push_back(4);
    v.push_back(3);
    try{
        Span s(10);
        s.addNumber(1);
        s.addNumber(34);
        s.addNumber(12);
        s.addNumber(322);

        std::cout << s.longestSpan() << std::endl;
        std::cout << s.shortestSpan() << std::endl;
        s.addRange(v.begin(), v.end());
        std::cout << s.longestSpan() << std::endl;
        std::cout << s.shortestSpan() << std::endl;
    } catch( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}