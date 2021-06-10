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
	Point *pBase = (Point*)pDer; //업 캐스팅

	pBase->set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint*)pBase; //다운 캐스팅, 강제 타입 변환 필요
	pDer->setColor("Red"); //정상 컴파일
	pDer->showColorPoint(); //정상 컴파일
}