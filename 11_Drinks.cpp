#include<iostream>

#include<iomanip>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    float d =n;
    double sum =0;
    while(n){
        int p;
        cin>>p;
        
        sum+= p;
        
        n--;
    }
    
    cout <<fixed <<setprecision(12);
    cout<<(sum/d);
    
    return 0;
}