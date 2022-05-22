
// print 1 to n using recursion. 
#include<bits/stdc++.h>
using namespace std;
int counter =1;
void f(){
    if(counter>5)
      return;
    else
      cout<<counter<<" ";
      counter++;
      f();
}

int main(){
  int count = 0;
   f();     
}