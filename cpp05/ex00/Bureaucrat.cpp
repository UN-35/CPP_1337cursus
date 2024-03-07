/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:48 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/07 15:27:23 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( std::string const& name, int grade ) {
    this->name = name;
    if ( grade > 150 )
        throw GradeTooLowException();
    else if ( grade < 0 )
        throw GradeTooHighException();
    this->grade = grade;
}

std::string const& Bureaucrat::getName() const {
    return name;
}
int Bureaucrat::getGrade() const {
    return grade;
}
void Bureaucrat::increment() {
    if ( grade + 1 > 150 )
        throw GradeTooLowException();
    grade++;
}
void Bureaucrat::decrement() {
    if ( grade - 1 < 0 )
        throw GradeTooHighException();
    grade--;
}


// GradeTooHighException what()
const char* Bureaucrat::GradeTooHighException::what() {
    return "GradeTooHighException";
}
// GradeTooLowException what()
const char* Bureaucrat::GradeTooLowException::what() {
    return "GradeTooLowException";
}



std::ostream& operator<<( std::ostream& ostream, Bureaucrat const& op) {
    ostream << op.getName() << ", bureaucrat grade " << op.getGrade() << std::endl;
    return ostream;
}




Bureaucrat::~Bureaucrat()
{
}
