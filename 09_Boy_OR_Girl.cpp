#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    unordered_map<char,int>freq;
    
    for(char c:s){
        freq[c]++;
    }
    
    int n = freq.size();

    if(n % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}