#include <iostream>
#include <vector>

using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;

    long long half = (n+1) /2;
    if (k <= half)
    {
        cout << k * 2 - 1;
    }
    else
    {
        cout<<2* (k - half)<<endl;
    }

    return 0;
}