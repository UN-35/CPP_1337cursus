/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 00:42:49 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 17:51:59 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
    private:
        std::stack<float> contain;
    public:
        RPN( void );
        RPN( RPN const& obj );
        RPN& operator=( RPN const& obj );
        ~RPN( void );
        
        void calculator( std::string input );
};


#endif