#include <iostream>

int main(void) {
	char buffer[512];

	std::cout << "Type : ";
	std::cin >> buffer;
	std::cout << "You typed : " << buffer << std::endl;
	return (0);
}
