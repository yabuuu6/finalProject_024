#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() {return 0;}
	virtual void cekKelulusan() {
		if tugasAkhir < 75 = lulus;
		return 0;
	}
	virtual void input() {
		void input() {
			cout << "Masukan Nilai Presensi : ";
			cin >> presensi;
			cout << "Masukan Nilai Activity : ";
			cin >> activity;
			cout << "Masukan Nilai Exercise : ";
			cin >> exercise;
			cout << "Masukan Nilai Tugas Akhir : ";
			cin >> tugasAkhir;

			return 0;
}
	}
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}

};
class Pemrograman : public MataKuliah {
public:
	showNilaiAkhir();
		cout << "Selamat, Anda Lulus Mata Kuliah Pemrograman dengan Nilai Akhir : " << x.nilaiakhir;
}
void MataKuliah() {
	cout << "\nNilai Presentasi : " << nilai << endl;
	cout << "Nilai Activity : " << nilai << endl;
	cout << "Nilai Exercise : " << nilai << endl;
	cout << "Nilai Tugas Akhir :" << nilai << endl;
};


};
int main()
{ 
	MataKuliah mk;
	Pemrograman pm;
	pm.showNilaiAkhir(mk);
	mk.input();
	cout << endl;
	return 0;

};