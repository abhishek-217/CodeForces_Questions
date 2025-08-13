#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;

    int curr =0 ; //'a' is 0
    int rotation = 0;

    for(int i=0; i<s.size(); i++){
        int next = s[i] - 'a';

        int clock = (next - curr + 26) %26;
        int anticlock = (curr - next + 26)%26;

        rotation += min(clock, anticlock);

        curr = next;
    }

    cout<<rotation<<endl;

    return 0;
}
