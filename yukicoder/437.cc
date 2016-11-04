#include <bits/stdc++.h>
using namespace std;

string s;
int ans;
int a[15];
int main(){
  cin>>s;
  for(int i=0;i<11;i++)a[i]=0;

  for(int i=s.size()-1;i>=0;i--){
    int p=(s[i]-'0');
    a[p]++;
      if(a[p]>=2){
      //  cout<<"i="<<i<<" "<<a[p]<<endl;
      //  cout<<"i="<<i<<endl;
        a[p]=0;
        int mx=0,memo=-1;
        if(i==0)break;
        int a_memo=p;
        for(int j=i;j>=0;j--){
          int temp=mx;
          p=(s[j]-'0');
        //  cout<<p<<endl;
          if(p!=a_memo){
            mx=max(p,mx);
            if(mx!=temp){
              memo=j;
            }
          }
        }
        if(memo!=-1){
          int t=(s[memo]-'0');
        //  cout<<"memo="<<memo<<endl;
          //cout<<"t="<<t<<" i="<<i<<" s[i]"<<s[i]<<endl;

        //  cout<<"s="<<s<<endl;

          ans+=t*100+(s[i]-'0')*11;
          //cout<<ans<<endl;
          s.erase(s.begin()+memo);
          i--;
        }
      }
  }
  cout<<ans<<endl;
}
