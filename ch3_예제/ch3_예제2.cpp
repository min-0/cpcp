#include <iostream>
using namespace std;

class Rectangle{ //Ŭ���� ����
public:
	int width;
	int height;
	int getArea();
};
int Rectangle::getArea(){//Ŭ���� ����
	return width*height;
}

int main(){
	Rectangle rect; //��ü ����
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
}