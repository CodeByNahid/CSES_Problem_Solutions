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
cin>>n;
set<ll>s;
for(i=0;i<n;i++)
{
    ll t;
    cin>>t;
    s.insert(t);
}
cout <<s.size()  << endl;

  return 0;  
}
