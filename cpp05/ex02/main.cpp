#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*main from the amazing dda_silv*/

static void test_general_form_unvalid_sign(void) {
	std::cout << "*** test_general_form_unvalid_sign ***" << std::endl;

	ShrubberyCreationForm form("Brazil");
	Bureaucrat desk_jockey1("Terry Gilliams", 146);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);

	std::cout << std::endl;
}

static void test_general_form_unvalid_execute(void) {
	std::cout << "*** test_general_form_unvalid_execute ***" << std::endl;

	ShrubberyCreationForm form("Brazil");
	Bureaucrat desk_jockey1("Terry Gilliams", 142);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey1.executeForm(form);

	std::cout << std::endl;
}

static void test_shrubbery_creation_form(void) {
	std::cout << "*** test_shrubbery_creation_form ***" << std::endl;

	ShrubberyCreationForm form("TheFly");
	Bureaucrat desk_jockey1("Sam Lowry", 142);
	Bureaucrat desk_jockey2("Terry Gilliams", 132);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey2.executeForm(form);

	std::cout << std::endl;
}

static void test_robotomy_request_form(void) {
	std::cout << "*** test_robotomy_request_form ***" << std::endl;

	RobotomyRequestForm form("Brazil");
	Bureaucrat desk_jockey1("Sam Lowry", 70);
	Bureaucrat desk_jockey2("Terry Gilliams", 42);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey2.executeForm(form);

	std::cout << std::endl;
}

static void test_presidential_pardon_form(void) {
	std::cout << "*** test_presidential_pardon_form ***" << std::endl;

	PresidentialPardonForm form("Douglas Adams");
	Bureaucrat desk_jockey1("Sam Lowry", 23);
	Bureaucrat desk_jockey2("Terry Gilliams", 1);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey2.executeForm(form);

	std::cout << std::endl;
}

int main(void) {
	test_general_form_unvalid_sign();
	test_general_form_unvalid_execute();
	test_shrubbery_creation_form();
	test_robotomy_request_form();
	test_presidential_pardon_form();
}
