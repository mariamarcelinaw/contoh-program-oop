#include <iostream>
#include "tipeJam.h"

using namespace std;

int main()
{
	tipeJam jamSaya;
	tipeJam jamAnda;

	int jam;
	int menit;
	int detik;

	jamSaya.setWaktu(5, 4, 30);

	cout << "Misalnya jamSaya adalah: ";
	jamSaya.cetakWaktu();
	cout << endl;

	cout << "Misalnya jamAnda adalah: ";
	jamAnda.cetakWaktu();
	cout << endl;

	jamAnda.setWaktu(5, 45, 16);

	cout << "Setelah waktu di set melalui program, jamAnda menjadi: ";
	jamAnda.cetakWaktu();
	cout << endl;

	if (jamSaya.equalWaktu(jamAnda)) {
		cout << "Jam saya dan jam anda sama." << endl;
	}
	else {
		cout << "Jam saya dan jam anda tidak sama." << endl;
	}

	cout << "Coba Masukkan Jam, menit, dan detik: " << endl;
	cin >> jam >> menit >> detik;
	cout << endl;

	jamSaya.setWaktu(jam, menit, detik);

	cout << "jamSaya yang baru: ";
	jamSaya.cetakWaktu();
	cout << endl;

	jamSaya.incrementDetik();

	cout << "Jika jamSaya ditambah dengan satu detik, maka jamSaya: ";
	jamSaya.cetakWaktu();
	cout << endl;

	jamSaya.dapatkanWaktu(jam, menit, detik);

	cout << "Jam = " << jam << ", Menit = " << menit << ", Detik = " << detik << endl;
}
