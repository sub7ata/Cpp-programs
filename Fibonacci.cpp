#include<iostream>
using namespace std;
int fibonacci(int num)
{
	int l1=0,l2=1,l3,i;
	for(i=2;i<num;i++)
	{
		l3=l1+l2;
		cout<<l3<<" ";
		l1=l2;
		l2=l3;
	}
	cout<<"";
return 0;	
}

int main()
{
	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	int l1=0,l2=1,l3,i;
	cout<<l1<<" ";
	cout<<l2<<" ";
	fibonacci(num);
	cout<<"\n";
	return 0;
}
