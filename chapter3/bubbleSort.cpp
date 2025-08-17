#include <iostream>
#include <utility>
using namespace std;
int bubblesort(int A[], int N)
{
    int sw = 0;
    bool flag = 1;
    // バブルソートのアルゴリズム部分
    for (int i = 0; flag; i++)
    {
        flag = 0;
        for (int j = N - 1; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                swap(A[j], A[j - 1]);
                flag = 1;
                sw++;
            }
        }
    }
    return sw;
    // 終わり
}
int main()
{
    int N, A[100], i, sw;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> A[i];

    sw = bubblesort(A, N);

    for (i = 0; i < N; i++)
    {
        if (i)
            cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;
    return 0;
}