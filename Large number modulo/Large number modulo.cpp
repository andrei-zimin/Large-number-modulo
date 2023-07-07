#include <iostream>
using namespace std;
int modebasep(int base, int degree, int mod)
{
	if (degree == 0) return 1;
	int z = modebasep(base, degree / 2, mod);

	if (degree % 2 == 0)
		return (z * z) % mod;
	else
		return (base * z * z) % mod;
}

int main()
{
	while (1)
	{
		int base, degree, mod;

		cout << "base= "; cin >> base;
		cout << "degree= "; cin >> degree;
		cout << "mod= "; cin >> mod;

		cout << modebasep(base, degree, mod);

		cout << "\n\n\n";

	}
	return 0;
}