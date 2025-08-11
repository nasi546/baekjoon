#include <iostream>
#include <string>
using namespace std;

void mergeSort(string& a, string& tmp, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = (l + r) / 2;

    mergeSort(a, tmp, l, m);
    mergeSort(a, tmp, m + 1, r);

    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r) 
    {
        if (a[i] >= a[j])
        {
            tmp[k++] = a[i++];
        }

        else
        {
            tmp[k++] = a[j++];
		}
    }
    while (i <= m)
    {
        tmp[k++] = a[i++];
    }
    while (j <= r) 
    {
        tmp[k++] = a[j++]; 
    }

    for (int t = l; t <= r; ++t)
    {
        a[t] = tmp[t];
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s))
    {
        return 0;
    }
    string tmp(s.size(), ' ');
    if (!s.empty())
    {
        mergeSort(s, tmp, 0, (int)s.size() - 1);
    }
        cout << s << '\n';
    
    return 0;
}
