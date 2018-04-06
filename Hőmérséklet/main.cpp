#include <iostream>

using namespace std;

int main()
{
int a[100]={0}, x[100]={0}, n, dba=0, dbb=0, c, dbd, sd, d;
bool volt;
cin>>n;
for(int i=1; i<=n; i++)
    cin>>x[i];
for(int i=2; i<n; i++){
    if(x[i]>x[i-1] && x[i]>x[i+1]){
        dba++;
        a[dba]=i;
    }
    if(x[i+1]>=0 && x[i-1]<=x[i] && x[i+1]==x[i]/2)
        dbb++;
}
c=0;
x[0]=-1000;
dbd=0;
sd=0;
volt=false;
for(int i=1; i<=n; i++){
    if(x[i]<0 && x[i]>x[c])
        c=i;
    if(x[i]<0)
        volt=true;
    if(volt==false && x[i]>=0)
        dbd++;
        sd+=x[i];
}
if(volt==false) d=sd/dbd;

for(int i=1; i<=n; i++)
    cout<<a[i];
cout<<endl;
cout<<dbb<<endl;
cout<<c<<endl;
cout<<d;
}
