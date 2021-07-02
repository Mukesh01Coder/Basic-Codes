#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int gcd(int x,int y){
    if(x==0) return y;
    if(y==0) return x;
    int mn = min(x,y);
    int mx = max(x,y);
    return gcd(mx%mn,mn);
}

int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);
     int t; cin>>t;
     while(t--){
          int n,m; cin>>n>>m;
          int lcm = n*m/gcd(n,m);
      cout<<lcm<<endl;
     }
     return 0;
}
