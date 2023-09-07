#pragma once
class tipeJam
{
public:
	void setWaktu(int, int, int);
	void dapatkanWaktu(int&, int&, int&) const;
	void cetakWaktu()const;
	void incrementDetik();
	void incrementMenit();
	void incrementJam();
	bool equalWaktu(const tipeJam&) const;
	tipeJam(int, int, int);
	tipeJam();

private:
	int jm;
	int mnt;
	int dtk;
};



