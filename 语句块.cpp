#include<iostream>

int main()
{
	using namespace std;

	int x = 20;
	{
		cout << x << endl;
		int x = 100;
		cout << x << endl;
	}
	cout << x << endl;
	return 0;
}
//�����һ������������һ�����������ⲿ������Ҳ��һ���������Ƶı�����
//������λ�õ���������ķ�Χ֮�ڣ��±��������ؾɱ�����
//�������֮�󣬾ɱ������ٴοɼ�