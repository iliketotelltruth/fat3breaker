#include<algorithm>
#include<iostream>
using namespace std;

struct line{
	int l,r;
};	
bool comp(const line &a, const line &b)
	{
		if(a.l != b.l){
			return a.l < b.l;
		}
		return a.r<b.r;
	}
line x[10000];
main(){
	int n, i, w, l, r;
	cin >> n;
	w=0;
	for(i=0;i<n;i++){
		cin >> x[i].l >>x[i].r;
	}
	sort(x, x+n, comp);
	for(l=-1, i=0, r=-1;i<n;i++){
		if(x[i].l>r){
		w+=(r-l);
		l=x[i].l;
		r=x[i].r;
		}
		else{
			if(r<x[i].r)
			{
			r=x[i].r;	
			}
		}
	}
		w+=(r-l);
	cout << w <<"\n";
	return 0;
}
