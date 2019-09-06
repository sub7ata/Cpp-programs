#include<iostream>
using namespace std;
int factorial(int n)
{
	int i,temp=1;
	for(i=1;i<=n;i++)
	{
		temp = temp * i;  
	}
	return temp;
}

int main()
{
	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	if(num<=0)
	{
		cout<<"Please enter a positive number:";
	}
	else
	{
		cout<<"Factorial number are: "<<factorial(num)<<"\n";
	}
}
