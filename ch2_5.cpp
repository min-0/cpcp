#include <iostream>

int main()
{
	std::cout << "���ڿ��� �Է��϶�(100�� �̸�)\n";

	int cnt = 0;
	char s[100];

	std::cin.getline(s, 100, '\n');

	for (int i = 0; i < 100; i++)
	{
		if (s[i] == 'x')
			cnt++;
	}

	std::cout << "x�� ������ " << cnt << "\n";
}