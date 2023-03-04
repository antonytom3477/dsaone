#include<iostream>
using namespace std;

int main(){
	int t,i,j,n,m;

	cout<<"Enter the number of packets of chocolates\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the no.of chocolates of each packet:\n";
	for (i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if(arr[j]>arr[j+1]){
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}

	cout<<"ENter the number of students(less than packets):\n";
	cin>>m;
	int min=arr[n-1];

	for (i = 0; i+m-1 < n; i++)
	{
		int d=arr[i+m-1]-arr[i];
		if(d<min){min=d;}
	}

	cout<<"\nminimum difference= "<<min;
}