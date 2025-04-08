#include<iostream>
#include<stack>
using namespace std;

main(){
	int n, i;
	string s;
	cin >> n;
	getline(cin, s);
	while(n--){
		stack<char>stk;	
		getline(cin, s);
		for(int j=0;j<s.length();j++){
			if(!stk.empty()&&stk.top()=='('&&s[j]==')'){
				stk.pop();
			}
			else if(!stk.empty()&&stk.top()=='['&&s[j]==']'){
				stk.pop();
			}
			else{
				stk.push(s[j]);
			}
		}
		if(stk.empty()){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
	return 0;
}
