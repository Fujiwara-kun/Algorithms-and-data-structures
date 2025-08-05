#include <iostream>
#include <vector>
using namespace std;
const int INF = 200000000;

int main()
{
    // 入力を受け取る
    int N, K;
    cin >> N >> K;

    vector<int> a(N), b(N); // 動的配列の宣言
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];

    // 線形探索
    int min_value = INF;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // 和がK未満の場合は捨てる
            if (a[i] + b[j] < K)
                continue; // スキップして次へ

            if (a[i] + b[j] < min_value)
                min_value = a[i] + b[j];
        }
    }
    cout << min_value << endl;
}