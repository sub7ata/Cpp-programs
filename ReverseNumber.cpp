#include<iostream>
using namespace std;
int main()
{
	int num,rem,temp;
	cout<<"Enter a number:";
	cin>>num;
	while(num!=0)
	{
		rem = num % 10;
		temp = temp * 10 + rem;
		num = num / 10;
	}
	cout<<"\nReverse number are:"<<temp<<endl;
	return 0;
}
