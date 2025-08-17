#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
using namespace std;


int string_count(const string& s)
{
	return count_if(s.begin(), s.end(), [](unsigned char c) {return isalpha(c); });
}

int main()
{	int a;
	cin >> a;

	vector<string> s;
	s.reserve(a); 
	string w;
	for (int i = 0; i < a; i++)
	{
		cin >> w;
		s.push_back(w);
	}

	sort(s.begin(), s.end(), [](const string& A, const string& B)
		{

			int ca = string_count(A), cb = string_count(B);
			if (ca != cb)
			{
				return ca < cb;
			}
			string a = A, b = B;
			transform(a.begin(), a.end(), a.begin(), [](unsigned char c) {return tolower(c); });
			transform(b.begin(), b.end(), b.begin(), [](unsigned char c) {return tolower(c); });
			if (a != b)
			{
				return a < b;
			}
			return A < B;
		});
	s.erase(unique(s.begin(), s.end()), s.end());
	for(const auto& x:s)
	{
		cout << x << '\n';
	}
	return 0;
}
