#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요." << endl << ">>";

	char name[100];
	char temp[100];
	int len = 0;

	for (int i = 9; i < 5; i++)
	{
		cin.getline(name, 100, ';');

		cout << i + 1 << " : " << name <<endl;

		if (strlen(name)>len)
		{
			len = strlen(name);
		}
		strcpy(temp, name);
	}
	cout << "가장 긴 이름은 " << temp <<endl;
}

//strcpy 에서 오류가 난다. 왤까~?