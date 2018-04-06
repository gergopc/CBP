#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int c, n, k, sz, sind=-1, ind=-1, h=1, maxi, maxis, maxih, p;

bool s[33], sor[3200001], m[100001][33];

int main()
{
   ifstream fin("file.in");
   ofstream fout("file.out");
    fin>>c>>n>>k;
    if(c==1){
    for(int i=0; i<n; i++){
        fin>>sz;
        sind=-1;
        while(sz){
            s[++sind]=sz%2;
            sz/=2;
        }
        for(int j=sind; j>=0; j--)
            sor[++ind]=s[j];
    }
 for(int i=0; i<=ind-k; i+=k){
    sz=0;
    h=1;
    for(int j=i+k-1; j>=i; j--){
    sz+=sor[j]*h;
    h*=2;
    }
    fout<<sz<<' ';
 }
    }else{
    for(int o=0; o<n; o++){
        fin>>sz;
        sind=-1;
        while(sz){
            s[++sind]=sz%2;
            sz/=2;
        }
        for(int i=0; i<k; i++)
            for(int j=0; j<=sind; j++)
            s[j]=!s[j];

        for(int i=0; i<=sind; i++)
        m[o][i]=s[i];
    maxis=max(maxis, sind);
    }
    for(int i=0; i<=maxis; i++){
    p=0;
    for(int j=0; j<n; j++){
        if(m[j][i]) p++;
        else p=0;
        if(p>maxi){
            maxi=p;
            maxih=j;
        }
    }
    }
    fout<<maxi<<endl;
    fout<<maxih-maxi+2<<' '<<maxih+1;
}
}
