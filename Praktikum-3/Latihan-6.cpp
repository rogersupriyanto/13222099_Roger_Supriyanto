#include <iostream>

class RekeningBank {
    private :
        double saldo;
    public :
        RekeningBank(double saldo_awal) {
            saldo = saldo_awal;
        }

        void setor(double jumlah) {
            saldo += jumlah;
        }

        void tarik(double jumlah) {
            if (jumlah > saldo) {
                std::cout << "Penarikan Gagal" << std::endl;
            } else {
                saldo -= jumlah;
            }
        }
        void cekSaldo() { // tambahan cek saldo untuk melihat saldo saat dilakukan fungsi yang lain
            std::cout << "Saldo saat ini: " << saldo << std::endl;
        }
};

int main() {
    RekeningBank rekening1(1000.0); // Testing Constructor
    rekening1.cekSaldo(); // Cek saldo awal
    rekening1.setor(500.0); // Testing setor
    rekening1.cekSaldo(); // Cek saldo setelah setor
    rekening1.tarik(200.0); // Testing tarik berhasil
    rekening1.cekSaldo(); // Cek saldo setelah tarik
    rekening1.tarik(1500.0); // Testing penarikan gagal
    rekening1.cekSaldo(); // Cek saldo setelah penarikan gagal

    return 0;
}