#include <iostream>

using namespace std;

int main(){
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;

	int menu;
	int size;

	while (true){
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> menu;
		if (menu == 1){
			cout << "���κ�?";
			cin >> size;
			cout << "«�� " << size << "�κ� ���Խ��ϴ�.\n";
		}
		else if (menu == 2){
			cout << "���κ�?";
			cin >> size;
			cout << "¥�� " << size << "�κ� ���Խ��ϴ�.\n";
		}
		else if (menu == 3){
			cout << "���κ�?";
			cin >> size;
			cout << "������ " << size << "�κ� ���Խ��ϴ�.\n";
		}
		else if (menu == 4){
			cout << "���� ������ �������ϴ�.\n";
			break;
		}
		else
		{
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		}
	}
}