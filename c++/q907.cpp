#include<iostream>
#include<algorithm>
using namespace std;

int cam[610];
int m[40000];	
main(){	
int n, k;
while(cin >> n >> k){
	int r, i;
	int u=0;
	int min=0;
	int max=0;
		int fin;
		for(i=0;i<=n;i++){
			cin >> cam[i];
			if(cam[i]>min){
				min=cam[i];
			}
			max+=cam[i];
		} 
		for(i=min, fin=max;i<=max;i++){
			r=0;
			u=0;
			for(int j=0;j<=n;j++){	
				if(r+cam[j]<=i){
					r+=cam[j];
				}
				else{
					r=cam[j];
					u++;
				}
			}
			if(u<=k&&fin>i){
				fin=i;
			}		
		}
		cout << fin <<"\n";
		}
		return 0;
}
