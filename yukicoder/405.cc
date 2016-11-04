#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int t,s_num;
  string a[]={"I","II","III","IIII","V","VI","VII","VIII","IX","X","XI","XII"};
  cin>>s>>t;
  //cout<<s<<endl;
   for(int i=0;i<12;i++){
     if(a[i]==s){
       s_num=i;
     }
   }
   cout<<a[(t+s_num + 1440)% 12]<<endl;
  return 0;
}
