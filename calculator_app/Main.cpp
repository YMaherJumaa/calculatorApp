#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}
void main()
{
	int x, y;
	cin >> x >> y;
	cout << sum(x,y);
}