#include<iostream>

int main()
{
	using namespace std;
	char ch;
	cout << "Enter characters; enter # to quit: " << endl;
	//cin >> ch;
	cin.get(ch);
	int count = 0;
	while (ch != '#')
	{
		cout << ch;
		//cin >> ch;
		cin.get(ch);
		count++;
	}
	cout << endl << count << " characters read" << endl;
	while (ch != '\n')
	{
		cout << ch;
		//cin >> ch;
		cin.get(ch);
	}
	return 0;
}
//cin>>用于输入字符时，将会忽略空白（空格、回车和制表符）
//cin.get(char)不忽略空白