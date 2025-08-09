#include<iostream>
#include<string>
#include<map>

using namespace std;


int main(){
    int n;
    cin>>n;

    map<int,int>mp;
    int i=1;
    while(n){
        int k;
        cin>>k;
        mp.insert({k,i});
        i++;
        n--;
    }

    for(auto &v:mp){
        cout<<v.second<<" ";
    }
     

    return 0
;}