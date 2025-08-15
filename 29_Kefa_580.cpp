#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int maxans =1;
    vector<int>arr(n);

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int ans =1;
    for(int i =1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            ans++;
        }else{
            maxans = max(maxans, ans);
            ans =1;
        }
    }
    maxans = max(maxans, ans);

    cout<<maxans<<endl;


    return 0;
}