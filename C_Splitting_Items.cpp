#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){cin>>a[i];}
        std::sort(a.begin(), a.end(), std::greater<int>());
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=(i%2==0?1:-1)*a[i];
        }
        ans=max<long long>(ans-k,n%2==0?0:a[n-1]);
        cout<<ans<<endl;
    }
    return 0;
};