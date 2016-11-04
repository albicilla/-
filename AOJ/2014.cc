#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	int a;
	cin>>a;
	while(a--){
		string s,t,ans,ans1,ans2;
		cin>>s>>t;
		//int msize=max(s.size(),t.size());
		int memo=-1;
		int temp=0;
		if(s.size()<t.size()){
			temp=t.size()-s.size();
			for(int i=0;i<temp;i++)s+='1';
		}
		for(int i=0;i<s.size();i++){
			if(s[i]!=t[i]){
				memo=i;
				break;
			}
		}
		//
		//bool flag = false;
		if(t.size()>=memo){
			for(int i=0;i<t.size()-memo;i++){
				ans1+='<';
			}
			for(int i=memo;i<s.size()-temp;i++){
				ans1+=s[i];
			}
			
		}else{
			//flag=true;
			//ans1="xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
		}
		ans1+='*';

		
		
			ans2+='*';
			for(int i=0;i<s.size()-temp;i++)ans2+=s[i];
			ans2+='*';
		
		
		//if(flag)ans1=ans2;
		
		if(ans1.size()<=ans2.size())ans=ans1;
		else ans=ans2;

		//cout <<"memo="<<memo<<endl;
		//cout<<"ans1="<<ans1<<endl;
		//cout<<"ans2="<<ans2<<endl;
		cout<<ans<<endl;
	}
}