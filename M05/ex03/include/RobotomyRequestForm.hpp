/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:40:52 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/21 21:52:25 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "AForm.hpp"
# include <cstdlib>

typedef class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string form);
		RobotomyRequestForm(RobotomyRequestForm& form);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(RobotomyRequestForm const & form);
		void					execute(Bureaucrat const & executor) const;
		void					beSigned(const Bureaucrat& bureaucrat);
}		RRForm;

#endif /*__ROBOTOMYREQUESTFORM_HPP__*/
