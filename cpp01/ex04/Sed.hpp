/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:54:25 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/03 10:54:14 by uns-35           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
private:
    std::string Infile;
    std::string Outfile;
public:
    Sed( std::string infile );
    ~Sed();
    void replace( std::string s1, std::string s2 );
};


#endif // !SED_HPP