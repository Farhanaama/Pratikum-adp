#include <iostream> 
using namespace std;
string nama, nim, shift;
float n1, n2, n3, n4, n5, n6, n7, n8, sks, ip, ipk, m, s1, s2, s3, s4, s5, s6, s7, s8, total_sks;
int main () {
    cout << "Farhana"<<endl;
    cout << "2310433005"<<endl;
    cout << " Shift  = 2"<<endl;
    
    cout << "Masukkan jumlah mata kuliah semester 1 =  ";
    cin >> m;
    cout <<endl;
    cout << "Mata kuliah 1, Nilai = "; 
    cin >> n1;
    cout << "Mata kuliah 1 Sks = "; 
    cin >> s1;
    cout << "Mata kuliah 2 Nilai = "; 
    cin >> n2;
    cout << "Mata kuliah 2 Sks = "; 
    cin >> s2;
    cout << "Mata kuliah 3 Nilai = "; 
    cin >> n3;
    cout << "Mata kuliah 3 Sks = "; 
    cin >> s3;
    cout << "Mata kuliah 4 Nilai = "; 
    cin >> n4;
    cout << "Mata kuliah 4 Sks = "; 
    cin >> s4;
    cout << "Mata kuliah 5 Nilai = "; 
    cin >> n5;
    cout << "Mata kuliah 5 Sks = "; 
    cin >> s5;
    cout << "Mata kuliah 6 Nilai = "; 
    cin >> n6;
    cout << "Mata kuliah 6 Sks = "; 
    cin >> s6;
    cout << "Mata kuliah 7 Nilai = "; 
    cin >> n7;
    cout << "Mata kuliah 7 Sks = "; 
    cin >> s7;
    cout << "Mata kuliah 8 Nilai = "; 
    cin >> n8;
    cout << "Mata kuliah 8 Sks= ";
    cin>>s8;
    cout << "Data Nilai MataKuliah Semester 1"<<endl;
    
    ip = ( n1+n2+n3+n4+n5+n6+n7+n8)/8;
    cout<<" IP semester 1 = "<<ip<<endl;
    
    total_sks = (s1+ s2+ s3+s4+s5+s6+s7+s8);
    cout<<"total sks = "<<total_sks<<endl;

    

    
    
}