#include <iostream>

int main()
{
	double n[5];
	double max = 0;

	std::cout << "5 개의 실수를 입력하라>>";

	for (int i = 0; i < 5; i++)
	{
		std::cin >> n[i];
		if (max < n[i]){
			max = n[i];}
	}
	std::cout << "제일 큰 수 = " << max <<"\n";
}
