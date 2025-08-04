// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<cctype>
// #include<vector>

// using namespace std;


// int main(){
    
//     string s1, s2;
//     cin>>s1;
//     cin>>s2;
    
//     transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   
//     for(int i=0; i<s1.size(); i++){
//         int f = s1[i] - 'a';
//         int sec = s2[i] - 'a';
        
//         if(f < sec){
//             cout<<-1<<endl;
//             return 0;
         
//         }else if(sec < f){
//             cout<<1<<endl;
           
//             return 0;
       
//         }
//     }
    

//     cout<<0<<endl;
    
//     return 0;
// }


#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
#include<vector>

using namespace std;


int main(){
    
    string s1, s2;
    cin>>s1;
    cin>>s2;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
   
    for(int i=0; i<s1.size(); i++){
        
        if(s1[i] < s2[i]){
            cout<<-1<<endl;
            return 0;
         
        }
        if(s2[i] < s1[i]){
            cout<<1<<endl;
           
            return 0;
       
        }
    }
    

    cout<<0<<endl;
    
    return 0;
}