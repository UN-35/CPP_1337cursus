/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:07:54 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/12 13:48:31 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	try {
		Bureaucrat bureau("UN35", 14);

		ShrubberyCreationForm sh("shrub");
		RobotomyRequestForm rb("robot");
		PresidentialPardonForm pr("Presid");

		std::cout << "------------------------------------" << std::endl;
		sh.beSigned(bureau);
		std::cout << sh << std::endl;
		bureau.signAForm(sh);

		std::cout << "------------------------------------" << std::endl;
		rb.beSigned(bureau);
		std::cout << rb << std::endl;
		bureau.signAForm(rb);

		std::cout << "------------------------------------" << std::endl;
		pr.beSigned(bureau);
		std::cout << pr << std::endl;
		bureau.signAForm(pr);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

    return 0;
}
