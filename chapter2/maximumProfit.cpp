#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> r(N);
    int max = numeric_limits<int>::lowest();

    for (int i = 0; i < N; i++)
        cin >> r[i];

    for (int j = 1; j < N; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (r[j] - r[i] > max)
                max = r[j] - r[i];
        }
    }
    cout << max << endl;
    return 0;
}