#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;
		//throw 0.5; //melemparkan sebuah integer maka
		cout << "Persyaratan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "Default Pengecualian diexsekusi" << endl;
	}

	return 0;
} 