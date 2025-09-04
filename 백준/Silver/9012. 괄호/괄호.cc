#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <stack>
#include <deque>
using namespace std;




int main()
{
	int a;
	cin >> a;
	

	for (int i = 0; i < a; i++)
	{
		int counta = 0;
		int countb = 0;

		string b;
		cin >> b;

		for (int j = 0; j < (int)b.size(); j++)
		{
			if (b[j] == '(')
			{
				counta++;
			}
			else
			{
				counta--;
			}
			if (counta < 0)
			{
				countb++;
				break;
			}
		}
		if (counta == 0 && countb == 0)
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";


	}
	return 0;
}

