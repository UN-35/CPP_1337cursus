/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 00:45:56 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 17:52:51 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {}
RPN::RPN( RPN const& obj ) {this->operator=(obj);}
RPN& RPN::operator=( RPN const& obj ) {
    if ( this != &obj )
        this->contain = obj.contain;
    return *this;
}
RPN::~RPN( void ) {}

void RPN::calculator( std::string input ) {
    while ( input.find(' ') != std::string::npos )
        input.erase( input.find(' '), 1 );
    for ( std::string::iterator iter = input.begin(); iter != input.end(); iter++ ) {
        if ( std::isdigit( *iter ))
            contain.push( *iter - 48 );
        else  if ( !std::isdigit( *iter ) && contain.size() > 1 ) {
            float second = contain.top();
            contain.pop();
            float first = contain.top();
            contain.pop();
            switch ( *iter )
            {
                case '+':
                    contain.push( first + second );
                    break;
                case '-':
                    contain.push( first - second);
                    break;
                case '*':
                    contain.push( first * second );
                    break;
                case '/':
                    if ( !second ) {
                        std::cerr << "Error: cannot divide by `0`." << std::endl;
                        return ;
                    }
                    contain.push( first / second );
                    break;
                default:
                    std::cerr << "Error" << std::endl;
                    return ;
            }
        } else {
            std::cerr << "Error" << std::endl;
            return ;
        }
    }
    if ( contain.size() > 1 || input.empty() ) {
        std::cerr << "Error" << std::endl;
        return ;
    }
    std::cout << contain.top() << std::endl;
}