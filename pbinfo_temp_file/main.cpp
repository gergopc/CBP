#include <iostream>
#include <fstream>
using namespace std;
int n,m,a[1002][1002]={0},b[1002][1002]={0},t[1004004][2];
int S,O,s,o;
int main()
{ifstream f("file.in");
 ofstream g("file.out");
int i,j,e=0,u=0,k;
f>>n>>m;
for(i=1;i<=n;i++)
  for(j=1;j<=m;j++){
     f>>k;
     if(k==0)a[i][j]=1;
     else a[i][j]=0;
  }
f>>S>>O;
f>>s>>o;
t[0][0]=S;
t[0][1]=O;
e=0;u=0;
while(e<=u){
  if(a[t[e][0]][t[e][1]-1]==1)
    if(b[t[e][0]][t[e][1]-1]>b[t[e][0]][t[e][1]]+1 or
       b[t[e][0]][t[e][1]-1]==0){
    b[t[e][0]][t[e][1]-1]=b[t[e][0]][t[e][1]]+1;
    u++;
    t[u][0]=t[e][0];
    t[u][1]=t[e][1]-1;

  }
  if(a[t[e][0]][t[e][1]+1]==1)
    if(b[t[e][0]][t[e][1]+1]>b[t[e][0]][t[e][1]]+1 or
       b[t[e][0]][t[e][1]+1]==0){
    b[t[e][0]][t[e][1]+1]=b[t[e][0]][t[e][1]]+1;
    u++;
    t[u][0]=t[e][0];
    t[u][1]=t[e][1]+1;

  }
  if(a[t[e][0]-1][t[e][1]]==1)
    if(b[t[e][0]-1][t[e][1]]>b[t[e][0]][t[e][1]]+1 or
       b[t[e][0]-1][t[e][1]]==0){
    b[t[e][0]-1][t[e][1]]=b[t[e][0]][t[e][1]]+1;
    u++;
    t[u][0]=t[e][0]-1;
    t[u][1]=t[e][1];

  }
  if(a[t[e][0]+1][t[e][1]]==1)
    if(b[t[e][0]+1][t[e][1]]>b[t[e][0]][t[e][1]]+1 or
       b[t[e][0]+1][t[e][1]]==0){
    b[t[e][0]+1][t[e][1]]=b[t[e][0]][t[e][1]]+1;
    u++;
    t[u][0]=t[e][0]+1;
    t[u][1]=t[e][1];

  }
  e++;
}
if(b[s][o]==0)g<<-1;
else g<<b[s][o];
f.close();
g.close();
}
