#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;

    
    vector<int>res(n);
    cout<<"Enter the scores: ";
    
    for(int i=0; i<n; i++){
        cin>>res[i];
    }
    
    int com = res[k];
    int count =0;
    for(int i=0; i<n; i++){
       if(res[i] >= com && res[i] > 0){
           count++;
       }
    }
    
    cout<<count<<endl;
    
    
    return 0;
    
}