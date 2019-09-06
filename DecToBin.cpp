#include<iostream>
using namespace std;
long long convert(int d_num)
{
	long long b_num = 0;
	int i=1,rem;
	while(d_num!=0)
	{
		rem = d_num % 2;
		d_num /= 2;
		b_num += rem * i;
		i *= 10;
	}
	return b_num;
}
	
int main()
{
	int num;	
	cout<<"Enter any decimal number : ";
	cin>>num;
	if(num <= 0)
	{
		cout<<"Please enter a valid number: \n";
	}
	else
	{
		cout<<"Binary number are: "<<convert(num)<<"\n";
	}
}
