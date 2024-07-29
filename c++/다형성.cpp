#include <iostream>
using namespace std;
class Converter {		//�߻� Ŭ����
protected:
	double r;
	virtual double convert(double src) = 0;		//���� �����Լ�
	virtual string getSourceString() = 0;		//���� �����Լ�
	virtual string getDestString() = 0;		//���� �����Լ�
public:
	Converter(double r) { this->r = r; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�.";
		cout << getSourceString() << "�� �Է��ϼ���>>";
		cin >> src;
		cout << "��ȯ��� : " << convert(src) << getDestString() << endl;
	}
};
class WontoDollar :public Converter {
protected:
	
	virtual double convert(double src) { return src / r; }		//�����Լ�
	virtual string getSourceString() { return "��"; }		//�����Լ�
	virtual string getDestString() { return "�޷�"; }		//�����Լ�
public:
	WontoDollar(double r) :Converter(r) {}

};
class KmtoMile :public Converter {
protected:
	virtual double convert(double src) { return src / r; }		//�����Լ�
	virtual string getSourceString() { return "Km"; }		//�����Լ�
	virtual string getDestString() { return "Mile"; }		//�����Լ�
public:
	KmtoMile(double r) :Converter(r) {}

};
int main() {
	WontoDollar wd(1010);		//1�޶� 1010���̶�� ����, WontoDollar ��ü wd ����
	KmtoMile toMile(1.6039344);		//1������ 1.6039344km�� ����, KmtoMile ��ü toMile ����
	// wd.run();
	//toMile.run();

	Converter* p;		//�߻� Ŭ������ ������ ���� ����
	p = &wd;		//�����Ͱ� wd ��ü�� ����Ŵ
	p->run();		//wd�� run ����
	p = &toMile;		//�����Ͱ� toMile ��ü�� ����Ŵ
	p->run();		//toMile�� run ����
}