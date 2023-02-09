#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}
int main()
{
	int x, y;
	cout << "Nhap x va y";
	cin >> x >> y;
	cout << gcd(x, y);
	return 0;
}