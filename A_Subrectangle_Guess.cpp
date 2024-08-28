#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int m;cin>>m;
        int mx_i=0;
        int mx_j=0;
        vector<vector<int>>grid(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                if(grid[i][j]>grid[mx_i][mx_j]){
                    mx_i=i;
                    mx_j=j;
                }
            }    
        }
        int h=max(mx_i+1,n-mx_i);
        int w=max(mx_j+1,m-mx_j);
        cout<<h*w<<endl;
    }
    
    return 0;
};