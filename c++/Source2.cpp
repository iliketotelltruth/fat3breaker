#include <iostream>
using namespace std;

struct nood {
    int m = 40;
    int id = 0;
    bool line = true;
};
int main()
{
    while (true)
    {
        int n, k, x = 0, money = 0, idx = 0, count = 0;
        bool takemoney = true;
        cin >> n >> k;
        if (n == k && k == 0) {
            break;
        }
        nood st[30];
        for (int i = 0; i < n; i++) {
            st[i].id = i + 1;
        }
        while (takemoney) {
            if (money == 0) {
                x++;
                if (x > k) {
                    x = 1;
                }
                money += x;
            }
            if (st[idx].line)
            {
                if (st[idx].m - money <= 0) {
                    money -= st[idx].m;
                    st[idx].line = false;
                    cout << "  " << st[idx].id<< "\n";
                    count++;
                }
                else
                {
                    st[idx].m -= money;
                    money = 0;
                }
            }
            if (count == n) {
                takemoney = false;
            }
            if (idx + 1 == n) {
                idx = 0;
            }
            else {
                idx++;
            }
        }
    }
    return 0;
}