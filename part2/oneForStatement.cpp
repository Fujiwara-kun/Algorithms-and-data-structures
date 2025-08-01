#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    // i=0による初期化：1回
    // i<Nの判定：N+1回
    //++i：N回
    //++count：N回
    // T(N)=3N+2=O(N)：よって時間計算量はO(N)
    for (int i = 0; i < N; i++)
    {
        ++count;
    }
}
