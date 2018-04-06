#include <iostream>
#include <cmath>

using namespace std;

int main()
{
long long int n, e;
cin>>n;
e=0;
for(int i=1; i*i<=n; i++){
if(n%i==0)
    if(sqrt(n) != i)
    e=e+i+n/i;
    else e=e+i;
}
cout<<e-n;
}
