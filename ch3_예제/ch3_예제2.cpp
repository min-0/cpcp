#include <iostream>
using namespace std;

class Rectangle{ //클래스 선언
public:
	int width;
	int height;
	int getArea();
};
int Rectangle::getArea(){//클래스 구현
	return width*height;
}

int main(){
	Rectangle rect; //객체 생성
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}