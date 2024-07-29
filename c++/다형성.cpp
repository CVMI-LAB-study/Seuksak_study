#include <iostream>
using namespace std;
class Converter {		//추상 클래스
protected:
	double r;
	virtual double convert(double src) = 0;		//순수 가상함수
	virtual string getSourceString() = 0;		//순수 가상함수
	virtual string getDestString() = 0;		//순수 가상함수
public:
	Converter(double r) { this->r = r; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다.";
		cout << getSourceString() << "을 입력하세요>>";
		cin >> src;
		cout << "반환결과 : " << convert(src) << getDestString() << endl;
	}
};
class WontoDollar :public Converter {
protected:
	
	virtual double convert(double src) { return src / r; }		//가상함수
	virtual string getSourceString() { return "원"; }		//가상함수
	virtual string getDestString() { return "달러"; }		//가상함수
public:
	WontoDollar(double r) :Converter(r) {}

};
class KmtoMile :public Converter {
protected:
	virtual double convert(double src) { return src / r; }		//가상함수
	virtual string getSourceString() { return "Km"; }		//가상함수
	virtual string getDestString() { return "Mile"; }		//가상함수
public:
	KmtoMile(double r) :Converter(r) {}

};
int main() {
	WontoDollar wd(1010);		//1달라에 1010원이라고 가정, WontoDollar 객체 wd 생성
	KmtoMile toMile(1.6039344);		//1마일은 1.6039344km로 가정, KmtoMile 객체 toMile 생성
	// wd.run();
	//toMile.run();

	Converter* p;		//추상 클래스는 포인터 생성 가능
	p = &wd;		//포인터가 wd 객체를 가리킴
	p->run();		//wd의 run 실행
	p = &toMile;		//포인터가 toMile 객체를 가리킴
	p->run();		//toMile의 run 실행
}