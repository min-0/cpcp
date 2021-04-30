#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(){ radius = 1; }
	void setRadius(int radius){
		this->radius = radius;
	}
	double getArea();
};
double Circle::getArea(){
	return 3.14*radius*radius;
}

int main(){
	int n;
	cout << "원의 개수 >> ";
	cin >> n;
	Circle *round = new Circle[n];
	int r;
	int cnt = 0;
	for (int i = 0; i < n; i++){
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		round[i].setRadius(r);

		if (100 < round[i].getArea()) cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다" << endl;
}