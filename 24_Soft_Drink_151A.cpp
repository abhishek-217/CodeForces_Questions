#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k,l,c,d,p ,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totaldrink = k*l;
    int totalslice = c*d;

    int firstT = totaldrink/nl;
    int thirdT = p/np;

    int ans = min({firstT,totalslice, thirdT}) / n;

    cout<<ans<<endl;
    return 0;
}