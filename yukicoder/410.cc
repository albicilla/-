#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,b) FOR(i,0,b)

using ll = long long;
const ll mod = LLONG_MAX;

double calc(double a,double b,double ret){
  return a*a-ret*ret-b*b;
}

double pit(double a,double b){
  double lb=0,ub=1000;
  double ret=(ub+lb)/2;
  REP(i,500){
    ret = (ub+lb)/2;
    if(calc(a,b,ret)>0){
      lb=ret;
    }else{
      ub=ret;
    }
  }
  return ret;
}

int main(){
  double sa,sa2;

  cin>>sa>>sa2;
  //saはsa2以上
  if(sa2>sa){
    swap(sa2,sa);
  }
  if(sa2==sa){
    cout<<fixed<<setprecision(10)<<sqrt(sa*sa+sa2*sa2)<<endl;
    return 0;
  }
  cout<<fixed<<setprecision(10)<<sqrt(sa*sa-sa2*sa2)<<endl;

  return 0;
}
