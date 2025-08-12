#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
using namespace std;



struct P { int x, y; };

int main() 
{
   
    int N;
    cin >> N;
    vector<P> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i].x >> a[i].y;
    }

    sort(a.begin(), a.end(), [](const P& A, const P& B)
    {
            if (A.x != B.x)
            {
                return A.x < B.x;
            }
        return A.y < B.y;
    });

    for (auto& p : a)
    {
        cout << p.x << ' ' << p.y << '\n';
    }
}