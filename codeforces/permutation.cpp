#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;

void galat_karam(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"no"<<endl;
        }
    }
    cout<<"yes"<<endl;

}
int main(){
    galat_karam();
    return 0;

}