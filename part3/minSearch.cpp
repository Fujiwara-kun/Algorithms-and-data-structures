#include <iostream>
#include <vector>
using namespace std;
const int INF = 200000000;

int main()
{
    // 入力を受け取る
    int N;
    cin >> N;

    vector<int> a(N); // 動的配列の宣言
    for (int i = 0; i < N; i++)
        cin >> a[i];

    // 線形探索
    int min_value = INF;
    for (int i = 0; i < N; i++)
    {
        if (a[i] < min_value)
            min_value = a[i];
    }
    cout << min_value << endl;
    return 0;
}