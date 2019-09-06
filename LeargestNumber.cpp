#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,i,j;
	cout<<"Enter total number of elements:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<(i+1)<<" number:";
		cin>>arr[i];
	}
	for(j=1;j<n;j++)
	{
		if(arr[0] < arr[j])
		{
			arr[0] = arr[j];
		}	
	}

	cout<<"Largest number are: "<<arr[0]<<endl;
	return 0;
}
