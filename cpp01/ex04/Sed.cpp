/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:38:23 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/04 16:05:36 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed( std::string infile ) {
    this->Infile = infile;
    this->Outfile = infile + ".replace";
}

Sed::~Sed()
{
}

void Sed::replace( std::string s1, std::string s2 ) {
    std::ifstream inf(this->Infile.c_str());
    if ( !inf.is_open() ) {
        std::cerr << "open() failed" << std::endl;
        return ;
    }
    if ( s1.empty() ) {
        std::cerr << "s1 empty" << std::endl;
        return ;
    }

    std::string buffer;

    std::getline (inf, buffer, '\0');
    if ( buffer.empty() ) {
        std::cerr << "infile empty" << std::endl;
        return ;
    }

    size_t i = 0;
    while ( 1 ) {
        i = buffer.find(s1, i);
        if ( i == std::string::npos )
            break ;
        buffer.erase(i, s1.length());
        buffer.insert(i, s2);
        i += s2.length();
    }

    std::ofstream outf(this->Outfile.c_str());
    outf << buffer;
    inf.close();
    outf.close();
}