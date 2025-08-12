#include<iostream>


using namespace std;

int main(){
    

    int s ;
    cin>>s;

    int maxV = 0, minV = 150;

    int maxi =0;
    int mini = 0;
    for(int i=1; i<=s; i++){

        int n;
        cin>>n;
        if(maxV < n){
            maxV = n;
            maxi = i;
        }

        if(minV >= n){
            minV = n;
            mini = i;
        }
    }

    if(maxi > mini){

        cout<< (maxi - 1) + (s- mini) -1<<endl;
    }else{
        cout<< (maxi - 1) + (s- mini)<<endl;
    }

    return 0;
}