#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 ifstream inFile;
 ofstream outFile;
 inFile.open("file.in");
 outFile.open("file.out");

 long long int suf, suf2, n, m, nf=0, c=0, d=0;
 inFile>>suf;
 inFile>>n;
 while(n!=0){
    suf2=suf;
    m=n;
    while(suf2>0 && n>0){
        if(suf2%10==n%10)
            c++;
            suf2=suf2/10;
            n=n/10;
    }
    n=m;
    while (n>0){
        d++;
        n=n/10;
    }
    if(c==d)
        nf=m;

 inFile>>n;
 }
 if(nf!=0)
outFile<<nf;
else outFile<<"nu exista";
}
