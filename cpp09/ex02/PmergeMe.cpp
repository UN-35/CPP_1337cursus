/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:18:40 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 13:22:21 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const& obj ) {
    this->operator=(obj);
}

PmergeMe& PmergeMe::operator=( PmergeMe const& obj ) {
    ( void )obj;
    return *this;
}

PmergeMe::~PmergeMe( void ) {}