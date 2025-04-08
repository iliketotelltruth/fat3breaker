#include<iostream>
using namespace std;

int a[214748];
int b[200][200];
main(){
	string  e, t, h, g;
	int n, m;
	cin >> m >> n;
	for(int i=0;i<m;i++){
		cin >> e; 
		for(int j=0;j<n;j++){
		a[i]+=(int)e[j]-48;
		b[i][j]=(int)e[j]-48;	
		}	
	}
	cin >> t;
	for(int i=m-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(b[i][j]==0){
				h+=t[j];
				h+=g;
				g=h;
				h="";
			}
			if(b[i][j]==1){
				g+=t[j];
			}
		}
		if(a[i]%2!=0){
			for(int j=0;j<t.size()/2;j++){
				if(t.size()%2!=0){
				swap(g[j], g[j+(t.size()/2+1)]);
				}
				else{
				swap(g[j], g[j+(t.size()/2)]);
				}
			}
	 }
				if(i-1>=0){
				t=g;
				g="";
				}	
	}
		cout << g <<"\n";
	return 0;
}
