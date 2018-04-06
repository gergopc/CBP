#include <iostream>
#include <fstream>
using namespace std;
int m[101][361]={0};
int main()
{
    ifstream f ("file.in");
    ofstream g ("file.out");
    int p,s,c,v,x,y,igaz=1,osz,maxi;
    f>>v>>p>>s;
    f>>c;
    for(int i=0;i<c;i++) {
        f>>x>>y;
        m[x][y]=1;
        m[x][0]++;
    }
   /* for(int i=1;i<=p;i++){
        for(int j=0;j<=s;j++) cout<<m[i][j]<<' ';
        cout<<'\n';
    }*/
    if(v==1){
        x=0;
        for(int i=1;i<=p;i++)
            if(m[i][0]==0) x++;
        g<<x;
    }
    else{
        for(int i=1;i<=p;i++){
                x=s-m[i][0]+1;
                y=m[i][0]-1;
                osz=0;
                for(int j=1;j<=m[i][0];j++) osz+=m[i][j];
                maxi=osz;
                for(int j=2;j<=x;j++){
                    osz-=m[i][j-1];
                    osz+=m[i][m[i][0]+j-1];
                    maxi=max(osz,maxi);
                }
                for(int j=x+1;j<=x+y;j++){
                    osz-=m[i][j-1];
                    osz+=m[i][j-x];
                    maxi=max(osz,maxi);
                }
                g<<m[i][0]-maxi<<' ';
        }
    }
}
