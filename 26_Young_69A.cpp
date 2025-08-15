#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int e1 =0,e2=0,e3=0;

    while(n){
        int x,y,z;
        cin>>x>>y>>z;

        e1 += x;
        e2 += y;
        e3 += z;

        n--;
    }

    if((e1 == 0 && e2 == 0) && e3 == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}