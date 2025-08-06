#include<iostream>
#include<string>

using namespace std;

int main(){
    int num;
    cin>>num;
    string s;
    cin>>s;
    
    int count =0;
    int n = s.size();
    if(n == 1){
        cout<<"0"<<endl;
        return 0;
    }
    
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}