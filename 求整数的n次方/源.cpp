#include <iostream>
using namespace std;


long long PowerN(const long long& number, const unsigned& n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return number;
	long long result = PowerN(number, n >> 1);
	result *= result;
	if (( n & 0x1u) == 1u)
		result *= number;

	return result;
}
int main()
{
	for (int i = 0;i < 62;i++)
		cout << PowerN(2, i) << "\t";
	system("pause");
}