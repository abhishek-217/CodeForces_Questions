#include <iostream>

using namespace std;

int main()
{
    int n, b, p;
    cin >> n >> b >> p;

    int dish1 = 0;
    int dish2 = 0;
    while (n)
    {
        int d;
        cin >> d;

        if (d == 1)
        {
            dish1++;
        }
        else
        {
            dish2++;
        }
        n--;
    }

    int ans = 0;
    int rp =0;
    if (dish1 > b)
    {
        ans = dish1 - b;
    }else{
        rp = b-dish1;
    }

    if(dish2 > p){
        ans += dish2 - p;
    }

    if(rp < ans){

        ans -= rp;
    }else{
        
        cout<<0<<endl;
        return 0;
    }

    cout<<ans<<endl;
}