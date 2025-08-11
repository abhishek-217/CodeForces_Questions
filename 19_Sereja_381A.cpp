#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int s=0;
    int d =0;
    int i=0;
    int j =n-1;
    
    while( i <= j){
        if(arr[i] > arr[j]){
            s += arr[i];
            i++;
        }else{
            s += arr[j];
            j--;
        }

        if(i > j){
            break;
        }

        if(arr[i] > arr[j]){
            d += arr[i];
            i++;
        }else{
            d += arr[j];
            j--;
        }
    }

    

    cout<<s<<" "<<d<<endl;

    return 0;

}