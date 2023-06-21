#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string Namafile;

	cout << "masukkan nama file : ";
	cin >> Namafile;

	// membuka file dalam mode menulis
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open(Namafile, ios::out);

	cout << ">= Menulis file, \'q\q untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_ ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		// menulis dan memasukkan nilai dari'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup file nya
	outfile.close();

	// membuka file dalam mode membaca
	ifstream infile;
	// menunjuk ke sebuah file
	infile.open(Namafile, ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}