#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    int low =0;
    int upper =0;
    
    for(char c:s){
        if(islower(c)){
            low++;
        }
        if(isupper(c)){
            upper++;
        }
    }
    

    if(upper > low){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    
    cout<<s<<endl;
    
    return 0;
}