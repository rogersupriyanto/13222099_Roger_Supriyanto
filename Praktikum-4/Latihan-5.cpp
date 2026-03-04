#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	// 1. Inisialisasi Struktur Data
	vector<double> sensor;

	// 2. Pengisian Data Awal
	sensor.push_back(100.5);
	sensor.push_back(200.0);
	sensor.push_back(150.5);        

	// 3. Proses Kalibrasi 
	for (size_t i = 0; i < sensor.size(); ++i) {
		sensor[i] *= 1.1;
	}

	// 4. Penyimpanan ke File Eksternal
	ofstream file_out("hasil_kalibrasi.txt");
	if (!file_out.is_open()) {
		cerr << "Gagal membuka file hasil_kalibrasi.txt" << endl;
		return 1;
	}

	// 5. Menulis Hasil ke File
	for (size_t i = 0; i < sensor.size(); ++i) {
		file_out << sensor[i] << endl;
	}
	file_out.close();
	cout << "Proses kalibrasi selesai. Hasil disimpan di hasil_kalibrasi.txt" << endl;
	return 0;
}
