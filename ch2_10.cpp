#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char input[100];
	int len = 0;

	cout << "���ڿ� �Է�>>";
	cin >> input;

	for (int i = 0; i < strlen(input); i++){
		for (int k = 0; k <= i; k++){
			cout << input[k];
		}
		cout << "\n";
	}

}