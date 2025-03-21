/*
 * Bismillah ir-Rahman ir-Rahim
 * Only Allah can help me, and with His guidance, everything is possible.
 * @CodeByNahid: Solving problems with dedication and perseverance.
 * Freely use this code and just pray for me.
 */

#include <bits/stdc++.h>
#define y "YES"
#define no "NO"
#define ll long long
using namespace std;
ll n,t,i;
int main() {
    ll m,k;
cin>>n>>m>>k;
vector<ll>appli(n);
vector<ll>apart(m);
for(i=0;i<n;i++)cin>>appli[i];
for(i=0;i<m;i++)cin>>apart[i];

sort(appli.begin(),appli.end());
sort(apart.begin(),apart.end());
ll j=0,l=0,ans=0;

while(j<n && l<m)
{
    if(abs(apart[l]-appli[j])<=k)
    {
        ans++;
        j++;
        l++;
    }
    else if (apart[l]<appli[j]) l++;
    else j++;
}

cout<<ans<<endl;
  return 0;  
}
