#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int a[100010],b[100010];
vector<int> c;
int main(){
	int temp=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		c.push_back(a[i]-b[i]);
	}
	sort(c.begin(),c.end());

	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]<0){
		ans=temp+a[i];
		temp+=c[i];
		}
		else{
		ans=temp+a[i];
		temp+=c[i];
		}

	}
	cout<<ans<<endl;

}