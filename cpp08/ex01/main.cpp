/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:40:02 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/02 02:36:32 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    Span s(5);
    s.addNumber(1);
    s.addNumber(34);
    s.addNumber(12);
    s.addNumber(322);
    s.addNumber(5);
    std::cout << s.longestSpan() << std::endl;
    std::cout << s.shortestSpan() << std::endl;
}