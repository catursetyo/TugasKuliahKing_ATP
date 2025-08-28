#include <iostream>

using namespace std;

int main() {
  string nama, alamat, hobi;
  int umur, tb, bb;

  cout << "Hai! Masukkan biodata kamu." << endl;
  cout << "Nama : ";
  getline(cin, nama);  

  cout << "Umur : ";
  cin >> umur;
  cin.ignore();
  
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
  
  cout << "Selamat datang " << nama << ", dengan umur " << umur << " tahun, tinggal di " << alamat << ", tinggi badan " << tb << " cm, berat badan " << bb << " kg, hobby " << hobi << ". Terima kasih telah mengisi biodata!";

}

