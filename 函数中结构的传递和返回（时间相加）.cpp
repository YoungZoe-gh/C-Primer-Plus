//Using structures with functions
//计算时间和
#include<iostream>
struct spend_time
{
	int hours;
	int minutes;
	int seconds;
};

const int Aff = 60;//时和分钟、分钟和秒之间的转换系数
using namespace std;
spend_time sum(spend_time a, spend_time b);
int main()
{
	spend_time a, b, total;
	//a = { 1, 30, 30 };
	//b = { 2, 40, 50 };
	cout << "Please input the first time(hours, minutes, seconds): " << endl;
	cin >> a.hours >> a.minutes >> a.seconds;
	cout << "Please input the second time(hours, minutes, seconds): " << endl;
	cin >> b.hours >> b.minutes >> b.seconds;
	total = sum(a, b);
	cout << "total.hours = " << total.hours << endl;
	cout << "total.minutes = " << total.minutes << endl;
	cout << "total.seconds = " << total.seconds << endl;
	return 0;
}

spend_time sum(spend_time a,spend_time b)
{
	spend_time total;
	int T_hours, T_min, T_sec;
	T_sec = a.seconds + b.seconds;
	T_min = a.minutes + b.minutes + T_sec / 60;
	T_hours = a.hours + b.hours + T_min / 60;
	total.seconds = T_sec % 60;
	total.minutes = T_min % 60;
	total.hours = T_hours;
	return total;
}