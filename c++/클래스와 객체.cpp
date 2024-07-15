#include <iostream>
using namespace std;

class Time {	//Ŭ���� ����
private:	//����������
	int hour;
	int minute;
	int second;
public:		//���������� �ܺο��� ���� ����
	Time() {	//����Ʈ ������
		hour = 0;
		minute = 0;
		second = 0;
	}
	Time(int h, int m, int s) :hour{ h }, minute{ m }, second{ s } {}		//�ʱ�ȭ ������
	void set_hour(int h) { if (h >= 24) hour = 0; else hour = h; }		//�� ������ �����ϴ� �޼ҵ�
	void set_minute(int m) { hour = m; }		//�� ������ �����ϴ� �޼ҵ�
	int get_hour() { return hour; }		//�� ������ ��ȯ�ϴ� �Լ�
	void inc_hour();
	void print();
};
void Time::inc_hour() {		//�ð��� 1�� �����ϴ� �Լ�
	++hour;
	if (hour > 23)
		hour = 0;
}
void Time::print() {	//��� �Լ�
	cout << hour << ":" << minute << ":" << second << endl;
}
int main() {
	Time t;
	Time t2(1, 30, 30);
	t.inc_hour();
	t.print();
	t.set_hour(13);
	t.set_minute(30);
	t.print();
	t2.print();
	cout << "t time: " << t.get_hour() << endl;
}