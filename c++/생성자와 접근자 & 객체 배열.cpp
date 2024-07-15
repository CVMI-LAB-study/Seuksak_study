#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
	string name;
	double marks;
public:
	Student(string n, double m) :name{ n }, marks(m) {}
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "���� :" << marks << endl;
	}
	void set_name(string n) { name = n; }		//�̸��� �����ϴ� �޼ҵ�
	string get_name() { return name; }		//�̸��� �������� �޼ҵ�
	void set_marks(double m) { marks = m; }		//������ �����ϴ� �޼ҵ�
	double get_marks() { return marks; }		//������ �������� �޼ҵ�
};
bool compare(Student& p, Student& q) {		//�� ��ü�� ������ ���ϴ� �Լ�
	return p.get_marks() > q.get_marks();
}
int main() {
	vector<Student> list;		//Student ��Ҹ� ���ͷ� list��� �̸����� ����
	string name;
	double marks;
	for (int i = 0; i < 3; i++) {
		cout << "�̸�?: ";
		cin >> name;
		cout << "����?: ";
		cin >> marks;
		list.push_back(Student(name, marks));		//Student�� �̸��� ������ list�� �߰�
	}
	list.push_back(Student("jung", 4.5));		//�߰��� �л� Ŭ���� ����
	list[0].set_marks(4.1);		//0�� �ε����� ���� ����
	sort(list.begin(), list.end(), compare); //compare �Լ��� ���� ����Ʈ�� ����
	for (auto& e : list)	//list ��ŭ �ݺ�
		e.print();
	return 0;
}