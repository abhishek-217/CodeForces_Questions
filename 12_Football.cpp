#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    int count =1;
    int maxi =0;
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            maxi = max(maxi,count);
            count =1;
        }
    }
    maxi = max(maxi,count);
    
    if(maxi >= 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}