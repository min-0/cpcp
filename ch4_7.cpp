#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(){ radius = 1; }
	void setRadius(int radius){
		this->radius = radius;
	}
	double getArea(){
		return 3.14*radius*radius;
	}
};

int main(){
	Circle c[3];
	int r;
	int cnt = 0;
	for (int i = 0; i < 3; i++){
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);

		if (100 < c[i].getArea()) cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�" << endl;
}