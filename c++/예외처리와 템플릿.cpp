#include <iostream>
using namespace std;
/*
int main() {
	int a, b;
	cin >> a >> b;
	try {
		if (b < 0) throw "���� �Ұ�";
		if (b == 0) throw b;
		cout << a / b << endl;
	}
	catch (int e) {
		cout << e << "���� �� �����ϴ�." << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
	cout << "end~~~" << endl;
}
*/
template <class T>		//���ø� int
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
	try {		//����ó��
		for (int i = 1; i <= 5; i++) {
			st.push(i);
		}
		st.push(1);
		st.push(2);
		cout << st.pop() << endl;
		cout << st.pop() << endl;
		cout << st.pop() << endl;
	}
	catch (const char* s) {		//���ܿ��� ���� ���� ���
		cout << s << endl;
	}
}