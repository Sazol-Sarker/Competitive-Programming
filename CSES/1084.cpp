#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x,y;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long n,m,k,i,j;
        cin>>n>>m>>k;

        long long a[n],b[m];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<m; i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+m);
        int cura=0,curb=0;
        long long ans=0,prevb=0;

        while(cura<n&&curb<m)
        {
            //cout<<a[cura]<<"  "<<b[curb]<<" "<<ans<<endl;
           // cout<<abs(a[cura]-b[curb])<<" "<<k<<endl;

            if( abs(a[cura]-b[curb])<=k)
            {
                ans++;
                cura++;
                prevb=curb;
                curb++;
            }
            else
            {
                if(a[cura]<b[curb]) cura++;
                else curb++;
            }


        }

        cout<<ans<<endl;

    }



    return 0;
}
