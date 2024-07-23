#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	Power& operator++();		//++a ���� ������ ����
	Power operator++(int a);		//a++ ���� ������ ����
	friend Power operator+(Power op1, Power op2); 	//friend �Լ��� �ܺο��� ��� ����
	friend ostream& operator <<(ostream& os,Power op2);
	bool operator==(Power op2) {		//�Ǻ� ���� ������
		return kick == op2.kick && punch == op2.punch;
	}
	void show();
	
};
Power& Power::operator++()		//++a ���� ������ ����
{
	kick++;
	punch++;
	return *this;
}
Power Power::operator++(int a)		//a++ ���� ������ ����
{
	Power tmp = *this;
	this->kick++;
	this->punch++;
	return tmp;
}
Power operator+(Power op1, Power op2)		//�� ���ڸ� ���ϴ� �� ������
{
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}
ostream& operator<<(ostream& os, Power op2)		//cout ��� ������
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
	if (a == b) cout << "power ����.";
	else cout << "power ���� �ʴ�.";
}



