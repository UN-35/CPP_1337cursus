/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:51 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/07 16:02:30 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <cstdlib>

class Bureaucrat {
    private:
        std::string name;
        int grade;
        Bureaucrat();
    public:
        Bureaucrat( std::string const& name, int grade );
        ~Bureaucrat();

        std::string const& getName() const;
        int getGrade() const;

        void increment();
        void decrement();

        class GradeTooHighException : std::exception {
            public:
                virtual const char *what();
        };
        class GradeTooLowException : std::exception {
            public:
                virtual const char *what();
        };
};


std::ostream& operator<<( std::ostream& ostream, Bureaucrat const& op);


#endif