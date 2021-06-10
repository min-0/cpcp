#include <iostream>
#include <string>
using namespace std;

class Point{
	int x, y;
public:
	void set(int x, int y){ this->x = x; this->y = y; }
	void showPoint(){ cout << "(" << x << ", " << y << ")" << endl; }
};

class ColorPoint : public Point{
	string color;
public:
	void setColor(string color){ this->color = color; }
	void showColor(){
		cout << color << ":";
		showPoint();
	}
	void showColorPoint(){
		cout << color << ":";
		showPoint();
	}
};

int main(){
	ColorPoint cp;
	ColorPoint *pDer = &cp;
	Point *pBase = (Point*)pDer; //업 캐스팅(Point*)생략 가능

	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	//pBase->showColorPoint(); showColorPoint()는 Point의 멤버가 아니므로 컴파일 오류
}