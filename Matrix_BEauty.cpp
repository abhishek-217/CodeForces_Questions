#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    
    vector<vector<int>>mat(5, vector<int>(5));
    
    for(int i=0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>mat[i][j];
        }
    }
    
    int res =0;
    for(int i=0; i<5; i++){
        for(int j = 0; j<5; j++){
            if(mat[i][j] == 1){
                res = abs(i-3) + abs(j-3);
                cout<<res<<endl;
                break;
            }
        }
    }
    
    
    
    return 0;
}