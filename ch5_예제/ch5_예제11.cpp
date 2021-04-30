#include <iostream>
#include <string>
using namespace std;
//const�� ��� �����͸� �� �� ����Ѵٰ� �Ѵ�. �׷��� �� �� �Ⱦ����
class Person{
	char * name;
	int id;
public:
	Person(int id, const char * name);
	Person(const Person & person);
	~Person();
	void ChangeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char*name){
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(const Person& person){
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "���� ������ ����, ���� ��ü�� �̸�" << this->name << endl;
}
Person::~Person(){
	if (name){
		cout << "name �Ҹ��� ����" << endl;
		delete[]name;
	}
}
void Person::ChangeName(const char *name){
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

int main(){
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();
	daughter.show();

	daughter.ChangeName("Grace");
	cout << "daugther �̸��� Grace�� ������ �� ----" << endl;
	father.show();
	daughter.show();

	return 0;
}