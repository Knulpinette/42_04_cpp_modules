#include "Bureaucrat.hpp"
#include "Form.hpp"

/*main from the amazing dda_silv*/

static void test_high_init(void) {
	std::cout << "#test_high_init" << std::endl;

	try {
		Form form("28C", -3, 10);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void test_low_init(void) {
	std::cout << "#test_low_init" << std::endl;

	try {
		Form form("28C", 50, 342);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void test_high_and_low_init(void) {
	std::cout << "#test_high_and_low_init" << std::endl;

	try {
		Form form("28C", -4, 342);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void test_unvalid_sign(void) {
	std::cout << "#test_unvalid_sign" << std::endl;

	try {
		Bureaucrat desk_jockey("Sam Lowry", 42);
		Form form("28B", 25, 10);

		std::cout << desk_jockey << std::endl;
		std::cout << form << std::endl;

		desk_jockey.signForm(form);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void test_valid_sign(void) {
	std::cout << "#test_valid_sign" << std::endl;

	try {
		Bureaucrat desk_jockey("Sam Lowry", 42);
		Form form("28C", 50, 10);

		std::cout << desk_jockey << std::endl;
		std::cout << form << std::endl;

		desk_jockey.signForm(form);

		std::cout << form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main(void) {
	test_high_init();
	test_low_init();
	test_high_and_low_init();
	test_unvalid_sign();
	test_valid_sign();
}