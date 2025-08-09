#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int>st;

    int i=4;
    while(i){

        int s;
        cin>>s;
        st.insert(s);

        i--;
    }

    cout<<4-st.size();

    return 0;
}