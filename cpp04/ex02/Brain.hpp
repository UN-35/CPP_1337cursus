/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:20:50 by yoelansa          #+#    #+#             */
/*   Updated: 2024/02/20 22:55:29 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain {
protected:
    std::string ideas[100];
public:
    Brain( void );
    Brain( Brain const& obj );
    Brain& operator=( Brain const& obj );
    ~Brain( void );
};



#endif // !BRAIN_HPP