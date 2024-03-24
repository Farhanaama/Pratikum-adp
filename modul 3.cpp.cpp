#include <iostream>
using namespace std;

void fibonacci(int n, int fib[]) {
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main (){
    int n;
    int fib[100];

    while (true) {
        cout << "Masukkan nilai n (bilangan asli antara 3 dan 199, bukan 100 sampai 109): ";
        cin >> n;
        if (n >= 3 && n <= 199 && !(n > 100 && n < 109)) {
            fibonacci(n, fib);
            cout << "Bilangan Fibonacci ke-" << n << " adalah " << fib[n-1] << endl;
            int fib_sum = 0;
            for (int i = 0; i < n; ++i) {
                fib_sum += fib[i];
            }
            cout << "Jumlah dari f_1, f_2, ..., f_" << n << " adalah " << fib_sum << endl;
            break;
        } else {
            cout << "Nilai n tidak memenuhi ketentuan. Silakan masukkan nilai n lagi." << endl;
        }
    }
    return 0;
}