#include<iostream>
const int ArSize = 8;
int sum_array(const int* begin, const int* end);
int main()
{
	using namespace std;
	int sum;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	sum = sum_array(cookies, cookies + ArSize);
	cout << "Total cookies eaten is " << sum << endl;
	cout << "First three eaters ate " << sum_array(cookies, cookies + 3) << " cookies." << endl;
	cout << "Last four eaters ate " << sum_array(cookies + 4, cookies + ArSize) << " cookies." << endl;
	return 0;
}

int sum_array(const int* begin, const int* end)
{
	const int* pt;
	int sum = 0;
	for (pt = begin; pt != end; pt++)
		sum = sum + *pt;
	return sum;
}