#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>res(n);

    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        arr[i] = res[i];
    }

    
    sort(arr.begin(), arr.end());
    unordered_map<int,int>mp;

    int rank =1;
    for(int i=arr.size() -1; i>=0; i--){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = rank;
    
        }
        rank++;
    }

    for(int i : res){
        cout<<mp[i]<<" ";
    }


    return 0;
}