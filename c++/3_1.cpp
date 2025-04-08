#include<iostream>
using namespace std;

int w[200001];
int h[200001];
int ans[200001] = {0};
int we[200001] = {0};
//int s(int l, int r, int c) {
//	while (r >= l)
//	{
//		int m = (r + l) / 2;
//		if (h[m] == c) {
//			return m;
//		}
//		if (h[m] < c) {
//			l = m + 1;
//		}
//		if (h[m] > c) {
//			r = m - 1;
//		}
//	}
//	return -1;
//}

int main() {

	int n, k;
	int high=0;
	cin >> n >> k;
	int f, answer;
	for (int i = 0; i < n; i++) {
		cin >> h[i];
		if (h[i] > high) {
			high = h[i];
		}
	}
	cout << high;
	for (int i = 0; i < k; i++) {
		cin >> w[i];
	}
	for (int i = high, x=0; i >=0; i--) {
		cout << "g\n";
		for (int j = 0; j < n; j++) {
			if (h[j] == i) {
				ans[j] = 1;
			}
		}
		for (int j = 0; j < n; j++) {
			if (ans[j] == 1) {
				we[x]++;
			}
			if (ans[j] == 0 && we[x] != 0) {
				x++;
			}
		}
		int a = 0, b = 0;
		if (we[a] > w[b]) {
			if (we[a] - w[b] < w[b + 1]) {
				a++;
			}
			b++;
		}
		else {
			a++;
		}
		if (b == k) {
			answer = i;
			break;
		}
	}
	cout << answer << "\n";
	return 0;
}