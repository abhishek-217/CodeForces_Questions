#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int ans =0;
    while(n){
        string s;
        cin>>s;

        // if(n==1 && (s == "X++" || s == "X--")){
        //     cout<<ans<<endl;
        //     return 0;
        // }

        if(s == "X++" || s == "++X"){
            ans++;
        }else{
            ans--;
        }

        n--;
    }


    cout<<ans<<endl;
    return 0;
}