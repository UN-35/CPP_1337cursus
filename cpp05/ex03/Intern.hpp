/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:36:10 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/15 02:55:27 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern {
    private :
        typedef AForm* (Intern::*t_form)( std::string );

        std::string FNames[3];
        t_form form[3];

        AForm* presidential_pardon_form( std::string target );
        AForm* robotomy_request_form( std::string target );
        AForm* shrubbery_creation_form( std::string target );
    public :
        Intern( void );
        Intern( const Intern& obj );
        Intern& operator=( const Intern& obj );
        ~Intern();
        AForm* makeForm( std::string Fname, std::string Ftarget );

};



#endif