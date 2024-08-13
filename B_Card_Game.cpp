#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>


using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        vector<long long>a(2);
        vector<long long>b(2);
        cin>>a[0]>>a[1];
        cin>>b[0]>>b[1];
        auto check=[&](const long long x,const  long long y)->long long{
           if(x>y){
            return 1;
           }
           if(x<y){
            return -1;
           }
           return 0;
        };
        long long ans = 0;
        if(check(a[0],b[0])+check(a[1],b[1])>0)
           ans+=2;
        if(check(a[0],b[1])+check(a[1],b[0])>0)
          ans+=2;
        cout<<ans<<endl;
    }
    return 0;
}