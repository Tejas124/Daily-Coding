//A C++ program to put all negative
// numbers before positive numbers

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
    int j=0;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]<0)
        {
            //if(i!=j)
            swap(arr[i],arr[j]);
            j++; 
        }
	}
    for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
}
