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
	cout << "���� ���� >> ";
	cin >> n;

	for (int i = 0; i < n; i++){
		cout << "�� " << i+1 << "�� ������ >>";
		cin >> r;
		Circle *c = new Circle[r];
		c->setRadius(r);
		if (c->getAera() > 100) cnt++;
		delete c;
	}
	cout << "������ 100���� ū ���� " << cnt << "���Դϴ�." << endl;
}