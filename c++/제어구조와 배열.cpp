#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void prod_score(int s) {
	/*
	if (s >= 90)
		cout << s << ": A" << endl;
	else if (s >= 80)
		cout << s << ": B" << endl;
	else if (s >= 70)
		cout << s << ": C" << endl;
	else
		cout << s << ": F" << endl;
	*/

	switch (s/10){
		case 10:
		case 9: cout << s << ": A" << endl; break;
		case 8: cout << s << ": B" << endl; break;
		case 7: cout << s << ": C" << endl; break;
		default: cout << s << ": F" << endl; break;
	}

}

int main() {
	int a[10];
	int max, min;
	srand(time(NULL)); //�Ź� �ٸ� ���� ����

	for (auto& i : a) { //������ ���� �� ��ȭ
		i = rand() % 99 + 1; //1-99 ���� ���� ����
		cout << i << " "; //���� ���
	}
	cout << endl; //�ٹٲ�


	max = INT_MIN; 
	min = INT_MAX;

	for (int i = 0; i < 10; i++){
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
		prod_score(a[i]);
	}
	cout << " �ִ� : " << max << endl;
	cout << " �ּڰ� : " << min << endl;

	return 0;
}