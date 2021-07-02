#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);
     ll t; cin>>t;
     while(t--){
      ll n,m; cin>>n>>m;
      ll gcd=0;
      for(ll i=1; i<=n && i<=m; i++ ){
           if(n%i==0 && m%i==0) gcd = i;
           else continue;
      }
      cout<<gcd<<endl;
     }
     return 0;
}