#include <iostream>
#include <cmath>

using namespace std;
string nama, nim, shift;

double fungsi_f(double x) {
    if (x > 0) {
        return 3 * pow(x, 2) + 7 * x - 2;
    } else {
        return 2 * pow(x, 2) - 5 * x - 4;
    }
}

double fungsi_g(double x) {
    return pow(fungsi_f(x), 2) - sqrt(fungsi_f(x));
}

double fungsi_h(double x) {
    return fungsi_f(x) * fungsi_g(x);
}

int main() {
    cout << "Nama = Farhana"<<endl;
    cout << "Nim = 2310433005"<<endl;
    cout << " Shift  = 2"<<endl;
    int n;
    cout << "Input banyak data n = ";
    cin >> n;
    
    double nilai_x;
    cout << "Input nilai x = ";
    cin >> nilai_x;

    cout << "\nNo\tf(x)\t\tg(x)\t\t\th(x)" << endl;
    cout << "1\t" << nilai_x << "\t" << fungsi_f(nilai_x) << "\t" << fungsi_g(nilai_x) << "\t" << fungsi_h(nilai_x) << endl;

    char lagi;
    cout << "\nInput nilai x lagi? Y/N ";
    cin >> lagi;
    if (lagi == 'Y' || lagi == 'y') {
        main();
    } else {
        cout << "Program selesai." << endl;
    }

    return 0;
}
