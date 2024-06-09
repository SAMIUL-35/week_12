#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main ()

{
op();
  ll t;
  cin>>t;
  while (t--)
  {
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=1;
    for (ll i = 0; i < n; i++)
    {
       cin>>v[i];
       if(v[i]==sum)
       {
 sum++;

       }
       
       if(i!=n-1)
       {
        sum++;
       }
    }
    cout<<sum<<endl;
  }
  



    return 0;
}