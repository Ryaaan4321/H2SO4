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
            std::cin>>a[i];
        }
        int sm=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sm+=a[i];
            }else{
                sm-=a[i];
            }
        }
        cout<<sm<<endl;
    }
    return 0;
};