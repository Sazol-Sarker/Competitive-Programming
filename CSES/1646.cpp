#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x,y;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long n,m,x,i,j,y;
        cin>>n>>m;

        long long a[n];
        long long pre[n+1];
        memset(pre,0,sizeof(pre));
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            pre[i+1]=pre[i]+a[i];
        }

        while(m--)
        {
            cin>>x>>y;

            cout<<pre[y]-pre[x-1]<<endl;

        }





    }



    return 0;
}
