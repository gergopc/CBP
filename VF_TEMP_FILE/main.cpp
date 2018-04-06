#include <fstream>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int hdd[101][361];

int main(){
ifstream fin("file.in");
ofstream fout("file.out");
int p, s, c, v, a, b, db=0, maxi=0, k, x, y;
fin>>v>>p>>s>>c;
for(int i=0; i<c; i++){
    fin>>a>>b;
    hdd[a][b]=1;
    hdd[a][0]++;
}
if(v==1){
   for(int i=1; i<=p; i++)
    if(!hdd[i][0])db++;
   fout<<db;
}else{
for(int i=1; i<=p; i++){
    db=0;
    k=hdd[i][0];
    x=s-k+1;
    y=k-1;
    for(int j=1; j<=k; j++){
        db+=hdd[i][j];
    }
    maxi=db;
    for(int j=2; j<=x; j++){
        db-=hdd[i][j-1];
        db+=hdd[i][k+j-1];
        maxi=max(maxi, db);
    }
    for(int j=x+1; j<=s; j++){
        db-=hdd[i][j-1];
        db+=hdd[i][j-x];
        maxi=max(maxi, db);
    }
    fout<<k-maxi<<' ';
}
}

}
