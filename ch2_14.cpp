#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char order[100];
	int num, sum, temp = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

	while (true){
		
		if (temp > 20000){
			cout << "���� " << temp << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~*^^*" << endl;
			break;
		}
		else
		{
			cout << "�ֹ�>>";
			cin >> order >> num;
			if (strcmp(order, "����������") == 0)
			{
				sum = num * 2000;
				temp += sum;
				cout << sum << "�� �Դϴ�. ���ְ� �弼��." << endl;
			}
			else if (strcmp(order, "�Ƹ޸�ī��") == 0)
			{
				sum = num * 2300;
				temp += sum;
				cout << sum << "�� �Դϴ�. ���ְ� �弼��." << endl;
			}
			else if (strcmp(order, "īǪġ��") == 0)
			{
				sum = num * 2500;
				temp += sum;
				cout << sum << "�� �Դϴ�. ���ְ� �弼��." << endl;
			}
			else
				cout << "�ٽ� �ֹ����ּ���~!" << endl;
		}
	}
}