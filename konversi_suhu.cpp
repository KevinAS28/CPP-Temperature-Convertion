//
//
//
//ga akurat
//
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

double daftar0[] = {0, 5, 4, 9};

double yay(int awal, double suhawal, int akhir)
{
 double hasil = daftar0[akhir] * suhawal / daftar0[awal];
 return hasil;
}
double x;
void spab(double a=1)
{
 for (double b=0; b<a; b++)
 {
  cout << "\n";
 }
}

double input(string xx)
{
 cout << xx;
 double xxx;
 cin >> xxx;
 return xxx;
}

int main()
{

 string daftar1[] = {"Test", "Celcius", "Reamur", "Farenheit", "Kelvin"};
 spab(3);
 cout << "Konversi Suhu\nby Kevin Agusto";
 spab(2);
 int asal = input("Suhu awalnya jenis yang mana: \n1.Celcius\n2.Reamur\n3.Farenheit\n4.kelvin\n\npilihan mu: ");
 spab(3);
 int tujuan = input("Konversi ke: \n1.Celcius\n2.Reamur\n3.Farenheit\n4.kelvin\n\npilihan mu: ");
 if (asal==tujuan)
 {
  cout << "Lah kok sama asal dan tujuannya. yang bener nih\n";

 }

 double suhawal = input("Suhu Awal: ");
//tindakan khusus untuk kelvin
 if ((asal != 4)&&(tujuan != 4))
 {
   double hasil = yay(asal, suhawal, tujuan);
   spab(2);
   cout << "Hasil:  " << hasil << " " << daftar1[tujuan] << "\n";
 }
 else
 {
  double hasil;
  double semen = suhawal * (5/daftar0[asal]);
  cout << semen << endl;
  if (asal==4)
  {
   cout << "dari kelvin\n";
   hasil = (suhawal - 272) * (daftar0[tujuan]/daftar0[asal]);
  }
  if (tujuan==4)
  {
   cout << "kepada kelvin\n";
   hasil = semen + 272;
  }
  cout << "Hasil:  " << hasil << " " << daftar1[tujuan] << "\n";
 }
 
}

