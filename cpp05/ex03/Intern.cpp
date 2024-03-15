/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:20:34 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/15 02:58:27 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern( void ) {
    FNames[0] = "presidential_pardon_form";
    FNames[1] = "robotomy_request_form";
    FNames[2] = "shrubbery_creation_form";

    form[0] = &Intern::presidential_pardon_form;
    form[1] = &Intern::robotomy_request_form;
    form[2] = &Intern::shrubbery_creation_form;
}
Intern::Intern( const Intern& obj ) {
    *this = obj;
}
Intern& Intern::operator=( const Intern& obj ) {
    ( void )obj;
    return *this;
}
Intern::~Intern() {}

AForm* Intern::makeForm( std::string name, std::string target ) {
    for ( int i = 0; i < 3; i++ ) {
        if (!name.compare(FNames[i]))
            std::cout << "Intern creates "<< name << std::endl;
        return (this->*form[i])(target);
    }

    std::cout << "Intern cannot create " << name << "form." << std::endl;
    return NULL;
}

AForm* Intern::presidential_pardon_form (std::string target) {
    return new PresidentialPardonForm( target );
}

AForm* Intern::robotomy_request_form (std::string target) {
    return new RobotomyRequestForm( target );
}

AForm* Intern::shrubbery_creation_form (std::string target) {
    return new ShrubberyCreationForm( target );
}