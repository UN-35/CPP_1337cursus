/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:48 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/27 02:23:47 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( std::string const& name, int grade ): name(name), grade(grade) {
    if ( grade > 150 )
        throw GradeTooLowException();
    else if ( grade < 1 )
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ): name(obj.name), grade(obj.grade) {}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& obj ) {
    grade = obj.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string const& Bureaucrat::getName() const {
    return name;
}
int Bureaucrat::getGrade() const {
    return grade;
}
void Bureaucrat::decrement() {
    if ( grade + 1 > 150 )
        throw GradeTooLowException();
    grade++;
}
void Bureaucrat::increment() {
    if ( grade - 1 < 0 )
        throw GradeTooHighException();
    grade--;
}


// GradeTooHighException what()
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}
// GradeTooLowException what()
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "GradeTooLowException";
}

std::ostream& operator<<( std::ostream& ostream, Bureaucrat const& op) {
    ostream << op.getName() << ", bureaucrat grade " << op.getGrade() << std::endl;
    return ostream;
}
