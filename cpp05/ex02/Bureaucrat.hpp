/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:51 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/24 21:43:49 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
        Bureaucrat();
    public:
        Bureaucrat( std::string const& name, int grade );
        Bureaucrat( const Bureaucrat& obj );
        Bureaucrat& operator=( const Bureaucrat& obj );
        virtual ~Bureaucrat();

        std::string const& getName() const;
        int getGrade() const;

        void increment();
        void decrement();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        void signForm( AForm& F );
        void executeForm( AForm const& F);
};


std::ostream& operator<<( std::ostream& ostream, Bureaucrat const& op);


#endif