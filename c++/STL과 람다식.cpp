#include <iostream>
#include <set>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(int x, int y) {
	return x < y;
}
int main() {
	set<int> my_set;
	int sum = 0;
	srand(time(NULL));
	while (my_set.size() != 6)
	{
		my_set.insert(rand() % 45 + 1);
	}
	cout << "������ �ζ� ��ȣ :";
	for (auto &e : my_set) {
		cout << e << " ";
	}
	cout << endl;
	for_each(my_set.begin(), my_set.end(), [&sum](int n) {sum += n; });		//��� ���� �� ���ٽ�
	cout << "�� :" << sum << endl;
	for_each(my_set.begin(), my_set.end(), [](int n) {cout << n << " "; });		//��� �� ���
	cout << endl;
	vector<int> v;		
	for (auto e : my_set) v.push_back(e);		//���ͷ� ����
	random_shuffle(v.begin(), v.end());		//�������� ����
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });		//���� ���
	cout << endl;
	sort(v.begin(), v.end(), [](int x, int y) {return x < y; });		//�ø����� ����
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });		//���� ���
	cout << endl;
	cout << "¦���� ���� :" << count_if(v.begin(), v.end(), [](int n) {return n % 2 == 0; }) << endl;		//¦���� ���� �Ǻ� ���ٽ�

	//vector <int>::iterator it;
	for (auto it = v.begin(); it != v.end(); ++it)		//auto�� ��ü ����
		cout << *it << " ";
	cout << endl;
}