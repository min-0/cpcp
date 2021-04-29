#include <iostream>
#include <string>
using namespace std;

class Account{
	string name;
	int id, balance;
public:
	Account(string n, int i, int b){
		name = n;
		id = i;
		balance = b;
		cout << name << ',' << id << ',' << balance << endl;
	}
	string getOwner(){ 
		return name; 
	}
	int deposit(int input){ balance += input; return balance; }
	int withdraw(int output){ balance -= output; return balance; }
	int inquiry(){return balance;}

};

int main(){
	Account a("Kittae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}