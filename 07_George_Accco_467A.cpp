#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> mat[i][j];
        }
    }

    int rooms = 0;

    for (int i = 0; i < n; i++)
    {
        int acc = mat[i][1];
        int curr = mat[i][0];

        if (acc - curr >= 2)
        {
            rooms++;
        }
    }

    cout << rooms << endl;

    return 0;
}
