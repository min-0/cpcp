#include <iostream>
#include <cstring>

int main()
{
	char password[10];
	char checkpw[10];
	std::cout << "�� ��ȣ�� �Է��ϼ���>>";

	std::cin >> password;

	std::cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";

	while (true)
	{
		std::cin >> checkpw;

		if (strcmp(password, checkpw) == 0)
		{
			std::cout << "�����ϴ�" << "\n";
			break;
		}
		else
			std::cout << "�ٽ� �Է����ּ���>>";
	}
}