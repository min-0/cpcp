#include <iostream>

int main()
{
	std::cout << "문자열을 입력하라(100개 미만)\n";

	int cnt = 0;
	char s[100];

	std::cin.getline(s, 100, '\n');

	for (int i = 0; i < 100; i++){
		if (s[i] == 'x')
			cnt++;}

	std::cout << "x의 개수는 " << cnt << "\n";
}
