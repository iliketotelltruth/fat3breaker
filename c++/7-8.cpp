#include<algorithm>
#include<iostream>
using namespace std;

int ary[1000];
int time[1000];
int value[1000];
main(){
	int n, a, j, k, c, i;
	cin >>n;
	for(k=0;k<n;k++){
		cin >> ary[k];
	} 
	sort(ary+0, ary+n);
	a=0;
	for(i=0;i<n;i=j){
		for(j=i+1;j<n&&ary[j]==ary[i];j++);
		value[a]=ary[i];
		time[a]=j-i;
		a++;
	} 
	 cout << a <<" type\n";
	for(c=0;c<a;c++){
		cout << value[c]<<": "<< time[c] <<" times\n";
	}
	return 0;
}
