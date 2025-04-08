#include<iostream>
#include<string>
using namespace std;

char maze[65][65];
int main() {
	int g;
	cin >> g;
	while (g--) {
		int eswn = 0;
		char ESWN = 'N';
		int n, m;
		pair<int, int>robot;
		cin >> n >> m;
		cin.ignore();
		string h;
		for (int i = 0; i < n; i++) {
			getline(cin, h);
			for (int j = 0; j < m; j++) {
				if (h[j] == '*')maze[i][j] = '*';
				else {
					maze[i][j] = ' ';
				}
			}
		}
		cin >> robot.first >> robot.second;
		string x;
		int bre = 0;
		while (cin >> x) {
			if(bre==0)
			{
				for (int i = 0; i < x.size(); i++) {
					if (x[i] == 'R') {
						eswn = (eswn + 1) % 4;
					}
					else if (x[i] == 'L') {
						eswn = (eswn - 1 + 4) % 4;
					}
					else if (x[i] == 'F') {
							if (eswn % 4 == 0&&maze[robot.first - 1][robot.second] == ' '&& robot.first - 1>=0) {
								robot.first--;
							}
							else if (eswn % 4 == 1&&maze[robot.first][robot.second + 1] == ' '&& robot.second + 1<m) {
								robot.second++;
							}
							else if (eswn % 4 == 2&&maze[robot.first + 1][robot.second] == ' '&& robot.first + 1<n) {
								robot.first++;
							}
							else if (eswn % 4 == 3&&maze[robot.first][robot.second - 1] == ' '&& robot.second - 1 >=0) {
								robot.second--;
							}
					}
					else if (x[i] == 'Q') {
						bre++;
					}
				}
			}
			if(bre==1){
				break;
			}
		}
		if (eswn == 0)ESWN = 'N';
		else if (eswn % 4 == 1)ESWN = 'E';
		else if (eswn % 4 == 2)ESWN = 'S';
		else if (eswn % 4 == 3)ESWN = 'W';
		cout << robot.first+1 << " " << robot.second+1 << " " << ESWN << "\n";
	}
	return 0;
}