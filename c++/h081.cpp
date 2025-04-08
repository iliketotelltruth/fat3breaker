#include<iostream>
using namespace std;

int ary[1024];
main(){
	bool has=true;
	int n, d;
	cin >> n >> d;
	int x, y, ans;
	for(int i=0;i<n;i++){
		cin >> ary[i];
	}
	x=ary[0];
	ans=-x;
	for(int i=1;i<n;i++){
		if(x+d<=ary[i]&&has){
			ans+=ary[i];
			x=ary[i];
			has=false;
		}
		else if(x-d>=ary[i]&&!has){
			ans-=ary[i];
			x=ary[i];
			has=true;
		}
		else if(has&&i==n-1){
			ans+=x;
		}	
	}
	if(n==1){
		ans=0;
	}
cout << ans <<"\n";
	return 0;
}
