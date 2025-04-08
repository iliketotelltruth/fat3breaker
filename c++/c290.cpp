#include<iostream>
using namespace std;

int s[1024];
int t[1024];
main(){
	int n, w;
	w=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t[i] >> s[i];
		if(s[i]==-1){
			w++;
		}
	}
	int ans=-1;
	int time=0;
	for(int i=0;i<n;i++){
		if(s[i]>ans){
			ans=s[i];
			time=t[i];
		}
	}
	ans-=n;
	ans-=(w*2);
	if(ans<0){
		ans=0;
	} 
	cout << ans << " " << time;
	return 0;
}
