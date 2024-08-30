#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>


using namespace std;


int main(){
    int a;cin>>a;int b;cin>>b;
    int xr=0;
    std::vector<int>aa(2);
    aa.push_back(a);
    aa.push_back(b);
    for(int i=1;i<aa.size();i++){
       xr^=aa[i];
    }
    cout<<xr<<endl;
    return 0;
}