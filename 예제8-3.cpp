#include <iostream>
#include <string>
using namespace std;

class TV{
	int size; //��ũ�� ũ��
public:
	TV(){ size = 20; }
	TV(int size){ this->size = size; }
	int getSize(){ return size; }
};

class wideTV : public TV{ //TV�� ��ӹ޴� WideTV
	bool videoIn;
public:
	wideTV(int size, bool videoIn) : TV(size){
		this->videoIn = videoIn;
	}
	bool getVideoIn(){ return videoIn; }
};

class smartTV :public wideTV{ //WideTV�� ��ӹ޴� SmartTV
	string ipAddr; //���ͳ� �ּ�
public:
	smartTV(string ipAddr, int size) : wideTV(size, true){
		this->ipAddr = ipAddr;
	}
	string getIpAddr(){ return ipAddr; }
};
int main(){
	//32��ġ ũ�⿡ "192.0.0.1"�� ���ͳ� �ּҸ� ������ ����Ʈ TV ��ü ����
	smartTV htv("192.0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;
	cout << "VideoIn = " << boolalpha << htv.getVideoIn() << endl;
	cout << "IP = " << htv.getIpAddr() << endl;
}