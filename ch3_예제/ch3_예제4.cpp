#include <iostream>
using namespace std;

class Circle{
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle():Circle(1){} //���ӻ�����

Circle::Circle(int r){ //Ÿ�ٻ�����
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}
double Circle::getArea(){
	return 3.14*radius*radius;
}

int main(){
	Circle donut;
	cout << "donut ������ " << donut.getArea() << endl;

	Circle pizza(30);
	cout << "pizza ������ " << pizza.getArea() << endl;
}