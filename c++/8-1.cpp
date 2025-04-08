#include<iostream>
#include<algorithm>
using namespace std;

int ans[100000];
int ansi;
int ser(int l, int r, int k){
	ansi=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(ans[m]<=k){
			l=m+1;
			ansi=m;
		}
		else{
			r=m-1;
		}
	}
	return ansi;
}
main(){
	int n, q, i, k, j;
	cin >> n >> q;
	for(i=0;i<n;i++){
		cin >> ans[i];
	}
	sort(ans+0, ans+n);
	for(j=0;j<q;j++){
		cin >> k;
		ser(0, n-1, k);
		if(ans[ansi]==k){
			cout <<"YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}
