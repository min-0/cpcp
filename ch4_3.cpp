#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cout << "문자열 입력>>";
	getline(cin, str);
	int cnt = 0;

	for (int i = 0; i < str.length(); i++){
		if (str[i] == 'a'){
			cnt++;
		}
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
	//int index;
	//cout << "a 문자는 " << str.find('a', index) << "번째 자리부터 존재합니다" << endl;
}