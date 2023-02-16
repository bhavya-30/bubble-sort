#include<iostream>
using namespace std;

int main()
{
    
    //input
    int arr[20],n,i,j,temp;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements in array:";
    for(i=0;i<n;i++)
     cin>>arr[i];
    cout<<endl<<"array is:";
    for(i=0;i<n;i++)
      cout<<arr[i]<<" "; 

    //sorting
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        if(arr[j]>arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
    }
    //print
    cout<<endl<<"sorted array is:";
    for(i=0;i<n;i++)
     cout<<arr[i]<<" ";
     return 0;
}