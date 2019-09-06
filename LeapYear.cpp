#include<iostream>
using namespace std;
int leapYear(int year)
{
	if(year%4 == 0 && year % 100 == 0 || year == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{	
	int y,temp;
	cout<<"Enter year:"<<endl;
	cin>>y;
	temp = leapYear(y);
	if(temp)
	{
		cout<<"Leapyear"<<endl;
	}
	else
	{
		cout<<"Not leap year:"<<endl;
	}
	return 0;
}

