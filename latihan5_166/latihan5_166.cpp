#include <iostream>
using namespace std;

int main()
{

	int a[5];
	cout << "Mengisi Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data ke- " << (i + 1) << "; ";
		cin >> a[i];

	}
	cout << "Membaca Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data ke- " << (i + 1) << "; " << a[i] << endl;

	}
}
