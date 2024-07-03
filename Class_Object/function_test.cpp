// Modified program using pointers
#include <iostream>
using namespace std;

// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small)
{
	if (a > b) {

		// a is stored in the address pointed
		// by the pointer variable *add_great
		*add_great = a;
		*add_small = b;
	}
	else {
		*add_great = b;
		*add_small = a;
	}
}

// Driver code
int main()
{
	int great, small, x, y;

	//cout << "Enter two numbers: \n";
	//cin >> x >> y;
	x=5,y=10;
	// The last two arguments are passed
	// by giving addresses of memory locations
	compare(x, y, &great, &small);
	cout << "\nThe greater number is " << great << " and the smaller number is "
	<< small;

	return 0;
}

// This code is contributed by sarajadhav12052009
