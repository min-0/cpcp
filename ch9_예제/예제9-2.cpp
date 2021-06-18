#include <iostream>
using namespace std;

class Base{
public:
	virtual void f(){ cout << "Base::f() called" << endl; } //�����Լ� ����
};

class Derived : public Base{
public:
	virtual void f(){ cout << "Derived::f() called" << endl; } //�������̵�
};

int main(){
	Derived d, *pDer;
	pDer = &d; //��ü d�� ����Ų��.
	pDer->f(); //Derived::f() ȣ��

	Base *pBase;
	pBase = pDer; //��ĳ����, ��ü d�� ����Ų��. 
	pBase->f(); //���� ���ε� �߻�!! Derived::f() ����
}