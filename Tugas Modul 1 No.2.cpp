#include <iostream> 
using namespace std;
string nama, nim, shift;
float a, h;
int A_alas, h_segitiga, volume_limas, luasP;
int main () { 
    cout << "Nama = Farhana"<<endl;
    cout << "Nim = 2310433005"<<endl;
    cout << " Shift  = 2"<<endl;
    
    cout << "Masukkan panjang sisi limas =  ";
    cin >> a;
    cout << "Masukkan tinggi limas = ";
    cin >> h;
    
    A_alas = (a*a);
    cout<<" A_alas = "<<A_alas<<endl;
    h_segitiga = ( sqrt ((a*a - (a/ 2)(a/ 2)) (a*a - (a/ 2)(a/2))));
    cout<<" h_segitiga = "<<h_segitiga<<endl;
    volume_limas = (0.33333333*A_alas* h);
    cout<<"Volume limas adalah = "<<volume_limas<<endl;
    luasP = (A_alas + (1.5* a* h_segitiga));
    cout<<"Luas permukaan limas adalah = "<<luasP<<endl;
}
