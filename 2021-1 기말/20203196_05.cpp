#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius = 0){ this->radius = radius; }
	void show(){ cout << "radius = " << radius << "ÀÎ ¿ø" << endl; }
	friend Circle operator +(int x, Circle c);
	friend Circle operator +(Circle c,int x);

};
Circle operator +(int x, Circle c){
	c.radius += x;
	return c;
}
Circle operator +(Circle c, int x){
	c.radius += x;
	return c;
}

int main(){
	Circle a(5), b(4), c;
	b = 1 + a;
	a.show();
	b.show();
	c = b + 1;
	c.show();
}