#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        std::vector<int>a(n);
        std::priority_queue<int>pq;
        long long ans=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==0){
                if(!pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                }
            }else{
                pq.push(x);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}