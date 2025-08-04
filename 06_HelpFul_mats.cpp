#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;

    int r1 =0;
    int r2 =0;
    int r3 =0;

    string ans = "";
    int p=0;

    for(char c :s){
        if(c == '1'){
            r1++;
        }
        if(c == '2'){
            r2++;
        }
        if(c == '3'){
            r3++;
        }
        if(c == '+'){
            p++;
        }
    }
    while(r1){
        if(r1 >=1 && p>0){
            ans = ans + "1+";
            p--;
        }else{
            ans = ans + "1";
        }
        r1--;
        
    }
    while(r2){
        if(r2 >=1 && p>0){
            ans = ans + "2+";
            p--;
        }else{
            ans = ans + "2";
        }
        r2--;
        
    }
    while(r3){
        if(r3 >1){
            ans = ans + "3+";
        }else{
            ans = ans + "3";
        }
        r3--;
    }

    cout<<ans<<endl;

    return 0;
}