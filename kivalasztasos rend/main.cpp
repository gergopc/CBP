#include <iostream>

using namespace std;

int main()
{
 int n, t[100], s, mini;
 cin>>n;
 for(int i=0; i<n; i++)
    cin>>t[i];
 for(int i=0; i<n-1; i++){
        mini=i;
    for(int j=i+1; j<n; j++)
     if(t[j]<mini)
        mini=j;
 s=t[mini];
 t[mini]=t[i];
 t[i]=s;
 }
 for(int i=0; i<n; i++)
    cout<<t[i]<<' ';
}
