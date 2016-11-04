#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='m'&&s[i+1]=='i'){
      while(1){
        i++;
        if(s[i]=='n'){
          ans++;
          break;
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
