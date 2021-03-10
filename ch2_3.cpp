#include <iostream>

int main()
{
	int n1, n2 = 0;

	std::cout << "두 수를 입력하라 ";
	std::cin >> n1;
	std::cin >> n2;

	if (n1 < n2)
		std::cout << n2 << "\n";
	else if (n1 > n2)
		std::cout << n1 << "\n";
	else
		std::cout << "두 수의 크기가 같습니다\n";
}