#include <iostream>
using namespace std;

int main(){
	int *n = new int[5];
	double sum = 0;

	cout << "���� 5�� �Է�>>";
	for (int i = 0; i < 5; i++){
		cin >> n[i];
		sum += n[i];
	}
	cout << "��� " << sum / 5 << endl;
}