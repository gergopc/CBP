#include <iostream>

using namespace std;


int main()
{
    int n,m,a=0,b,ok,k;
    cin>>n;
    int s[25001],p[200001];
    for(int i=0;i<n;i++) cin>>s[i];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
        a=0;b=n-1;ok=0;
        while(!ok && a<=b)
        {
            k=(a+b)/2;
            if (s[k]==p[i]) ok=1;
            else if(s[k]<p[i]) a=k+1;
            	 else b=k-1;
        }
        cout<<ok<<' ';
    }

}
