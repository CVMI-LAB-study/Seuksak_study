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
		cout << "이름: " << name << endl;
		cout << "학점 :" << marks << endl;
	}
	void set_name(string n) { name = n; }		//이름을 설정하는 메소드
	string get_name() { return name; }		//이름을 가져오는 메소드
	void set_marks(double m) { marks = m; }		//학점을 설정하는 메소드
	double get_marks() { return marks; }		//학점을 가져오는 메소드
};
bool compare(Student& p, Student& q) {		//두 객체의 학점을 비교하는 함수
	return p.get_marks() > q.get_marks();
}
int main() {
	vector<Student> list;		//Student 요소를 벡터로 list라는 이름으로 생성
	string name;
	double marks;
	for (int i = 0; i < 3; i++) {
		cout << "이름?: ";
		cin >> name;
		cout << "학점?: ";
		cin >> marks;
		list.push_back(Student(name, marks));		//Student의 이름과 학점을 list에 추가
	}
	list.push_back(Student("jung", 4.5));		//추가로 학생 클래스 생성
	list[0].set_marks(4.1);		//0번 인덱스의 학점 수정
	sort(list.begin(), list.end(), compare); //compare 함수를 통해 리스트를 정렬
	for (auto& e : list)	//list 만큼 반복
		e.print();
	return 0;
}