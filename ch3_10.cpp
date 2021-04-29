#include <iostream>
#include <string>
using namespace std;

class Add{
	int a, b;
public:
	Add(){}
	void setValue(int x, int y){
		a = x;
		b = y;
	}
	int calculate(){
		return a + b;
	}
};
class Sub{
	int a, b;
public:
	Sub(){}
	void setValue(int x, int y){
		a = x;
		b = y;
	}
	int calculate(){
		return a - b;
	}
};
class Mul{
	int a, b;
public:
	Mul(){}
	void setValue(int x, int y){
		a = x;
		b = y;
	}
	int calculate(){
		return a * b;
	}
};
class Div{
	int a, b;
public:
	Div(){}
	void setValue(int x, int y){
		a = x;
		b = y;
	}
	int calculate(){
		return a / b;
	}
};

int main(){
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	string str;
	while (true){
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> str;
		if (str == "+"){
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (str == "-") {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (str == "*") {
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else if (str == "/"){
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}
	}
}