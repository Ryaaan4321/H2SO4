#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


void galat_karam(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> d(n);
    for(int i=1;i<a.size();i++){
        d[i]=a[i]-a[i-1];
    }
    for(auto it:d){
        cout<<it<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        galat_karam();
    }
}