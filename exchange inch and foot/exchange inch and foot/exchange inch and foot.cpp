// exchange inch and foot.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;
class height
{
private:
	float inch;
	int foot;
	double meter;
public:
	void set_inch(int inchs)
	{
		inch = inchs;
	}
	void set_foot(int feet)
	{
		foot = feet;
	}
	void set_add(int Cfoot, int Cinch)
	{
		int x;
		inch = inch + Cinch;
		foot = foot + Cfoot;
		x = inch / 12;
		foot = foot + x;
		inch = (inch - 12 * x);
	}
	void set_meter(double m)
	{
		meter = m;
		foot = meter*3.2808399;
		inch = ((meter*3.2808399) - foot) * 12;
	}
	void display()
	{
		cout << foot << "Ӣ��" << setprecision(6) << inch << "Ӣ��" << endl;
	}
};
int main()
{
	int inch, foot;
	double meter;
	while (1)
	{
		cin >> meter;
		height A;
		A.set_meter(meter);
		A.display();
		cin >> foot >> inch;
		A.set_add(foot, inch);
		//A.set_foot(foot);
		//A.set_inch(inch);
		A.display();
	}
	return 0;

}