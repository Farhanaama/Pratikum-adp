#include <iostream>
#include <string>

using namespace std;
string nama, nim, shift;
 

int main() {
    cout << "Nama = Farhana"<<endl;
    cout << "Nim = 2310433005"<<endl;
    cout << " Shift  = 2"<<endl;
    string lirik = "Dan mungkin bila nanti, kita kan bertemu lagi. Satu pintaku jangan kau coba tanyakan kembali rasa yang kutinggal mati seperti hari kemarin saat semua di sini. ";

    for (int i = 0; i < lirik.length(); i++) {
        if (lirik[i] == 'a' || lirik[i] == 'e' || lirik[i] == 'i' || lirik[i] == 'o' || lirik[i] == 'u') {
            lirik[i] = 'i';
        }
    }

    cout << "Lirik lagu: " << lirik << endl;
    return 0;
}