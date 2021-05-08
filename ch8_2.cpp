#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(){ radius = 1; }
	Circle(int radius = 0){ this->radius = radius; }
	int getRadius(){ return radius; }
	void setRadius(int radius){ this->radius = radius; }
	double getArea(){ return 3.14*radius*radius; }
};
class NamedCircle : public Circle{
	string name;
public:
	NamedCircle();
	void setRN(int r, string name){
		setRadius(r);
		this->name = name;
	}
	string getName(){ return name; }
};
int main(){
	Circle a();
	int size[5];
	NamedCircle pizza[5];
	int n, max;
	string name;
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;

	for (int i = 0; i < 5; i++){
		cout << i + 1 << ">>";
		cin >> n >> name;
		pizza[i].setRN(n, name);
		size[i] = pizza[i].getArea();
	}
	max = 0;
	for (int i = 0; i < 5; i++){

	}
}