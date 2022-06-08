#include<bits/stdc++.h>
using namespace std;
int q[5],front=0,rear=0,c=0,n=5;
void push(int x){
    if(c>=n) cout<<"overflow"<<endl;
    else{
    q[rear%n]=x;
    rear++;
    c++;}
}
void pop(){
    if(c==0) cout<<"underflow"<<endl;
    else{
    q[front%n]=-1;
    front++;
    c--;}
}
void top(){
    cout<<q[front%n]<<endl;
}

int main(){
 push(3);
 top();
 push(9);
 pop();
 top();
 push(5);
 push(7);
 pop();
 pop();
 top();
 push(6);
 push(2);
//  pop();
//  pop();
//  top();
 cout<<c;
}