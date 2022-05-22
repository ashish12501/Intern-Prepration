// print 1 to n using recursion without global variable.
// print n to 1 using recursion without global variable.


#include<bits/stdc++.h>
using namespace std;
// this can be done in various ways i did it with a  bit of change in 1st ques. other simple approches might be there is same space and time complexity.
void f(int i,int n){
    if(i>n)
      return;
    else
      cout<<n<<" ";
      f(i,n-1);

}

int main(){
    int n;
    cin>>n;
    f(1,n);
}