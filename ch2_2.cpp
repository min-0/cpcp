#include <iostream>

int main()
{
	for (int i = 1; i <=9; i++)
	{
		for (int z = 1; z <= 9; z++)
		{
			std::cout << z << " * " << i << " =  " << i*z << " " ;
		}
		std::cout << "\n";
	}
}