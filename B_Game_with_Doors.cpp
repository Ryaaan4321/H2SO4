#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int l;cin>>l;
        int r;cin>>r;
        int L;cin>>L;
        int R;cin>>R;
        int nl=max(l,L);
        int nr=min(r,R);
        if(nl>nr){
            cout<<1<<endl;
            continue;
        }
        int ans=nr-nl;
        if(min(l,L)<nl)ans++;
        if(max(r,R)>nr)ans++;
        cout<<ans<<endl;
    }
    return 0;
};