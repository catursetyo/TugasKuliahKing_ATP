#include <iostream>

using namespace std;

int main() {

  string nama;
  int umur;
  cout << "Ketikkan nama dan umur anda." << endl;
  cout << "Nama : ";
  getline(cin, nama);

  cout << "Umur : ";
  cin >> umur;
  cout << "Selamat datang sdr/i " << nama << " di bioskop Mitra.";

}

