#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
	string tel;
public:
	Person(){}
	string getNAme(){ return name; }
	string getTel(){ return tel; }
	void set(string name, string tel){
		this->name = name;
		this->tel = tel;
	}
};


int main(){
	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���" << endl;
	Person p[3];
	string n, t;

	for (int i = 0; i < 3; i++){
		cout << "��� " << i + 1 << ">>";
		cin >> n >> t;
		p[i].set(n, t);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++){
		cout << p[i].getNAme() << ' ';
	}
	cout << "\n��ȭ��ȣ �˻��մϴ�. " << "�̸��� �Է��ϼ���>>";
	cin >> n;

	for (int i = 0; i < 3; i++){
		if (p[i].getNAme() == n){
			cout << "��ȭ ��ȣ�� " << p[i].getTel() << endl;
			break;
		}
		else
		{
			cout << "���� �̸� �Դϴ�." << endl;
		}
	}
}