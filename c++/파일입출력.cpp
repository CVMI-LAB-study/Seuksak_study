#include <iostream>
#include <fstream>
using namespace std;
int main() {
	/*
	int i;
	ofstream os{ "data.txt" };		//data.txt ����
	for (i = 0; i < 10; i++) {
		os << i << " ";
	}
	os.close();		//�ݱ�
	ifstream is{ "data.txt" };		//data.txt �б�
	for (i = 0; i < 10; i++) {
		is >> i;
		cout << i << " ";
	}
	*/
	/*
	ifstream fsrc{ "�׸�1.jpg", ios::in | ios::binary };		//ios::in ��¿�, ios::binary ���� ���� ����
	ofstream dest{ "copy.jpg",ios::out | ios::binary };		//ios::out ��¿�, ios::binary ���� ���� ����
	char buf[1024];
	int n, fsize = 0;
	while (!fsrc.eof())
	{
		fsrc.read(buf, 1024); n = fsrc.gcount();
		dest.write(buf, n);
		fsize += n;
	}
	cout << fsize << endl;
	*/

	ofstream fout{ "input.txt",ios::out | ios::binary };		//ios::out ��¿�
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	fout.write((char*)a, sizeof(a));		//a ũ�� ��ŭ ���
	fout.close();		//�ݱ�
	for (int i = 0; i < 10; i++)
		a[i] = 99;
	ifstream fin{ "input.txt",ios::in | ios::binary };
	fin.read((char*)a, sizeof(a));
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	fin.seekg(0, ios::end);
	fin.seekg(-4, ios::end);
	int c;
	fin.read((char*)&c, sizeof(c));
	cout << c << endl;
	fin.close();
}