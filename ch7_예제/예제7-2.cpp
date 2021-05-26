#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool RectManager::equals(Rect r, Rect s); //friend 함수 선언
};

bool RectManager::equals(Rect r, Rect s) { //구현부
	if (r.width == s.width && r.height == s.height) return true;
	else eturn false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;

	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}