#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���." << endl << ">>";

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
	cout << "���� �� �̸��� " << temp <<endl;
}

//strcpy ���� ������ ����. �ͱ�~?