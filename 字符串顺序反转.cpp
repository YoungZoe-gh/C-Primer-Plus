#include<iostream>

int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	int i, j;
	for (i = 0,j = word.size() - 1; i < j; i++, j--)
	{
		char temp;
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	return 0;
}