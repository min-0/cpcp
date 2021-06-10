#include <iostream>
#include <string>
using namespace std;

class TV{
	int size; //스크린 크기
public:
	TV(){ size = 20; }
	TV(int size){ this->size = size; }
	int getSize(){ return size; }
};

class wideTV : public TV{ //TV를 상속받는 WideTV
	bool videoIn;
public:
	wideTV(int size, bool videoIn) : TV(size){
		this->videoIn = videoIn;
	}
	bool getVideoIn(){ return videoIn; }
};

class smartTV :public wideTV{ //WideTV를 상속받는 SmartTV
	string ipAddr; //인터넷 주소
public:
	smartTV(string ipAddr, int size) : wideTV(size, true){
		this->ipAddr = ipAddr;
	}
	string getIpAddr(){ return ipAddr; }
};
int main(){
	//32인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
	smartTV htv("192.0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;
	cout << "VideoIn = " << boolalpha << htv.getVideoIn() << endl;
	cout << "IP = " << htv.getIpAddr() << endl;
}