#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

/*main from the amazing dda_silv*/

int	main(void)
{
	Intern someRandomIntern;
	Form* form;

	form = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete form;
	
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	delete form;

	form = someRandomIntern.makeForm("shrubbery creation", "Bender");
	delete form;

	form = someRandomIntern.makeForm("earth destruction request form", "Bender");
	return (0);
}
