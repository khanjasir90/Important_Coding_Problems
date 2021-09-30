
Problem: https://codeforces.com/problemset/problem/1556/A

#include<bits/stdc++.h>
#define ll long long
#define rep(i,t) for(ll i=0;i<t;i++)
using namespace std;
long long prime(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
       return 0;

    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}
void solve1(){
    ll a,b;
    cin>>a>>b;
    if((a-b)%2==0)
    {
        if(a==b)
        {
            if(a==0)
            {
                cout<<0<<endl;
            }
            else
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    rep(i,t){
        solve1();
    }
    return 0;
}
