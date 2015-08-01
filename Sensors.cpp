#include<bits/stdc++.h>
using namespace std;
void tobin(int val){
    for(int i=1,shift= 1<<16;i<=16;i++)
        cout<< ((val&(shift>>i))!=0);
    cout<<endl;
}
int main(){
    int z1,z2,N;
    int tc=1;
    while(cin>>z1>>z2>>N){
        cout<<"Case "<<tc++<<":"<<endl;
        float div=((float)z1)/(float)(z1+z2);
        int val=round(div*(pow(2.0,N)-1));
        tobin(val);
    }
}
