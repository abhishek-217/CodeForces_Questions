#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;

    int length = s.size();

    int ans = (26 * (length + 1)) - length;

    cout<<ans<<endl;

    return 0;
}