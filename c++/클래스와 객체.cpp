#include <iostream>
using namespace std;

class Time {	//클래스 생성
private:	//접근지정자
	int hour;
	int minute;
	int second;
public:		//접근지정자 외부에서 접근 가능
	Time() {	//디폴트 생성자
		hour = 0;
		minute = 0;
		second = 0;
	}
	Time(int h, int m, int s) :hour{ h }, minute{ m }, second{ s } {}		//초기화 생성자
	void set_hour(int h) { if (h >= 24) hour = 0; else hour = h; }		//시 정보를 변경하는 메소드
	void set_minute(int m) { hour = m; }		//분 정보를 변경하는 메소드
	int get_hour() { return hour; }		//시 정보를 반환하는 함수
	void inc_hour();
	void print();
};
void Time::inc_hour() {		//시간을 1씩 증가하는 함수
	++hour;
	if (hour > 23)
		hour = 0;
}
void Time::print() {	//출력 함수
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