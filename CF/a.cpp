//Radhe Radhe
#include<bits/stdc++.h>
#define FASTIO_  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define mod 1000000007
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define itr(i,n)    for(ll i=0; i<n; i++)
#define itr_ab(i,a,b)    for(ll i=a; i<=b; i++)
#define itrV(i,n)    for(ll i=0; i<v.size(); i++)
#define fixed cout.setf(ios::fixed);
#define precise cout.precision(15);
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define en '\n'

using namespace std;

//use sorting
bool cmp(const pair<int,string>&a,const pair<int,string>&b)
{
    if(a.first<b.first)
        return 1;
    else
        return 0;
}

string decode_secret()
{
    int i,j,k,x;
    string s;
    vector<pair<int,string>>vect;

    while(cin>>x>>s)
    {
        vect.push_back(make_pair(x,s));
    }
    sort(vect.begin(),vect.end(),cmp);
    int vectSz=vect.size(),inc=2;
    vector<string> ans;
    for(i=0;i<vectSz;i+=inc)
    {
        ans.push_back(vect[i].second);
        inc++;
    }
    string retAns;
    int ansSz=ans.size();
    for(i=0;i<ansSz;i++)
    {
        retAns+=ans[i];
        if(i!=ansSz-1) retAns+=' ';
    }
    cout<<retAns<<endl;
    return retAns;

}


int main()
{
    FASTIO_
    freopen("coding_challenge_input.txt","r",stdin);
    freopen("output33.txt","w",stdout);
    ll  tc,n,m,x,y,i,j,k;
    string s,t;
    tc=1;
    //cin>>tc;

    while(tc--)
    {
        ll i,j,x;

cout<<decode_secret()<<endl;

    }

    return 0;
}






