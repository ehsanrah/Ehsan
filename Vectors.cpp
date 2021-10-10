#include <iostream>
#include <vector>

int main()
{
	std::vector<std::string> fruits = {"apples","bananas","grapes","oranges"};
	
	std::cout << fruits[0] <<std::endl; // first element of the vector
	std::cout << fruits[3] <<std::endl; // last element of the vector
	std::cout << fruits.size() << std::endl; // size of the vector

	fruits.push_back("watermelons"); // add and elements
	fruits.push_back("cheries"); // add another elements

	fruits.pop_back(); // deleting the last elements

	// a for loops that displays every elements of the vector

	for (int i = 0; i < fruits.size(); i++)
	{
		std::cout << fruits[i] << std::endl;
	}

	return 0;
}
