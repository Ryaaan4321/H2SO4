#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;

bool ispalidrome(string s){
    int l=s.size();
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
       string x;
       cin>>x;
       sort(x.begin(),x.end());
       string nx=x;
       reverse(nx.begin(),nx.end());
       if(x==nx){
        cout<<-1<<endl;
       }else{
        cout<<x<<endl;
       }
       
    }
    return 0;
}