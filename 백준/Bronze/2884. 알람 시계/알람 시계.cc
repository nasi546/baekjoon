#include <iostream>
using namespace std;


int main()
{
	
	int h;
	int m;
	int a = 1;
	int b = 23;
	int c = 15;
	int d = 45;

	cin >> h;
	cin >> m;

	

		if (m - d < 0 && h-a >=0)
		{
			cout << h - a << " " << c + m;
			

			
			return 0;
		}
	
		if (m - d < 0 && h - a < 0)
		{
			cout << b - h << " " << c + m;
			return 0;
		}
    
	
		cout << h << " " << m - d;



	return 0;
}
