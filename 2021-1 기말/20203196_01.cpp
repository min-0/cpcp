#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(){ this->radius = radius; }
	void setRadius(int radius){ this->radius = radius; };
	double getAera(){ return radius*radius*3.14; };
};

int main(){
	int n;
	int r;
	int cnt = 0;
	cout << "원의 개수 >> ";
	cin >> n;

	for (int i = 0; i < n; i++){
		cout << "원 " << i+1 << "의 반지름 >>";
		cin >> r;
		Circle *c = new Circle[r];
		c->setRadius(r);
		if (c->getAera() > 100) cnt++;
		delete c;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개입니다." << endl;
}