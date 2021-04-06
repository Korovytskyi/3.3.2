#include "Vector3D.h"
#include "Vector.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

	Vector3D A(1, 1, 1);
	cout << "A  " << endl; cin >> A;
	cout << "A = " << A;
	cout << ++A;
	cout << --A;
	A++;
	cout << A;
	A--;
	cout << A;
	A.Distance();
	A.scalar();
	A.isEqual();
	A.isEqual2();

	return 0;
}
