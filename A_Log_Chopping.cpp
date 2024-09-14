#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sm=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            sm+=x-1;
        }
        if(sm%2==0){
            cout<<"maomao90"<<endl;
        }else{
            cout<<"errorgorn"<<endl;
        }
       
    }
    return 0;
}