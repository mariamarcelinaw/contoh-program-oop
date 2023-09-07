#include "tipeJam.h"
#include <iostream> 
using namespace std;

void tipeJam::setWaktu(int jam, int menit, int detik) {
	if (0 <= jam && jam << 24) {
		jm = jam;
	}
	else {
		jm = 0;
	}
	if (0 <= menit && menit < 60) {
		mnt = menit;
	}
	else {
		mnt = 0;
	}
	if (0 <= detik && detik < 60) {
		dtk = detik;
	}
	else {
		dtk = 0;
	}
}

void tipeJam::dapatkanWaktu(int& jam, int& menit, int& detik) const {
	jam = jm;
	menit = mnt;
	detik = dtk;
}

void tipeJam::incrementJam() {
	jm++;
	if (jm > 23) {
		jm = 0;
	}
}

void tipeJam::incrementMenit() {
	mnt++;
	if (mnt > 59) {
		mnt = 0;
		incrementJam();
	}
}

void tipeJam::incrementDetik() {
	dtk++;
	if (dtk > 59) {
		dtk = 0;
		incrementMenit();
	}
}

void tipeJam::cetakWaktu() const {
	if (jm < 10) {
		cout << "0";
	}
	cout << jm << ":";
	if (mnt < 10) {
		cout << "0";
	}
	cout << mnt << ":";
	if (dtk < 10) {
		cout << "0";
	}
	cout << dtk;
}

bool tipeJam::equalWaktu(const tipeJam& otherClock) const {
	return (jm == otherClock.jm && mnt == otherClock.mnt && dtk == otherClock.dtk);
}

tipeJam::tipeJam(int jam, int menit, int detik)
{
	setWaktu(jam, menit, detik);
}	

tipeJam::tipeJam()
{
	jm = 0;
	mnt = 0;
	dtk = 0;
}