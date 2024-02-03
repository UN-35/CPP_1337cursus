/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uns-35 <uns-35@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:38:23 by uns-35            #+#    #+#             */
/*   Updated: 2024/02/03 18:30:19 by uns-35           ###   ########.fr       */
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
    std::ifstream inf(this->Infile);
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

    std::ofstream outf(this->Outfile);
    outf << buffer;
    inf.close();
    outf.close();
}