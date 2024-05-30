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
    int q;
    cin>>q;
    int cnt=0;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(a[i]>=x)cnt++;
    }
    cout<<cnt<<endl;
};
int main(){
    galat_karam();
    return 0;
}