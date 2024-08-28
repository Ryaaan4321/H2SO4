#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>


using namespace std;

char ischar(int i){
    return 'a'+i-1;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int i=n-1;
        string res="";
        while (i>=0)
        {
            if(s[i]!='0'){
                res+=ischar(s[i]-'0');
                i--;
            }else{
                res+=ischar(stoi(s.substr(i-2,2)));
                i=i-3;
            }
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
        
    }
    return 0;
}