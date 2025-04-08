#include <iostream>
using namespace std;

int main()
{
    int set = 1, n;
    while (true) {
        string y[20];
        cout << "SET " << set<<"\n";
        set++;
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        for (int i = 0; i < n; i += 2) {
            cout << y[i] << "\n";
        }
        if (n % 2 == 0) {
            for(int i=n-1;i>0;i-=2){
                cout << y[i] << "\n";
            }
        }
        else {
            for (int i = n - 2; i > 0; i -= 2) {
                cout << y[i] << "\n";
            }
        }
    }
    return 0;
}
