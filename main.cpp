#include <iostream>
using namespace std;

int main() {
	int n, x, a=1, b=0, fibonacci=1;
	cin >> x;
	cout << fibonacci << "\n";

	while (fibonacci <=x)
	{
		fibonacci=a+b;
		b=a;
		a=fibonacci;
		if (x>=fibonacci)
		{
			cout << fibonacci << "\n";
		}
	}

   return 0;
}
