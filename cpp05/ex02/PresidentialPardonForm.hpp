/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:00:22 by yoelansa          #+#    #+#             */
/*   Updated: 2024/03/09 13:03:48 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm( std::string target );
        ~PresidentialPardonForm();
        void execute( Bureaucrat B ) const;
};





#endif