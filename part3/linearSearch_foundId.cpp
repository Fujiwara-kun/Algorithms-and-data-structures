#include <iostream>
#include <vector> //動的配列
using namespace std;

int main()
{
    // 入力を受け取る
    int N, v; // 配列の長さ、目的の数字
    cin >> N >> v;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
        cin >> a[i];
    // 線形探索
    bool exist = false; // 初期値はfalse

    int found_id = -1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            found_id = i; // 添字i取得
            break;
        }
    }
    cout << found_id << endl;

    return 0;
}