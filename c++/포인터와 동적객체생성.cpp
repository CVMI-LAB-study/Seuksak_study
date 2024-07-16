#include <iostream>
using namespace std;

class Circle {		//Circle Class
	int radius;		//private
public:
	Circle() { radius = 1; }		//�⺻��
	~Circle() {		//�Ҹ���
		cout << radius <<" ��ȯ��" << endl;
	}
	int getArea() { return 3.14 * radius * radius; }		//���� ���� ���

	void setRadius(int radius) {		//�Ű������� ���� radius���� class�� radius ������ �־���
		this->radius = radius;		//this ->
	}

	int getRadius() { return radius; }		//������ ��ȯ
};
int main() {
	int n;
	int count = 0;
	cout << "������ ���� ����: ";
	cin >> n;
	Circle* pC = new Circle[n];		//n��ŭ pC �����Ϳ� Circle Ŭ���� �迭 ����
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		cout << "������ " << pC[i].getRadius() << "�� ��" << endl;		//�������� 1(�⺻��)�� radius �� ���
	}
	for (int i = 0; i < n; i++) {		//������ ���� �������� ����
		pC[i].setRadius(rand() % 100 + 1);
	}
	for (int i = 0; i < n; i++) {		//������ ���� ������ raidus �� ���
		cout << "������ " << pC[i].getRadius() << "�� ��" << endl;
		if (pC[i].getRadius() > 100) count++;		//raidus ���� 100�� �Ѵ��� �Ǻ�, �Ѵ´ٸ� count++
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;		//radius ���� 100�� �Ѵ� �� ���� ���
	delete [] pC;		//�޸� ��ȯ �迭 �����̿��⿡ []�� ���ش�
}