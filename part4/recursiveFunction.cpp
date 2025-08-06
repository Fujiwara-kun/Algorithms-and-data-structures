#include <iostream>
using namespace std;

int func(int N)
{
    if (N == 0)
        return 0; // 終了条件
    return N + func(N - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << func(N) << endl;
    return 0;
}