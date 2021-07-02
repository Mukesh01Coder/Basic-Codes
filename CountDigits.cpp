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
      ll count = 0;
      while(num!=0){
           num = num/10;
           count++;
      }
      cout<<count<<endl;
     }
     return 0;
}