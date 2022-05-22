// print 1 to n using backtracking
// print n to 1 using backtracking


// #include<bits/stdc++.h>
// using namespace std;

// void f(int i, int n){
//     if(i<1)
//     return;
//     else
//     f(i-1,n);
//     cout<<i<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n,n);
// }




#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n)
    return;
    else
    f(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    f(1,n);
}