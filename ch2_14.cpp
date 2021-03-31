#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char order[100];
	int num, sum, temp = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

	while (true){
		
		if (temp > 20000){
			cout << "오늘 " << temp << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~*^^*" << endl;
			break;
		}
		else
		{
			cout << "주문>>";
			cin >> order >> num;
			if (strcmp(order, "에스프레소") == 0)
			{
				sum = num * 2000;
				temp += sum;
				cout << sum << "원 입니다. 맛있게 드세요." << endl;
			}
			else if (strcmp(order, "아메리카노") == 0)
			{
				sum = num * 2300;
				temp += sum;
				cout << sum << "원 입니다. 맛있게 드세요." << endl;
			}
			else if (strcmp(order, "카푸치노") == 0)
			{
				sum = num * 2500;
				temp += sum;
				cout << sum << "원 입니다. 맛있게 드세요." << endl;
			}
			else
				cout << "다시 주문해주세요~!" << endl;
		}
	}
}