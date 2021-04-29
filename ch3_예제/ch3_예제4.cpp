#include <iostream>
using namespace std;

class Circle{
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle():Circle(1){} //위임생성자

Circle::Circle(int r){ //타겟생성자
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}
double Circle::getArea(){
	return 3.14*radius*radius;
}

int main(){
	Circle donut;
	cout << "donut 면적은 " << donut.getArea() << endl;

	Circle pizza(30);
	cout << "pizza 면적은 " << pizza.getArea() << endl;
}