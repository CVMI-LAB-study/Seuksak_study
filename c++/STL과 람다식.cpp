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
	cout << "생성된 로또 번호 :";
	for (auto &e : my_set) {
		cout << e << " ";
	}
	cout << endl;
	for_each(my_set.begin(), my_set.end(), [&sum](int n) {sum += n; });		//모든 수의 합 람다식
	cout << "합 :" << sum << endl;
	for_each(my_set.begin(), my_set.end(), [](int n) {cout << n << " "; });		//모든 수 출력
	cout << endl;
	vector<int> v;		
	for (auto e : my_set) v.push_back(e);		//벡터로 쓰기
	random_shuffle(v.begin(), v.end());		//랜덤으로 섞기
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });		//벡터 출력
	cout << endl;
	sort(v.begin(), v.end(), [](int x, int y) {return x < y; });		//올름차순 정렬
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });		//벡터 출력
	cout << endl;
	cout << "짝수의 개수 :" << count_if(v.begin(), v.end(), [](int n) {return n % 2 == 0; }) << endl;		//짝수의 개수 판별 람다식

	//vector <int>::iterator it;
	for (auto it = v.begin(); it != v.end(); ++it)		//auto로 대체 가능
		cout << *it << " ";
	cout << endl;
}