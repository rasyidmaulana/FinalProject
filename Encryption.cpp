#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Masukan Kata:\t";
   cin >> str;

   cout << "\nPilih Opsi Berikut:\n";
   cout << "1 = Enkripsi.\n";
   cout << "2 = Deskripsi.\n";
   cin >> x;

   //Menggunakan perintah switch statements
   switch(x)
   {
      //Enkripsi
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //Kunci untuk Enkripsi adalah 2 yang di tambahkan ke nilai ASCII

         cout << "\nEncrypted string: " << str << endl;
         break;

      //Deskripsi
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //Kunci untuk Deskripsi adalah 2 yang di kurangi ke nilai ASCII

      cout << "\nDecrypted string: " << str << endl;
      break;

   }
   return 0;
}
