#include"stdafx.h"
#include"iostream"
using namespace std;
class CLenth
{
private:
	int feet;
	int inch;
	int check();
public:
	CLenth();
	int setLenth(int f, int i);
	void addLenth();
	void display();
	CLenth addLenth(CLenth&otemp);
};
CLenth::CLenth()
{
	feet = 0;
	inch = 0;
}
CLenth CLenth::addLenth(CLenth &ob)
{
	CLenth temp;
	temp.setLenth(feet + ob.feet, inch + ob.inch);
	return temp;
}
int CLenth::setLenth(int f, int i)
{
	feet = f;
	inch = i;
	check();
	return 0;
}
int CLenth::check()
{
	int temp = 1;
	if (inch >= 12)
	{
		feet = feet + inch / 12;
		inch = inch % 12;
		temp = 1;
	}
	return 0;
}
void CLenth::addLenth()
{
	if (inch >= 12)
	{
		feet = feet + inch / 12;
		inch = inch % 12;
	}
}
void CLenth::display()
{
	cout << "feet = " << feet << " inch = " << inch << endl;
}
int main()
{
	CLenth ob1, ob2, ob3;
	ob1.setLenth(1, 13);
	ob2.setLenth(1, 13);
	ob3 = ob1.addLenth(ob2);
	ob3.display();
	return 0;
}
