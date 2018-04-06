#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
ifstream fin("file.in");
ofstream fout("file.out");
int n, h, e=0, k=0, p=0, ok=0, s, k1=0, ok1=1;
fin>>n>>h;
int t[101]={0};
for(int i=0; i<n; i++){
    fin>>t[i];
    e+=t[i];
}
e+=(n*(n+1))/2;
fout<<e<<endl;
while(ok1){
    p++;
    if(p>n)
        p=0;
    ok=0;
    k1=0;
    while(ok==0){
        ok=1;
        for(int i=0; i<n-k1-1; i++)
        if(t[i]>t[i+1]){
            s=t[i];
            t[i]=t[i+1];
            t[i+1]=s;
            ok=0;
        }
        k1++;
    }
    if(t[n-1]==h)
        ok1=0;
    else {
    for(int i=0; i<p; i++)
        t[i]++;
    k++;
    }

}
fout<<k;

}
