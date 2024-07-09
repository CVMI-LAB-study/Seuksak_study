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
	srand(time(NULL)); //매번 다른 난수 생성

	for (auto& i : a) { //참조를 통해 값 변화
		i = rand() % 99 + 1; //1-99 까지 난수 생성
		cout << i << " "; //난수 출력
	}
	cout << endl; //줄바꿈


	max = INT_MIN; 
	min = INT_MAX;

	for (int i = 0; i < 10; i++){
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
		prod_score(a[i]);
	}
	cout << " 최댓값 : " << max << endl;
	cout << " 최솟값 : " << min << endl;

	return 0;
}