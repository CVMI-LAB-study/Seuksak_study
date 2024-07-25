#include <iostream>
using namespace std;
/*
class TV {
	int size;
public:
	TV() { size = 20; }		//TV 기본형
	TV(int size) { this->size = size; }
	int getSIze() { return size; }
};
class WideTV :public TV {		//TV 클래스 파생
	bool videoIn;
public:
	WideTV(int size, bool videoIn) :TV(size) { this->videoIn = videoIn; }		//생성자
	bool getVideoIn() { return videoIn; }
};
class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) :WideTV(size, true) { this->ipAddr = ipAddr; }		//생성자
	string getIp() { return ipAddr; }
};
int main() {
	SmartTV tv("192.0.0.1", 32);
	//WideTV tv(32, true);
	cout << "size=" << tv.getSIze() << endl;
	cout << "VideoIn=" << tv.getVideoIn() << endl;
	cout << "ip=" << tv.getIp() << endl;
}
*/

class Shape {
	int x, y;
public:
	Shape(int x = 0, int y = 0) :x{ x }, y{ y } {}		//생성자
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
	void draw() { cout << "shape drawing..." << endl; }		//draw()의 대한 기본 정의
	int getArea() { return 0; }		//getArea()의 대한 기본 정의
};
class CIrcle :public Shape {		//shape 클래스 상속
	int r;
protected:		//상속 제외 외부에서 접근 불가능
	void draw() {		//draw()의 대한 재정의
		cout << "Circle drawing..." << endl;
	}
public:
	CIrcle(int r, int x, int y) :Shape(x, y), r{ r } {}		//생성자
	void out(){
		draw();		//pretect 내 함수 접근
	}
	double getArea() {		//getArea()의 대한 재정의
		return 3.14 * r * r;
	}
};
class Rect :public Shape {		//shape 클래스 상속
	int w, h;
protected:		//상속 제외 외부에서 접근 불가능
	void draw() {		//draw()의 대한 재정의
		cout << "Rectangle drawing..." << endl;
	}

public:
	Rect(int x, int y, int w, int h) :Shape(x, y), w{ w }, h{ h } {}		//생성자
	void out() {
		draw();		//pretect 내 함수 접근
	}
	int getArea() {		//getArea()의 대한 재정의
		return w * h;
	}
};
int main() {
	CIrcle c(10,1,1);
	Rect r(1,1,10,20);
	c.out();
	r.out();
	//c.setX(2);		//Circle 클래스에서 shape 클래스의 함수( setX() ) 사용 가능 (상속)
	cout << c.getArea() << endl;
	cout << r.getArea() << endl;
}