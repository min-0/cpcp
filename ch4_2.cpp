#include <iostream>
using namespace std;

int main(){
	int *n = new int[5];
	double sum = 0;

	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++){
		cin >> n[i];
		sum += n[i];
	}
	cout << "평균 " << sum / 5 << endl;
}