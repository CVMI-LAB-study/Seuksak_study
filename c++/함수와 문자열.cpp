#include <iostream>
#include <string>
using namespace std;
void swap(int &x, int &y) { //call by reference
	int t;
	t = x;
	x = y;
	y = t;
}
inline int sum(int a, int b, int c = 0) { //c = 0 ����Ʈ, inlene �Լ� ������� �ӵ��� ���� ���� �� ����
	return a + b + c;
}
int main() {

	string str = "I like";
	string str2 = " me";
	string s1;
	string s2;
	s1 = str + str2;
	int index = s1.find("l");  //l�� �� �ִ� �ε��� ã��
	cout << "s1.find('l') = " << index << endl;
	s1.insert(1, "-");
	cout << s1 << "  " << s1.length() << endl; //s1�� ���ڿ��� s1�� ���� ���

	int sum1 = sum(10, 20);
	int sum2 = sum(10, 20, 30);
	cout << "sum(10, 20) = " << sum1 << ", " << "sum(10, 20, 30) = " << sum2 << endl;

	return 0;
}
