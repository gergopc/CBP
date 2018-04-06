#include <fstream>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int t[5001], ind[5001], h[5001];

int main(){

ifstream fin("file.in");
ofstream fout("file.out");

int n, k, p, mini, s, ok=1, db=0, u, ok1, sr=-1;
fin>>p>>n>>k;
for(int i=0; i<n; i++)
    fin>>t[i];
if(p==1){
    for(int i=0; i<k-1; i++){
        mini=i;
        for(int j=i+1; j<k; j++)
            if(t[mini]>t[j])
                mini=j;
        s=t[mini];
        t[mini]=t[i];
        t[i]=s;
    }
    for(int i=1; i<k && ok; i++){
        if(t[i]!=t[i-1]+1)
        ok=0;
    }
    if(ok)
        fout<<t[k-1];
    else{
        for(int i=0; i<k; i++){
        ok1=1;
            for(int j=0; j<k && ok1; j++)
            if(t[i]==t[j] && i!=j)
            ok1=0;
        if(ok1)db++;
        }
        fout<<db;
    }

}else{
 for(int i=0; i<n; i++)
    ind[i]=i;
  for(int i=0; i<n-1; i++){
        mini=i;
        for(int j=i+1; j<n; j++)
            if(t[mini]>t[j])
                mini=j;
        s=t[mini];
        t[mini]=t[i];
        t[i]=s;
        s=ind[mini];
        ind[mini]=ind[i];
        ind[i]=s;
    }
    for(int i=0; i<n; i++)

}


}
