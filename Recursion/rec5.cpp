// Factorical using recursion

#include<bits/stdc++.h>  //without parameters , functional way
using namespace std;

int f(int n){
    if(n==0)
       return 1;
    return n*f(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
}