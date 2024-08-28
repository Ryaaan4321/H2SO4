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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2==1){
            cout<<"Mike\n";
            continue;
        }
        int sml=0;
        for(int i=0;i<n;i++){
            if(a[i]<a[sml]){
                sml=i;
            }
        }
        if(sml%2==0){
            cout<<"Joe\n";
        }else{
            cout<<"Mike\n";
        }
    }
    return 0;  
};