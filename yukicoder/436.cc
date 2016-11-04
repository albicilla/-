#include <bits/stdc++.h>
using namespace std;

string s;
int idx;
int main(){
    cin>>s;
    int len = s.size();
    for(int i=0;i<len;i++){
      if(s[i]=='w'){
        idx=i;
        break;
      }
    }
    cout<<min(idx-1,len-idx)<<endl;
  return 0;
}
