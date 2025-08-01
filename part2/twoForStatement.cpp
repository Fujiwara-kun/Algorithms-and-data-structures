#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    // N*Nの正方形を考える
    // O(N^2)
    for (int i; i < N; i++)
    {
        for (int j; j < N; i++)
        {
            ++count;
        }
    }
}