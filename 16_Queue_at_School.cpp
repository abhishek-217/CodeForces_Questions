#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n, t;
    cin >> n >> t;

    string q;
    cin >> q;



    while(t){
        for(int i=1; i<n; i++){
            if(q[i-1] == 'B' && q[i] == 'G'){
                q[i-1] = 'G';
                q[i] = 'B';

                i++;
            }
        }
        t--;
    }

    cout<<q<<endl;




    // Think Too advance and try to Avoid nested loop
    

    // int B = 0;
    // int G = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (q[i] == 'B')
    //     {
    //         B++;
    //     }
    //     else
    //     {
    //         G++;
    //     }
    // }

    // if (G == 0 || B == 0)
    // {
    //     cout << q << endl;
    //     return 0;
    // }

    // string ans = "";

    // while (B > 0 && G > 0)
    // {
    //     if (B == 1)
    //     {
    //         ans.append(G, 'G');
    //         ans.append(1, 'B');
    //         break;
    //     }

    //     ans.append(t, 'G');
    //     G -= t;
    //     ans.append(1, 'B');
    //     B--;
    // }

    // cout << ans << endl;

    return 0;
}