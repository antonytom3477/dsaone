#include<iostream>
int reverse(int arr[],int start,int stop);
using namespace std;

int main(){
    int i,j,n,a,b;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    for ( i = n-2; i>=0; i--)
    {
        if(arr[i]<arr[i+1]){
            break;
        }
    }

    if(i<0){
        for(i=n-1;i>=0;i--){
            cout<<"\t"<<arr[i];
        }return 0;
    }

    for ( j = n-1; j>i; j--)
    {
        if(arr[j]>arr[i]){break;}
    }

    reverse(arr[],i+1,n-1);
    
    cout<<"\n";
    for ( a = 0; a < n; a++)
    {
        cout<<"\t"<<arr[a];
    }
    

}

int reverse(int arr[],int start,int stop){
    int t=0,c=0;
    for (int i = start; i <= (start+stop)/2; i++)
    {
        t=arr[i];
        arr[i]=arr[stop-c];
        arr[stop-c]=t;
        c++;
    }
    

}