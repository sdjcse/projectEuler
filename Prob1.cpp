#include <iostream>

using namespace std;

int main()
{
	int sum=0;
	int i=999/3;
	int j=999/5;
	int z=999/15;

	sum += (3*(i*(i+1))/2) + (5*(j*(j+1))/2) - (15*(z*(z+1))/2);
	cout << "Sum: " << sum << "\n";
	return 0;
}