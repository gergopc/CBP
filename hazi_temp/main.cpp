#include <iostream>

using namespace std;

int main()
{
   int n, k=0;
   cin>>n;
   float t[n], a, b;
   for(int i=0; i<n; i++)
    cin>>t[i];
   a=min(t[0], t[n-1]);
   b=max(t[0], t[n-1]);
   for(int i=0; i<n; i++)
    if(t[i]<a && t[i]>b)
        k++;
   cout<<k;
}
