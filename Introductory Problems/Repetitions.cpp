#include<bits/stdc++.h>
using namespace std;


//simple dp
int main(){
    string s;
    cin>>s;

    int n=s.size();
    vector<int>dp(n,1);
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i-1]){
            dp[i]=dp[i-1]+1;
        }
    }
    int maxRepitition=*max_element(dp.begin(),dp.end());
    cout<<maxRepitition<<endl;
    return 0;
}
