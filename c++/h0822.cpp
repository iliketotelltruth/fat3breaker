#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int x;
	vector<long long>  idx, s(n+1), t(n+1), l(n+1);
		for(int i=1;i<=n;i++){
			cin >> s[i];
		}
		for(int i=1;i<=n;i++){
			cin >> t[i];
		}
		for(int i=0;i<n;i++){
			cin >> x;
			idx.push_back(x);
		}
		while(idx.size()>1){
			vector<int> win, lose;
		for(int i=0;i<(int)idx.size();i+=2){
			int p1, p2;
			if(i+1==idx.size()){
			win.push_back(idx[i]);	
				continue;
			}
			else{
				p1=idx[i];
				p2=idx[i+1];
			}
			long long a=s[p1];
			long long b=t[p1];
			long long c=s[p2];
			long long d=t[p2];
			if(a*b >= c*d){
                win.push_back(p1);
                s[p1] = a+(c*d)/(2*b);
                t[p1] = b+(c*d)/(2*a);
                l[p2]++;
                if(l[p2]<m){
                    lose.push_back(p2);
                }
                s[p2] = c+(c/2);
                t[p2] = d+(d/2);
            }
            else{
                win.push_back(p2);
                s[p2] = c+(a*b)/(2*d);
                t[p2] = d+(a*b)/(2*c);
                l[p1]++; 
                if(l[p1]<m){
                    lose.push_back(p1);
                }
                s[p1] = a+(a/2);
                t[p1] = b+(b/2);
            }
        }
			idx.clear();
			for(int i=0;i<win.size();i++){
			int y=win[i];
				idx.push_back(y);
			}
			for(int i=0;i<lose.size();i++){
				int z=lose[i];
				idx.push_back(z);
		}
	}
	cout << idx[0] <<"\n";		
		return 0;
}
