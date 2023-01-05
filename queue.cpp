#include "queue.h"
void createPlaylist_1301213321(playlistLagu& Q)
{
    head(Q) = NULL;
    tail(Q) = NULL;
}

void createElement_1301213321(infotype laguBaru, adr& pLagu)
{
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}

void isEmpty_1301213321(playlistLagu Q)
{
    if(head(Q) == NULL && tail(Q)== NULL) {
        return true;
    } else {
        return false;
    }
}

void enqueue_1301213321(playlistLagu& Q, adr pLagu)
{
    if isEmpty_1301213321(Q)) {
        head(Q) = pLagu;
        tail(Q) = pLagu;
    }else {
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}

void dequeue_1301213321(playlistLagu& Q, adr& pLagu)
{
    if(isEmpty_1301213321(Q)) {
        cout<< "Antrian Kosong!" << endl;
    } else if (head(Q)== tail(Q)){
        pLagu = head(Q);
        head(Q) = NULL;
        tail(Q) = NULL;
    } else {
        pLagu =  head(Q);
        head(Q) =  next(head(Q));
        next(pLagu) = NULL;
    }
}

void showSemuaLagu_1301213321(playlistLagu Q)
{
    adr P = head(Q);
    int i = 1;
    while(P!=NULL){
        cout<< "Lagu ke-"<< i << endl;
        cout<< "\t Artis : " << info(P).artis << endl;
        cout<< "\t Judul : " << info(P).judul << endl;
        i++;
        P = next(P);
    }
}
