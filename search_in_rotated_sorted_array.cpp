#include<iostream>
using namespace std;

int main(){
    int i,n,j,key;

    cout<<"Enetr the no. of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"enter key:";
    cin>>key;
    int low=0;
    int high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {cout<<"found at position "<<mid+1;break;}
        if(arr[low]<arr[mid]){
            if(key>=arr[low] && key<arr[mid])
            {high=mid-1;}
            else
            {low=mid+1;}
        }
        else{
            if(key>arr[mid] && key<arr[high])
            {low=mid+1;}
            else
            {high=mid-1;}
        }   
    }

    return 0;
    
    

    
}