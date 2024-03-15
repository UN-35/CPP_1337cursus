/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:54 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/15 17:35:59 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	// try {
	// 	Bureaucrat bureau("UN35", 14);

	// 	ShrubberyCreationForm sh("shrub");
	// 	RobotomyRequestForm rb("robot");
	// 	PresidentialPardonForm pr("Presid");

	// 	std::cout << "------------------------------------" << std::endl;
	// 	sh.beSigned(bureau);
	// 	std::cout << sh << std::endl;
	// 	bureau.signAForm(sh);

	// 	std::cout << "------------------------------------" << std::endl;
	// 	rb.beSigned(bureau);
	// 	std::cout << rb << std::endl;
	// 	bureau.signAForm(rb);

	// 	std::cout << "------------------------------------" << std::endl;
	// 	pr.beSigned(bureau);
	// 	std::cout << pr << std::endl;
	// 	bureau.signAForm(pr);

	// } catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }

    Intern someRandomIntern;

    AForm* rb = someRandomIntern.makeForm("robotomy request", "Bender00");
    AForm* pr = someRandomIntern.makeForm("presidential pardon", "Bender01");
    AForm* sh = someRandomIntern.makeForm("shrubbery creation", "Bender02");
    AForm* none = someRandomIntern.makeForm("wrong_formName", "Bender03");

	std::cout << "-------------------------" << std::endl;
	std::cout << rb->getName() << std::endl;
    std::cout << *rb << std::endl;

	std::cout << "-------------------------" << std::endl;
	std::cout << pr->getName() << std::endl;
    std::cout << *pr << std::endl;

	std::cout << "-------------------------" << std::endl;
	std::cout << sh->getName() << std::endl;
    std::cout << *sh << std::endl;

	std::cout << "-------------------------" << std::endl;
	std::cout << none << std::endl;

    delete rb;
    delete pr;
    delete sh;

    return 0;
}
