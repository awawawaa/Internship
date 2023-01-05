#include <iostream>
#include "queue.h"
using namespace std;

int main(){
   cout << "Nama \t : Muhammmad Aswar Taufik"<< endl;
   cout << "Kelas \t : IF 45 11"<< endl;
   cout << "NIM \t : 1301213321"<< endl;
   cout << "N \t : 12"<< endl << endl;
   int N = 12;
   int i = 1;
   playlistLagu P;
   infotype dataLagu;
   adr PLagu;
   createPlaylist_1301213321(P);
   while(i <= 12){
    cout << "Input data ke-" << i << endl;
    cout << "Artis \t : " ;
    cin >> dataLagu.artis;
    cout << "Judul \t : ";
    cin >> dataLagu.judul;
    createElement_1301213143(dataLagu, pLagu);
    enqueue_1301213321(P, pLagu);
    i++
   }
   cout << "______________PlayList Sekarang________________"<< endl;
   showSemuaLagu_1301213321(P);

   cout << "___________________Dequeue____________________"<< endl;
   adr dequeueElement;
   dequeue_1301213321(P, dequeueElement);
   cout << "Dequeue berhasil!"<< endl;
   cout << "______________PlayList Sekarang________________"<< endl;
   showSemuaLagu_1301213321(P)

   return 0;


}
