#include <iostream>
#include <stringh>

int main()
{
	char yesman[10];
	std::cout << "�����ϰ� ������ yes�� �Է����ּ���>>";

	while (true)
	{
		std::cin >> yesman;

		if (strcmp(yesman, "yes") == 0)
		{
			std::cout << "�����մϴ�..."<<"\n";
			break;
		}
		else
			std::cout << "�����ϰ� ������ yes�� �Է����ּ���>>";
	}
}