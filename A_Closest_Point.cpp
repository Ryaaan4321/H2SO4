#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>


using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=0;
        if(n==2 && a[0]+1<a[1]){
            f=1;
        }
        if(f){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}