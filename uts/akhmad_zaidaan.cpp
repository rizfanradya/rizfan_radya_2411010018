#include <iostream>
using namespace std;

int main() {
	//mengunakan for loop untuk menampilkan bilangan genap
	for (int i = 2; i <= 30; i += 2) {
		//mengecek apakah bilangan tersebut adalah 10 atau 20
		if (i == 10 || i == 20) {
			continue; // lewati 10 dan 20
		}
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

