#include <iostream>
#include <cstring>

int main()
{
	char password[10];
	char checkpw[10];
	std::cout << "새 암호를 입력하세요>>";

	std::cin >> password;

	std::cout << "새 암호를 다시 한 번 입력하세요>>";

	while (true)
	{
		std::cin >> checkpw;

		if (strcmp(password, checkpw) == 0)
		{
			std::cout << "같습니다" << "\n";
			break;
		}
		else
			std::cout << "다시 입력해주세요>>";
	}
}