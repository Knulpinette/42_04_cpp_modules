#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> vector1;

		for (int i = 0; i < 5; i++)
			vector1.push_back(i);

		std::cout << "vector1 (int): ";
		std::for_each(
				vector1.begin(),
				vector1.end(),
				&printVector<int>);
		std::cout << std::endl;
		
		std::vector<int>::const_iterator searchInt1 = easyfind(vector1, 4);
		std::vector<int>::const_iterator searchInt2 = easyfind(vector1, 10);
		std::vector<int>::const_iterator searchInt3 = easyfind(vector1, 1);
		std::vector<int>::const_iterator searchInt4 = easyfind(vector1, -2);

		if (searchInt1 != vector1.end())
			std::cout << "found: " << *searchInt1 << std::endl;
		else
			std::cout << "not found: 4" << std::endl;
		if (searchInt2 != vector1.end())
			std::cout << "found: " << *searchInt2 << std::endl;
		else
			std::cout << "not found: 10" << std::endl;
		if (searchInt3 != vector1.end())
			std::cout << "found: " << *searchInt3 << std::endl;
		else
			std::cout << "not found: 1" << std::endl;
		if (searchInt4 != vector1.end())
			std::cout << "found: " << *searchInt4 << std::endl;
		else
			std::cout << "not found: -2" << std::endl;
	}

	{
		std::vector<float> vector2;

		for (float i = 35; i < 45; i++)
			vector2.push_back(i);

		std::cout << "vector2 (float): ";
		std::for_each(
				vector2.begin(),
				vector2.end(),
				&printVector<float>);
		std::cout << std::endl;
		
		std::vector<float>::const_iterator searchFloat1 = easyfind(vector2, 34);
		std::vector<float>::const_iterator searchFloat2 = easyfind(vector2, 20);
		std::vector<float>::const_iterator searchFloat3 = easyfind(vector2, 40);
		std::vector<float>::const_iterator searchFloat4 = easyfind(vector2, -2);

		if (searchFloat1 != vector2.end())
			std::cout << "found: " << *searchFloat1 << std::endl;
		else
			std::cout << "not found: 34" << std::endl;
		if (searchFloat2 != vector2.end())
			std::cout << "found: " << *searchFloat2 << std::endl;
		else
			std::cout << "not found: 20" << std::endl;
		if (searchFloat3 != vector2.end())
			std::cout << "found: " << *searchFloat3 << std::endl;
		else
			std::cout << "not found: 40" << std::endl;
		if (searchFloat4 != vector2.end())
			std::cout << "found: " << *searchFloat4 << std::endl;
		else
			std::cout << "not found: -2" << std::endl;
	}

	return 0;
}