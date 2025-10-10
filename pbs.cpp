#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string target = "";
        for (int i = 0; i < n; i++)
            target += (i % 2 == 0 ? '0' : '1');  

        int ans = 0;
        bool f = true;

        for (int i = 0; i < n; i++) {
            if (s[i] != target[i]) ans++;
        }

    
        if (n == 1 && s != "0") f = false;
        else if (n == 2 && (s == "00" || s == "11")) f = false;

        if (!f) cout << -1 << endl;
        else cout << ans / 2 << endl; 
    }

    return 0;
}


