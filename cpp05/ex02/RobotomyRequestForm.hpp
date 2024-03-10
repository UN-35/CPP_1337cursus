/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:43:27 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/09 12:48:13 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm( std::string target );
        ~RobotomyRequestForm();
        void execute( Bureaucrat B ) const;
};





#endif 