#include<iostream>
using namespace std;

int main(){
    int i,j,n,profit,x,y;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the stock prices:";
    
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int minsofar=arr[0];
    int maxprofit=0;

    for ( i = 0; i < n; i++)
    {
        if(arr[i]<minsofar){minsofar=arr[i];y=i;}
        profit=arr[i]-minsofar;
        if(profit>maxprofit){maxprofit=profit;x=i;}
    }
    cout<<"Buy @ Day "<<x<<"\nSell @ Day "<<y<<"\nMaxprofit="<<maxprofit;
}