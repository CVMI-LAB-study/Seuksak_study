#include <iostream>
using namespace std;

class Circle {		//Circle Class
	int radius;		//private
public:
	Circle() { radius = 1; }		//기본형
	~Circle() {		//소멸자
		cout << radius <<" 반환됨" << endl;
	}
	int getArea() { return 3.14 * radius * radius; }		//원의 넓이 계산

	void setRadius(int radius) {		//매개변수로 받은 radius값을 class의 radius 변수로 넣어줌
		this->radius = radius;		//this ->
	}

	int getRadius() { return radius; }		//반지름 반환
};
int main() {
	int n;
	int count = 0;
	cout << "생성할 원의 개수: ";
	cin >> n;
	Circle* pC = new Circle[n];		//n만큼 pC 포인터에 Circle 클래스 배열 생성
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		cout << "반지름 " << pC[i].getRadius() << "인 원" << endl;		//반지름이 1(기본형)인 radius 값 출력
	}
	for (int i = 0; i < n; i++) {		//반지름 값을 랜덤으로 설정
		pC[i].setRadius(rand() % 100 + 1);
	}
	for (int i = 0; i < n; i++) {		//반지름 값이 랜덤인 raidus 값 출력
		cout << "반지름 " << pC[i].getRadius() << "인 원" << endl;
		if (pC[i].getRadius() > 100) count++;		//raidus 값이 100을 넘는지 판별, 넘는다면 count++
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;		//radius 값이 100을 넘는 원 개수 출력
	delete [] pC;		//메모리 반환 배열 생성이였기에 []를 써준다
}