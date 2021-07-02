#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
ll gcd(ll ll);
int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);
     ll t; cin>>t;
     while(t--){
          ll n,m; cin>>n>>m;
      cout<<gcd(n,m)<<endl;
      }
      
     }
     return 0;
}
ll gcd(ll x,ll y){
    if(x==0) return y;
    if(y==0) return x;
    ll min = min(x,y);
    ll max = max(x,y);
    return gcd(max%min,min);
}