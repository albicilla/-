#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)
using ll = unsigned long long;
const ll mod = 1000000007;
const ll MAX_N=100000;

ll n,ans;
ll c[MAX_N+10],d[MAX_N+10];
int main(){
  cin>>n;
  REP(i,n){
    cin>>c[i]>>d[i];
    ans+=(((c[i]+1))/2)%mod*(d[i]%mod)%mod;
  }
  cout<<ans%mod<<endl;
  return 0;
}
