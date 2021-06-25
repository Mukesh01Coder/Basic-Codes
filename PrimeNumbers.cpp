#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

bool check_prime(ll x){
     for(ll i=2;i*i<=x;i++){
         if(x%i==0) return false;
     }
     return true;
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
      ll n; cin>>n;
      bool k = check_prime(n);
      if(k)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
     }
     return 0;
}
