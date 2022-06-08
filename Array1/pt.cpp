#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res=1;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int k=i;
        cout<<"1 ";
        for (int j = 0; j < k-1; j++)
        {
            res=res*((k-1)-j);
            res=res/(j+1);
            cout<<res<<" ";
        }
        cout<<endl;
    }
    
}