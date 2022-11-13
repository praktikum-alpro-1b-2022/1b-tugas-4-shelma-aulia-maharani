#include <iostream>
using namespace std;

int main (){
    int kodesusu;
    int jumlahpembelian;
    int juml;
    int total;
    char ukuran;
    char oper;
    float B,S,K;

    cout << "================== Daftar Harga Produk Susu ==================" << endl;
    cout << endl;
    cout << "1. DANCOW" << endl;
    cout << "B/Besar    Rp. 10.000" << endl;
    cout << "S/Sedang   Rp. 4.250" << endl;
    cout << "K/Kecil    Rp. 2.100" << endl;
    cout << endl;
    cout << "2. INDOMILK" << endl;
    cout << "B/Besar    Rp. 8.500" << endl;
    cout << "S/Sedang   Rp. 4.000" << endl;
    cout << "K/Kecil    Rp. 2.025" << endl;
    cout << endl;
    cout << "3. SUSTACAL" << endl;
    cout << "B/Besar    Rp. 17.000" << endl;
    cout << "S/Sedang   Rp. 14.500" << endl;
    cout << "K/Kecil    Rp. 8.300" << endl;

    cout << endl;

    cout << "Masukan Kode Susu (1-3): ";
    cin >> kodesusu;

    cout << endl;

    if (kodesusu==1){
        cout << "   Dancow" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> juml;
            total = juml * 10000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 4250;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 2100;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodesusu==2){
        cout << "   Indomilk" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> juml;
            total = juml * 8500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 4000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 2025;
            cout << "Jumlah pembeliannya : " << total << endl;
        }
    }else if (kodesusu==3){
        cout << "   Sustacal" << endl;
        cout << "Masukkan ukuran (b/s/k): ";
        cin >> ukuran;
        if (ukuran=='b'){
            cout << "Masukkan Jumlah pembelian : ";
            cin >> juml;
            total = juml * 17000;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='s'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 14500;
            cout << "Jumlah pembeliannya : " << total << endl;
        }else if (ukuran=='k'){
            cout << "Masukkan jumlah pembelian : ";
            cin >> juml;
            total = juml * 8300;
            cout << "Jumlah pembeliannya : " << total << endl;
        }

    }

        return 0;

}
