#include<iostream>
using namespace std;
int main()
{
	int num,n,temp,rem;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	n = num;
	while(num!=0)
	{
		rem = num % 10;
		temp = temp * 10 + rem;
		num = num / 10;
	}
	
if(n == temp)
{
	cout<<n<<" is a Plindrom number:"<<endl;
}
else
{
	cout<<n<<" is not a Palindrom number:"<<endl;
}
}
