#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
        
    for (int ii = 1; ii <= tc; ++ii) {
        cout << "Case #" << ii <<  ": ";

        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;

        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) --k;
        }
    
        cout << abs(k) << '\n';
    } 
}
