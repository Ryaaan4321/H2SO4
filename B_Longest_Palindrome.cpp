#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int n;cin>>n;int m;cin>>m;
    std::set<string>st;
    string p;string ans;
    for(int i=0;i<n;i++){
        string t;cin>>t;
        st.insert(t);
        auto r=t;
        std::reverse(r.begin(),r.end());
        if(t==r){
            p=t;
        }else if(st.count(r)){
            ans+=t;
        }
    }
    auto t=ans;
    std::reverse(t.begin(),t.end());
    ans+=p+t;
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
    return 0;
}