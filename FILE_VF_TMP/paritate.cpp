#include <fstream>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int hiba[60001];
string b, k, c;

int main(){
ifstream fin("paritate.in");
ofstream fout("paritate.out");
int p, ok=1, ind=-1, h, be=0, esz=0, ssz=-1;
getline(fin, b);
for(int i=0; i<b.length(); i+=8){
    ssz++;
    be=0;
    k=b.substr(i, 8);
    h=0;
    esz=0;
    for(int j=7; j>=1; j--){
        be=be+(k[j]-48)*pow(2, h);
        h++;
        if(k[j]-48==1) esz++;
    }
    if(be!=10)
    c+=be;
    else
    c+='\n';
    if(esz%2!=k[0]-48){
        ok=0;
        hiba[++ind]=ssz;
    }
}
if(ok)fout<<"DA"<<endl<<c;
else{
    fout<<"NU"<<endl;
    for(int i=0; i<=ind; i++)
        fout<<hiba[i]<<' ';
}

}
