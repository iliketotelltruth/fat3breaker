#include<iostream>
using namespace std;

int s[1024];
int t[1024];
int idx[1024];
int l[1024];
int win[1024];
int lose[1024];
main(){
	bool win=false;
	int n, m;
	int h=0;
	cin >> n >> m;
		for(int j=0;j<n;j++){
			cin >> s[j];
		}
		for(int j=0;j<n;j++){
			cin >> t[j];
		}
		for(int j=0;j<n;j++){
			cin >> idx[j];
		}
		int a=n;
		int i;
		while(win){	
			for(i=0;i<a;i+=2)
			if(l[i]==m){
				
			}
			if(l[i+1]==m){
				
			}
			else{
					if(s[i]*t[i]>=s[i+1]*t[i+1]){
					s[i]=s[i]+((s[i+1]*t[i+1])/(2*t[i]));
					t[i]=s[i]+((s[i+1]*t[i+1])/(2*t[i]));
					l[i+1]++;
					win[i]=i;
					lose[i]=a-1;
				}
				else{
					s[i+1]=s[i+1]+((s[i]*t[i])/(2*t[i+1]));
					t[i+1]=s[i+1]+((s[i]*t[i])/(2*t[i+1]));
					l[i]++;
					win[i]=i+1;
					lose[i]=a-2;
				}
			}
			for(i=0;i<a/2;i++){
				idx[i]=win[i];
			}	
			for(i=a/2;i>0;i--){
				idx[i]=lose[i];
			}
			for(i=0;i<a/2){
				win[i]=0;
				lose[i]=0;
			}
			if()
		}
		cout << idx[0];
		return 0;
}
