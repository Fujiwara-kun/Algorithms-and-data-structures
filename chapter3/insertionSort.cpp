#include <iostream>
using namespace std;

void insertionsort(int A[], int N)
{
    int j; // ソート済みの配列から挿入する位置を探すループ変数
    int i; // 未ソートの部分列の先頭を示すループ変数
    int v; // 一時的に保存刷るための変数
    // 配列の要素の初期値を出力
    for (int k = 0; k < N; k++)
    {
        if (k > 0)
            cout << " ";
        cout << A[k];
    }
    cout << endl;
    // 挿入ソートのアルゴリズム
    //
    for (i = 1; i < N; i++)
    {
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        for (int k = 0; k < N; k++)
        {
            if (k > 0)
                cout << " ";
            cout << A[k];
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cin >> N;
    int A[100];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    insertionsort(A, N);
    return 0;
}