#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  string nama, alamat, hobi;
  int umur;
  float tb;
  double bb;

  cout << "Hai! Masukkan biodata kamu." << endl;
  cout << "Nama : ";
  getline(cin, nama);
  
  cout << "Umur : ";
  cin >> umur;

  
  cout << "Alamat : ";
  getline(cin, alamat);

  cout << "Tinggi badan : ";
  cin >> tb;
  cin.ignore();
  
  cout << "Berat badan : ";
  cin >> bb;
  cin.ignore();
  
  cout << "Hobby : ";
  getline(cin, hobi);

  char msg[120];
  sprintf(msg, "Selamat datang %s, dengan umur %d tahun, tinggal di %s, tinggi badan %.2f cm, berat badan %.2f kg, dan hobby %s.", 
          nama.c_str(), umur, alamat.c_str(), tb, bb, hobi.c_str());

  cout << endl << endl;
  cout << msg << endl;
  cout << "Terima kasih telah mengisi biodata!" << endl;
}
