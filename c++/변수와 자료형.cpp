#include <iostream>
#include <string>
using namespace std; //namespace ������� ���ӽ����̽� ����

auto add(int x, int y) {
    return x + y;
}
int main()
{
    int a, b;
    string st; //���ڿ�
    cout << "������ �ϳ��� �Է�: "; //��� printf -> cout <<
    cin >> a >> b; //�Է� scanf -> cin >>

    auto s = add(a, b); //�ڵ����� �ڷ��� ���� auto
    cout << "�� ���� ���� " << s << "\n"; //s�� ���

    st = "Hello";
    if (st == "Hello") //string�� ���� ���ڿ� �� ����
        cout << "st == Hello �̴�\n";
    cout << st + " World" << endl; //st�� World �� �Բ� ���

    return 0;
}

