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
            target += (i % 2 == 0 ? '0' : '1');  // make pattern 0101...

        int ans = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (s[i] != target[i]) ans++;
        }

        // only a quick rule to check easy impossibles
        if (n == 1 && s != "0") possible = false;
        else if (n == 2 && (s == "00" || s == "11")) possible = false;

        if (!possible) cout << -1 << "\n";
        else cout << ans / 2 << "\n"; // roughly each flip can fix 2 bits
    }

    return 0;
}

