#include<bits/stdc++.h>
using namespace std;

int top=-1,a[10];
void push(int n){
    a[++top]=n;
}
void pop(){
    top-=1;
}

void peek(){
    cout<<a[top]<<endl;

}
void size(){
    cout<<top+1<<endl;
}
void print(){
    for (int i = 0; i <= top; i++) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
push(7);
push(3);
push(1);
print();
pop();
print();
peek();
size();
print();
push(8);
print();
size();
}