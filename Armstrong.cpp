#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int num)
{
	int rem,nd, sum = 0;
	nd = (int)log10(num) + 1;
	while(num!=0)
	{
		rem = num % 10;
		sum = sum + (int) pow(rem,nd);
		num = num / 10; 
	}
return sum;
}

int main()
{
	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	if(num <= 0)
	{
		cout<<"Please enter a valid number:"<<endl;
	}
	else
	{
		if(num == armstrong(num))
		{
			cout<<num<<" is a Armstrong number: \n";
		}
		else
		{
			cout<<num<<" is not Armstrong number: \n";
		}
	}
	return 0;
}
