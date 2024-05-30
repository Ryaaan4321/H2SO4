#include<bits/stdc++.h>
#include<iterator>
#include<algorithm>
#include<math.h>

using namespace std;


int main()
{
    vector<int> nums{1,2,3,4,5};
    auto itr=nums.begin();
    while (itr!=nums.end())
    {
        cout<<*itr<< endl;
        itr++;
    }
    itr=nums.end();
    while(itr!=nums.begin()){
        cout<<*itr<<endl;
        itr--;
    }
}