#include <iostream>
using namespace std;
/*
int main() {
	int a, b;
	cin >> a >> b;
	try {
		if (b < 0) throw "음수 불가";
		if (b == 0) throw b;
		cout << a / b << endl;
	}
	catch (int e) {
		cout << e << "나눌 수 없습니다." << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
	cout << "end~~~" << endl;
}
*/
template <class T>		//템플릿 int
class Mystack {
	T data[5];
	int top;
public:
	Mystack() :top(-1) {}
	void push(T n) throw(char*) {
		if (top == 4) throw "stack is full";
		top++; data[top] = n;
	}
	int pop() throw(char*) { 
		if (top == -1) throw "stack is empty";
		T t = data[top--]; return t; 
	}
};
int main() {
	Mystack <int>st;
	try {		//예외처리
		for (int i = 1; i <= 5; i++) {
			st.push(i);
		}
		st.push(1);
		st.push(2);
		cout << st.pop() << endl;
		cout << st.pop() << endl;
		cout << st.pop() << endl;
	}
	catch (const char* s) {		//예외에서 받은 문자 출력
		cout << s << endl;
	}
}