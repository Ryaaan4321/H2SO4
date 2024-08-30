#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int x;cin>>x;
        int y;cin>>y;
        int n;cin>>n;
        vector<int> a(n);
        a[0] = x, a[n - 1] = y;
        int d = 1;
        for (int i = n - 2; i >= 1; --i) {
            a[i] = a[i + 1] - d;
            ++d;
        }
        bool ok = true;
        for (int i = 0; i + 1 < n; ++i) {
            if (a[i + 1] <= a[i]) {
                ok = false;
            }
        }
        for (int i = 0; i + 2 < n; ++i) {
            int p = a[i + 1] - a[i];
            int q = a[i + 2] - a[i + 1];
            if (p <= q) {
                ok = false;
            }
        }
        if (!ok) {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

}