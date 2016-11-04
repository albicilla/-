#include <iostream>

using namespace std;

typedef long long ll;

ll n,c,s;
int a[100010];

int main(){
	s=0;
	c=1;
	cin>>n>>a[0];
	for(int i=1;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>a[i-1]){
			c++;
		}else{
			s+=c*(c-1)/2;
			c=1;
		}
	}
	s+=c*(c-1)/2;
	s+=n;
	cout<<s<<endl;
	return 0;
}