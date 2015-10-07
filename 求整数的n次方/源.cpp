#include <iostream>
using namespace std;


long long PowerN(const long long number, const unsigned& n, const long long& base)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return number;
	if (n == 2)
		return number*number;
	if (n % 2 == 0)
		return PowerN(PowerN(number, n / 2, base),2,base);
	if (n % 2 == 1)
		return PowerN(PowerN(number, (n-1) / 2, base), 2,base)*base;
}

long long PowerN(const long long number, const unsigned& n)
{
	return PowerN(number, n, number);
}
int main()
{
	for (int i = 0;i < 62;i++)
		cout << PowerN(2, i) << "\t";
	system("pause");
}