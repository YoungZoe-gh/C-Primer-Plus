//��ֱ������ϵת��Ϊ������ϵ
#include<iostream>
#include<cmath>
using namespace std;
const double Aff_radian2angle = 57.295779513;// 180/pi
struct polar 
{
	double distance;
	double angle;
};
struct ccs //Cartesian Coordinate System, �ѿ���ֱ������ϵ
{
	double x;
	double y;
};
polar ccs2polar(ccs a);
int main()
{
	ccs a;
	polar b;
	cout << "Please input a Cartesian Coordinate(x,y): " << endl;
	
	while (cin >> a.x >> a.y)
	{
		//cin >> a.x >> a.y;
		b = ccs2polar(a);
		cout << "The poalr coordinates (" << b.distance << ", " << b.angle << " degree) corresponding to ";
		cout << "the input Cartesian Coordinate(" << a.x << ", " << a.y << ") " << endl;
		cout << "Please input a Cartesian Coordinate(x,y)(q to quit): " << endl;
	}
	
	return 0;
}
polar ccs2polar(ccs a) 
{
	polar b;
	b.distance = sqrt(a.x * a.x + a.y * a.y);
	b.angle = atan2(a.y, a.x) * Aff_radian2angle;//����atan2(y,x)���ص��ǻ���
	return b;
}