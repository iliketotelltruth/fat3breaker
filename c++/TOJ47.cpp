#include<iostream>
#include<algorithm> 
using namespace std;

int xi[1000000];
int ans;
int ser(int l, int r, int k){
	ans=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(xi[m]<=k){
			l=m+1;
			ans=m;
		}
		else{
			r=m-1;
		}
	}
	return ans;
}
main(){
	int n, i, t, k;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> xi[i];
	}
	sort(xi+0, xi+n);
	cin >> t;
	for(int j=0;j<t;j++){
		cin >> k;
		ser(0, n-1, k);
		if(xi[ans]==k)
		{
			cout << k << "\n";
		}
		else if(xi[ans]>k){
			cout << "no" << " "<< xi[0] <<"\n";
		}
		else if(ans==n-1&&xi[ans]<k){
			cout << xi[n-1] <<" "<< "no\n";
		}
		else{
			cout << xi[ans] <<" "<< xi[ans+1]<<"\n";
		} 
	}
	return 0;
}
