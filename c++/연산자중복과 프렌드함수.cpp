#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	Power& operator++();		//++a 형태 연산자 정의
	Power operator++(int a);		//a++ 형태 연산자 정의
	friend Power operator+(Power op1, Power op2); 	//friend 함수로 외부에서 사용 가능
	friend ostream& operator <<(ostream& os,Power op2);
	bool operator==(Power op2) {		//판별 연산 재정의
		return kick == op2.kick && punch == op2.punch;
	}
	void show();
	
};
Power& Power::operator++()		//++a 형태 연산자 정의
{
	kick++;
	punch++;
	return *this;
}
Power Power::operator++(int a)		//a++ 형태 연산자 정의
{
	Power tmp = *this;
	this->kick++;
	this->punch++;
	return tmp;
}
Power operator+(Power op1, Power op2)		//두 인자를 더하는 식 재정의
{
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}
ostream& operator<<(ostream& os, Power op2)		//cout 출력 재정의
{
	os << "["<< op2.kick << "," << op2.punch <<"]";
	return os;
}
void Power::show() {
	cout << "kick=" << kick << "," << "punch = " << punch << endl;
}
int main() {
	Power a(3, 4), b = (4, 6), c;
	c = a++;
	cout << a << "," << b << "," << c << endl;
	c = ++b;
	cout << a << "," << b << "," << c << endl;
	c = a + b;
	cout << c << endl;
	if (a == b) cout << "power 같다.";
	else cout << "power 같지 않다.";
}



