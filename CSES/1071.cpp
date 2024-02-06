#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        long long ans=0;

        if(x>=y)
        {
            if(x&1)
            {
                ans=(x-1)*(x-1)+y;
            }
            else{
                ans=x*x-(y-1);
            }
        }
        else{
            if(y&1) ans=y*y-(x-1);
            else ans=(y-1)*(y-1)+x;

        }
        cout<<ans<<endl;

    }



    return 0;
}
