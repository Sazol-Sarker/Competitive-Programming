#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x,y;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long n,x,i,j;
        cin>>n>>x;

        long long a[n];
        long long ans=0,sum=0,tmp=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {

            if(i==n-1)
            {
                if(tmp+a[i]<=x)
                {
                    tmp+=a[i];
                }
                else
                {
                    tmp=a[i];
                    ans++;
                }
            }
            else
            {
                if(tmp+a[i]<=x)
                {
                    tmp+=a[i];
                }
                else
                {
                    tmp=a[i];
                    ans++;
                }
            }

        }



        cout<<ans<<endl;

    }



    return 0;
}
