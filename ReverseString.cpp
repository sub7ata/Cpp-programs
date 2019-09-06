	#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char str[100],temp;
	int i,j;
	cout<<"Enter a string:";
	cin>>str;
	j = strlen(str) - 1;
	for(i=0;i<j;i++,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout<<"\nReverse string are:"<<str<<endl;
	return 0;
}
