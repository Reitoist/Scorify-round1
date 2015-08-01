#include<bits/stdc++.h>
using namespace std;
void chgdir(char c,char pre,double t,double a,double v,double *x,double *y){
    double dist;
    dist = 0.5*a*t*t+v*(1-t);
     switch(c){
    case 'U':
        *x+=dist;
        break;
    case 'D':
        *x-=dist;
        break;
    case 'L':
        *y-=dist;
        break;
    case 'R':
        *y+=dist;
        break;
    default :
        if(pre!='0'){
             switch(c){
                 dist-=v*(1-t);
            case 'U':
                *x+=dist;cout<<"**"<<endl;
                break;
            case 'D':
                *x-=dist;
                break;
            case 'L':
                *y-=dist;
                break;
            case 'R':
                *y+=dist;
                cout<<"*"<<endl;
                break;
                }
        }
        break;
     }
}
int main()
{
    double v,a;
    int c=1,n;
    while(cin>>v>>a){
    cout<<"Case :"<<c++<<endl;
    double t=v/a;
    double x,y,dist;
    x=y=0;
    cin>>n;n--;
    string prev,cur;
    cin>>cur;prev="0";
    chgdir(cur[0],prev[0],t,a,v,&x,&y);
    printf("%.4f %.4f\n",x,y);
    prev=cur;
    while(n--){
        cin>>cur;
        chgdir(cur[0],prev[0],t,a,v,&x,&y);
        if (abs(x - 0.0) <= 1e-6)x=0.0000;
        if (abs(y - 0.0) <= 1e-6)y=0.0000;
        printf("%.4f %.4f\n",x,y);
        prev=cur;
        }
    }

}
