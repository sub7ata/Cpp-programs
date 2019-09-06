#include<iostream>
using namespace std;
int main()
{
	int x,y,gcd,lcm,a,b,temp=0;
	cout<<"Enter two number:";
	cin>>x>>y;
	a = x;
	b = y;
	if(a <= 0 && b <= 0)
	{
		cout<<"Please enter a positive integer number:";
	}
	else
	{
		while(b!=0)
		{
			temp = b;
			b = a % b;
			a = temp;
			
		}
	gcd = a;
	lcm = (x * y) / gcd;
	cout<<"GCD = "<<gcd<<"\n";
	cout<<"LCM = "<<lcm<<"\n";

	}
return 0;
}
