#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);
     ll t; cin>>t;
     while(t--){
      ll num; cin>>num;
      ll n = num;
      ll rev=0,rem=0;
      while(num!=0){
             rem = num%10;
          rev = rev*10+rem;
             num = num/10;
          }   
          if(n==rev) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
     }
     return 0;
}