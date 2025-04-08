#include<iostream>
using namespace std;

int num[1024];
main(){
	int t, i, c, j;
	while(cin>>t){
	c=0;
	for(i=0;i<t;i++){
		cin >> num[i];
	}
	for(i=0;i<t-1;i++){
		for(j=0;j+1<t-i;j++){
			if(num[j]>num[j+1]){
				swap(num[j], num[j+1]);
				c++;
			}
		}
	}
	cout << "Minimum exchange operations : " << c << "\n";
	}
	return 0;
}
