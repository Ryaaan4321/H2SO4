#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;

void galat_karam(){
    int n = 0; cin >> n; 
	vector<int> a(n,0);
	for (auto& x : a) cin >> x;
	sort(a.begin(), a.end());
	if (a.back() == a[0]) {
		cout << "-1\n";
		return;
	}
	else {
		int it = 0;
		while (a[it] == a[0]) it++;
		cout << it << " " << n - it << "\n";
		for (int j = 0; j < it; ++j) cout << a[j] << " ";
		for (int j = it; j < n; ++j) cout << a[j] << " ";
	}
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
    galat_karam();
    }
    return 0;
}
    