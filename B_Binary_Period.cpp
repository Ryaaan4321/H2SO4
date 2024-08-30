#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        set<char>st(s.begin(),s.end());
        string ns(st.begin(),st.end());
        string ss="";
        for(int i=0;i<s.length();i++){
            ss+=ns;
        }
        cout<<ss<<endl;
    }
    return 0;
}