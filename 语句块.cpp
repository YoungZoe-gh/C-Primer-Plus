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
//如果在一个语句块中声明一个变量，而外部语句块中也有一个这种名称的变量，
//在声明位置到语句块结束的范围之内，新变量将隐藏旧变量；
//语句块结束之后，旧变量将再次可见