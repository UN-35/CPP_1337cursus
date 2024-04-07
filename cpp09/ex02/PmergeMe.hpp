/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:16:26 by yoelansa          #+#    #+#             */
/*   Updated: 2024/04/07 13:18:38 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class PmergeMe {
    public:
        PmergeMe( void );
        PmergeMe( PmergeMe const& obj );
        PmergeMe& operator=( PmergeMe const& obj );
        ~PmergeMe( void );
};


#endif