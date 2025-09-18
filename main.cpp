/*
 * Programma: GH-Sort
 * Autore: Gabriele H.
 * Data: Settembre 2025
 * Scopo: Ordinare un vettore di interi con l'algoritmo GH-Sort
 */

#include <iostream>
#include <ctime>
using namespace std;

// prototipi delle funzioni
void riempi_vett(int v[], int n);
void stampa_vett(int v[], int n);
void azzera_vett(int v[], int n);
void gh_sort(int v[], int n);

const int num_max = 20;     // numero casuale massimo

int main(){
    int scelta;             // scelta-menu dell'utente
    int num_ele;            // numero degli elementi del vettore

    cout << "\tInserisci il numero di elementi del vettore: ";
    cin >> num_ele;
    int vett[num_ele];
    azzera_vett(vett, num_ele);

    srand(time(NULL));

    system("CLS");
    cout << endl;
    cout << "\tUtilizzo dell'algoritmo GH-Sort\n";
    do{
        system("CLS");
        cout << endl;
        cout << "\tRiempi il vettore con numeri casuali............................1\n";
        cout << endl;
        cout << "\tVisualizza il vettore...........................................2\n";
        cout << endl;
        cout << "\tOrdina vettore con GH-Sort......................................3\n";
        cout << endl;
        cout << "\tAzzera il vettore...............................................4\n";
        cout << endl;
        cout << "\tEsci............................................................9\n";
        cout << endl;
        cout << "\tEffettua la tua scelta: ";
        cin >> scelta;
        cout << endl;

        // flusso elaborazione
        switch (scelta){
        case 1:
            riempi_vett(vett, num_ele);
            cout << "\tVettore caricato.\n";
            cout << endl;
            cout << "\t";
            system("PAUSE");
            break;
        case 2:
            stampa_vett(vett, num_ele);
            cout << endl;
            cout << "\t";
            system("PAUSE");
            break;
        case 3:
            gh_sort(vett, num_ele);
            cout << "\tVettore ordinato.\n";
            cout << endl;
            cout << "\t";
            system("PAUSE");
            break;
        case 4:
            azzera_vett(vett, num_ele);
            cout << "\tVettore azzerato.\n";
            cout << endl;
            cout << "\t";
            system("PAUSE");
            break;
        }
    }while(scelta != 9);
}

// riempe il vettore con numeri casuali da 0 a num_max
void riempi_vett(int v[], int n){
    for(int i = 0; i < n; i++){
        v[i] = rand() % num_max;
    }
}

// visualizza il vettore a righe di 15 elementi
void stampa_vett(int v[], int n){
    cout << "\t";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
        if(((i+1) % 15) == 0) cout << "\n\t";
    }
}

// inizializza il vettore a 0;
void azzera_vett(int v[], int n){
    for(int i = 0; i < n; i++){
        v[i] = 0;
    }
}

// Ordinamento del vettore con algoritmo GH-Sort
void gh_sort(int v[], int n){
    int f = 0, j = n-1, i = f+1, temp;
    while (f <= n/2){
        while (i <= j){
            if (v[i] < v[f]){
                temp = v[i];
                v[i] = v[f];
                v[f] = temp;
            }else{
                if (v[i] > v[j]){
                    temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
            i++;
        }
        f++;
        j--;
        i = f+1;
    }
}
