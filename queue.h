#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define info(P) ((P)->info)
#define next(P) ((P)->next)
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#include <iostream>
using namespace std;
struct infotype{
    string artis, judul;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr head, tail;
};

void createPlaylist_1301213321(playlistLagu &Q);
void createElement_1301213321(infotype laguBaru, adr &pLagu);
void isEmpty_1301213321(playlistLagu Q);
void enqueue_1301213321(playlistLagu &Q, adr pLagu);
void showSemuaLagu_1301213321(playlistLagu Q);
void dequeue_1301213321(playlistLagu &Q, adr &pLagu);


#endif // QUEUE_H_INCLUDED
