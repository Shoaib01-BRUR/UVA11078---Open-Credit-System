#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=-200000,m=-200000;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>m)
                m=a[i];
            if(m-a[i+1]>d)
                d=m-a[i+1];
        }
        cout<<d<<endl;
    }
    return 0;
}
