#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_set<int>s1;

    int p,q;
    vector<int>X(n);
    vector<int>Y(n);

    cin>>p;
    for(int i=0; i<p; i++){
        cin>>X[i];
        s1.insert(X[i]);
    }

    cin>>q;
    for(int i=0; i<q; i++){
        cin>>Y[i];
        s1.insert(Y[i]);
    }

    

    if(s1.size() == n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}