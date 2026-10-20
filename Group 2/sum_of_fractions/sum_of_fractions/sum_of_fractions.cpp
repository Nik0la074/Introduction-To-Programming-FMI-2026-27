
// Задача 10: Сума на дроби
#include <iostream>
int gcd(int x, int y)
{
	while (y != 0)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}
using namespace std;
int main()
{
	int a, b, c, d;
	char ch;

	cin >> a >> ch >> b;
	cin >> c >> ch >> d;

	int resultP;
	int resultQ;
	
	if (b != d)
	{
		resultP = a * d + b * c;
		resultQ = b * d;
	}
	else
	{
		resultP = a + c;
		resultQ = b;
	}
	
	//cout << resultP << "/" << resultQ << endl;
	//cout << gcd(resultP, resultQ) << endl;
	int gcdValue = gcd(resultP, resultQ);
	if (gcdValue != 1) 
	{
		
		resultP /= gcdValue;
		resultQ /= gcdValue;
	}
	
	if (resultQ < 0)
	{
		resultP *= -1, resultQ *= -1;
	}
		

	if (resultQ == 1)
	{
		cout << resultP << endl;
	}
	else {
		// P/Q
		cout << resultP << "/" << resultQ << endl;
	}
}

