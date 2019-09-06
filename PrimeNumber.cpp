#include<iostream>
using namespace std;
int main()
{
	int num,i,flag=0;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag = 1;
			break;
		}
	}
if(flag == 0)
{
	cout<<num<<" is Prime number:"<<endl;
}
else
{
	cout<<num<<" is not Prime number:"<<endl;
}
}
