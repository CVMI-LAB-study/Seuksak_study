#include <iostream>
using namespace std;
/*
class TV {
	int size;
public:
	TV() { size = 20; }		//TV �⺻��
	TV(int size) { this->size = size; }
	int getSIze() { return size; }
};
class WideTV :public TV {		//TV Ŭ���� �Ļ�
	bool videoIn;
public:
	WideTV(int size, bool videoIn) :TV(size) { this->videoIn = videoIn; }		//������
	bool getVideoIn() { return videoIn; }
};
class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) :WideTV(size, true) { this->ipAddr = ipAddr; }		//������
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
	Shape(int x = 0, int y = 0) :x{ x }, y{ y } {}		//������
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
	void draw() { cout << "shape drawing..." << endl; }		//draw()�� ���� �⺻ ����
	int getArea() { return 0; }		//getArea()�� ���� �⺻ ����
};
class CIrcle :public Shape {		//shape Ŭ���� ���
	int r;
protected:		//��� ���� �ܺο��� ���� �Ұ���
	void draw() {		//draw()�� ���� ������
		cout << "Circle drawing..." << endl;
	}
public:
	CIrcle(int r, int x, int y) :Shape(x, y), r{ r } {}		//������
	void out(){
		draw();		//pretect �� �Լ� ����
	}
	double getArea() {		//getArea()�� ���� ������
		return 3.14 * r * r;
	}
};
class Rect :public Shape {		//shape Ŭ���� ���
	int w, h;
protected:		//��� ���� �ܺο��� ���� �Ұ���
	void draw() {		//draw()�� ���� ������
		cout << "Rectangle drawing..." << endl;
	}

public:
	Rect(int x, int y, int w, int h) :Shape(x, y), w{ w }, h{ h } {}		//������
	void out() {
		draw();		//pretect �� �Լ� ����
	}
	int getArea() {		//getArea()�� ���� ������
		return w * h;
	}
};
int main() {
	CIrcle c(10,1,1);
	Rect r(1,1,10,20);
	c.out();
	r.out();
	//c.setX(2);		//Circle Ŭ�������� shape Ŭ������ �Լ�( setX() ) ��� ���� (���)
	cout << c.getArea() << endl;
	cout << r.getArea() << endl;
}