#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);
	int cnt = 0;

	for (int i = 0; i < str.length(); i++){
		if (str[i] == 'a'){
			cnt++;
		}
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
	//int index;
	//cout << "a ���ڴ� " << str.find('a', index) << "��° �ڸ����� �����մϴ�" << endl;
}