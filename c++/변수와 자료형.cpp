#include <iostream>
#include <string>
using namespace std; //namespace 사용으로 네임스페이스 생략

auto add(int x, int y) {
    return x + y;
}
int main()
{
    int a, b;
    string st; //문자열
    cout << "정수를 하나씩 입력: "; //출력 printf -> cout <<
    cin >> a >> b; //입력 scanf -> cin >>

    auto s = add(a, b); //자동으로 자료형 지정 auto
    cout << "두 수의 합은 " << s << "\n"; //s를 출력

    st = "Hello";
    if (st == "Hello") //string을 통한 문자열 비교 가능
        cout << "st == Hello 이다\n";
    cout << st + " World" << endl; //st에 World 를 함께 출력

    return 0;
}

