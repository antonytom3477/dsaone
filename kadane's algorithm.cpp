#include<iostream>
using namespace std;

int main()
{
	int i,n,t,j,sum,max=0,a,b;
	int arr[10];

	cout<<"Enter the number of elements";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}

	
	sum=0;
	a=0;b=0;
	for(i=0;i<n;i++){
		sum=sum+arr[i];

		if(sum>max){max=sum;b=i;}

		if(sum<0){sum=0;a=i+1;}
	}
	cout<<"\nmaxsum="<<max<<"\nArray:";
	for (i = a; i < b+1; i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}