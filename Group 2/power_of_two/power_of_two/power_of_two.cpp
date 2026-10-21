
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n);

int main()
{
    int input;

    cout << "Вход: ";
	cin >> input;

	cout << "Изход: " << (isPowerOfTwo(input) ? "true" : "false") << endl;
    
}

bool isPowerOfTwo(int n)
{
	if (n <= 0)
		return false;
	return (n & (n - 1)) == 0;
}
