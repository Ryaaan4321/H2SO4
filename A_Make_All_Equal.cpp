#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        int mx=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mx=max(mx,++mp[x]);
        }
        cout<<(n-mx)<<endl;
    }
    return 0;
}