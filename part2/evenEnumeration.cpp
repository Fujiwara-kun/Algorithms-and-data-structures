#include <iostream>
using namespace std;
// 偶数の列挙のアルゴリズム
int main()
{
    int N;
    cin >> N;
    // T(N)=N/2よってO(N)
    for (int i = 2; i <= N; i += 2)
    {
        cout << i << endl;
    }
}