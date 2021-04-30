#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand((unsigned)time(0));
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;

	while (true){
		cout << ">>";
		getline(cin, str);

		if (str == "exit") break;

		int lenght = str.length();
		int n = rand() % lenght + 1;
		int alpha = rand() % 2;

		if (str[n] != ' '){
			if (alpha == 0) str[n] = (char)((rand() % 26) + 65); //Upper
			else if (alpha == 1) str[n] = (char)((rand() % 26) + 97); //Lowwer
		}
		cout << str << endl;
	}
}