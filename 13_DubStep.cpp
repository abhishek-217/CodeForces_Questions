#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;

    bool flag = false;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            if(flag){
                cout<<" ";
            }
            continue;
        }else{
            flag = true;
            cout<<s[i];
        }
    }
    

    return 0;
}