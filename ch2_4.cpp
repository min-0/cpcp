#include <iostream>

int main()
{
	double n[5];
	double max = 0;

	std::cout << "5 ���� �Ǽ��� �Է��϶�>>";

	for (int i = 0; i < 5; i++)
	{
		std::cin >> n[i];

		if (max < n[i])
		{
			max = n[i];
		}
	}
	std::cout << "���� ū �� = " << max <<"\n";
}