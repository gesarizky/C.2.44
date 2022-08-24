/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main () {

  char str1[] = "sdiahd90x";
  char key[] = "1234567890";

  int indeks = strcspn(str1, key);
  
  cout<<"Angka pertama dalam str "
      <<"ditemukan pada Posisi ke-"
      <<indeks+1;
  
  return 0;
}
