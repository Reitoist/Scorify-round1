#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;
int T[]={-1,0,1};
void solve(vector<vector<int> >&g,int si, int sj, int ei, int ej,int M,int N)
{
   queue<pair<int,int> > Q;
   vector<vector<int> > visited(M);visited.clear();
   for(int i=0;i<M;i++)visited[i].resize(N);
   visited[si][sj]=1;
   Q.push(make_pair(si,sj));
   while(!Q.empty())
   {
      pair<int,int> p = Q.front();
      Q.pop();
      for(int* p1=T;p1-T<3;p1++)
      {
         for(int* p2=T;p2-T<3;p2++)
         {
             int x=*p1,y=*p2;
            if(x==0 && y==0) continue;
            int i = p.first+x;
            int j = p.second+y;
            if(i<0 || i>=M || j<0 || j>=N || g[i][j]==-1||abs(x)+abs(y)>1) continue;
            g[i][j]=min(g[i][j],g[p.first][p.second]+1);
            if(visited[i][j]==0)
            {
                visited[i][j]=1;
                Q.push(make_pair(i,j));
            }
         }
      }
   }
}
int main(){
    int n,m,nodes,sx,sy,ex,ey,tc=1;
    while(cin>>m>>n){
    cout<<"Case "<<tc++<<":"<<endl;
    vector<vector<int> >g;
    cin>>sx>>sy;
    cin>>ex>>ey;
    cin>>nodes;
    g.resize(m);
    for(int i=0;i<m;i++){
        g[i].resize(n);
        for(int j=0;j<n;j++)g[i][j]=INF;
    }
    int x,y;
    bool ok=true;
    for(int i=0;i<nodes;i++){
        cin>>x>>y;
        g[x][y]=-1;
        if((x==sx&&y==sy)||(x==ex&&y==ey))ok=false;
    }
    if(!ok){
        cout<<"Impossible"<<endl;
        continue;
    }
    g[sx][sy]=0;
    solve(g,sx,sy,ex,ey,m,n);
    if(g[ex][ey]==INF||g[ex][ey]==-1)
        cout<<"Impossible"<<endl;
    else
    cout<<g[ex][ey]<<endl;
    }
    return 0;
}
