#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;

    while(t){
        int n,m;
        cin>>n>>m;

        if(n % 2 == 0 && m % 2 == 0){
            cout<<(n*m)/2<<endl;
        }else{
            cout<<(n*m +1)/2<<endl;
        }
        t--;
    }

    return 0;
}
