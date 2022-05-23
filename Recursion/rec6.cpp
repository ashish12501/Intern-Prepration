#include<bits/stdc++.h>
using namespace std;

void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n]);
    f(i+1,arr,n-i-1);

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    f(0, arr,n);
    for (int i = 0; i < n ;i++) 
       cout<<arr[i]<<" ";
}