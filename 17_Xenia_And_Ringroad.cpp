#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>task(m);

    for(int i=0; i<m; i++){
        cin>>task[i];
    }

    int ans = task[0] - 1;
    for(int i=1; i<m; i++){
        int t1 = task[i-1];
        int t2 = task[i];

        if(t1 == t2){
            continue;
        }
        if(t1 < t2){
            ans += t2-t1;
        }else{
            ans += (n - t1) + t2;
        }
    }

    cout<<ans<<endl;

    return 0;
}