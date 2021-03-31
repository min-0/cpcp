#include <iostream>

int main()
{
	for (int i = 1; i <=9; i++)
	{
		for (int k = 1; k <= 9; k++)
		{
			std::cout << k << " * " << i << " =  " << i*k << " " ;
		}
		std::cout << "\n";
	}
}
