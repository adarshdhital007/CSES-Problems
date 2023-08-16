#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    vector<int>count(n+1,0);

    for(int i=0;i<n-1;i++){
        int num;
        cin>>num;
        count[num]++;
    }
     for(int i=1;i<=n;i++){
        if(count[i]==0){
        cout<<i<<"\n";
        break;
    }
    }
    return 0;
}