#include<iostream>
#include<vector>
using namespace std;

int main() {
	int m, n, h, a;
	int b = 0, max=0;
	cin >> m >> n >> h;
	int tbl[m][n];
	int u, d, l, r;
	for (int i = 0; i < h; i++, b=0) {
		int r, c, t;
		cin >> r >> c >> t;
		if (t == 0) {
			tbl[r][c] = 1;
			for (int i = r + 1; i < m; i++) {
				if (tbl[i][c] == 1) {
					u = i;
					break;
				}
			}
			for (int i = r - 1; i > 0; i--) {
				if (tbl[i][c] == 1) {
					d = i;
					break;
				}
			}
			for (int i = c + 1; i < n; i++) {
				if (tbl[r][i] == 1) {
					r = i;
					break;
				}
			}
			for (int i = c - 1; i > 0; i--) {
				if (tbl[r][i] == 1) {
					l = i;
					break;
				}
			}
			int w = 500;
			if (w > u) {
				w = u;
			}
			if (w > d) {
				w = d;
			}
			if (w > l) {
				w = l;
			}
			if (w > r) {
				w = r;
			}
			if (w == u || w == d) {
				if (w > r) {
					for (int i = r + 1; i < w; i++) {
						tbl[i][c] == 2;
					}
				}
				else {
					for (int i = r - 1; i > w; i--) {
						tbl[i][c] == 2;
					}
				}
			}
			else {
				if (w > c) {
					for (int i = c + 1; i < w; i++) {
						tbl[r][i] == 2;
					}
				}
				else {
					for (int i = c - 1; i > w; i--) {
						tbl[r][i] == 2;
					}
				}
			}
		}
		else {
			tbl[r][c] = 1;
			for (int i = r + 1; i < m; i++) {
				if (tbl[i][c] == 1) {
					u = i;
					break;
				}
			}
			for (int i = r - 1; i > 0; i--) {
				if (tbl[i][c] == 1) {
					d = i;
					break;
				}
			}
			for (int i = c + 1; i < n; i++) {
				if (tbl[r][i] == 1) {
					r = i;
					break;
				}
			}
			for (int i = c - 1; i > 0; i--) {
				if (tbl[r][i] == 1) {
					l = i;
					break;
				}
			}
			int z = 500;
			if (z > u) {
				z = u;
			}
			if (z > d) {
				z = d;
			}
			if (z > l) {
				z = l;
			}
			if (z > r) {
				z = r;
			}
			if (z == u || z == d) {
				if (z > r) {
					for (int i = r + 1; i < z; i++) {
						tbl[i][c] == 0;
					}
				}
				else {
					for (int i = r - 1; i > z; i--) {
						tbl[i][c] == 0;
					}
				}
			}
			else {
				if (z > c) {
					for (int i = c + 1; i < z; i++) {
						tbl[r][i] == 0;
					}
				}
				else {
					for (int i = c - 1; i > z; i--) {
						tbl[r][i] == 0;
					}
				}
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (tbl[i][j] == 0) {
					b++;
				}
			}
		}
		a = m * n - b;
		if (max < a) {
			max = a;
		}
	}
	cout << max << "\n" << a <<"\n";
	return 0;
}
