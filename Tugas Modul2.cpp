 #include <iostream>
using namespace std;
string nama, nim, shift;
int main() {
    cout << "Nama = Farhana"<<endl;
    cout << "Nim = 2310433005"<<endl;
    cout << " Shift  = 2"<<endl;
    
    cout << "Bus PT. ANS lintas Sumatera Tujuan" << endl;
    cout << "1. Medan: Rp 450000" << endl;
    cout << "2. Padang: Rp 300000" << endl;
    cout << "3. Jambi : Rp 215000" << endl;
    cout << "4. Bengkulu : Rp 250000" << endl;
    cout << "5. Palembang : Rp 425000" << endl;
    cout << "6. Lampung : Rp 625000" << endl;
    
    int tujuan;
    cout << "Tujuan yang dipilih: ";
    cin >> tujuan;
    
    cout << "Kelas" << endl;
    cout << "1. Ekonomi Class: Rp 10.000" << endl;
    cout << "2. Bisnis Class : Rp 20.000" << endl;
    cout << "3. First Class : Rp 30.000" << endl;
    
    int kelas, jumlahTiket;
    cout << "Kelas yang dipilih: ";
    cin >> kelas;
    cout << "Jumlah tiket: ";
    cin >> jumlahTiket;
    
    int biayaTujuan;
    if (tujuan == 1) {
        biayaTujuan = 450000;
    } else if (tujuan == 2) {
        biayaTujuan = 300000;
    } else if (tujuan == 3) {
        biayaTujuan = 215000;
    } else if (tujuan == 4) {
        biayaTujuan = 250000;
    } else if (tujuan == 5) {
        biayaTujuan = 425000;
    } else if (tujuan == 6) {
        biayaTujuan = 625000;
    } else {
        cout << "Tujuan tidak valid." << endl;
        return 0;
    }
    
    int biayaKelas;
    if (kelas == 1) {
        biayaKelas = 10000;
    } else if (kelas == 2) {
        biayaKelas = 20000;
    } else if (kelas == 3) {
        biayaKelas = 30000;
    } else {
        cout << "Kelas tidak valid." << endl;
        return 0;
    }
    
    int totalBiaya = biayaTujuan + biayaKelas * jumlahTiket;
    
    int diskon = 0;
    if (jumlahTiket >= 3 && jumlahTiket <= 5) {
        diskon = totalBiaya * 0.05;
    } else if (jumlahTiket > 5) {
        diskon = totalBiaya * 0.1;
    }
    
    int total_setelah_diskon = totalBiaya - diskon;
    cout << "Tujuan: " << tujuan << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "Jumlah tiket: " << jumlahTiket << endl;
    cout << "Total: Rp " << totalBiaya << endl;
    cout << "Diskon: Rp " << diskon << endl;
    cout << "Total setelah diskon: Rp " << total_setelah_diskon << endl;
    
    return 0;
}
