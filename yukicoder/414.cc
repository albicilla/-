#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MAX_N = 1000000000000;

int main(){
  ll n;
  cin>>n;
  ll ans1,ans2;
  ans1=1;ans2=n;
  bool flag=false;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      ans1=i;
      ans2=n/i;
      flag=true;
      break;
    }
  }
  if(flag==false){
    ans1=1;
    ans2=n;
  }
  cout<<ans1<<" "<<ans2<<endl;
  return 0;
}
