#include <iostream>
#include <stringh>

int main()
{
	char yesman[10];
	std::cout << "종료하고 싶으면 yes를 입력해주세요>>";

	while (true)
	{
		std::cin >> yesman;

		if (strcmp(yesman, "yes") == 0)
		{
			std::cout << "종료합니다..."<<"\n";
			break;
		}
		else
			std::cout << "종료하고 싶으면 yes를 입력해주세요>>";
	}
}