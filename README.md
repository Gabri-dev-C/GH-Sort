# Algoritmo di GH-Sort

## Descrizione

Questo è un piccolo programma che mostra il funzionamento dell'algoritmo GH-Sort,
un algoritmo di ordinamento sviluppato da me durante il mio percorso di studi di informatica.
L’idea di realizzare un algoritmo di ordinamento personale mi è stata suggerita dal mio professore di informatica,
che ha contribuito con lo spunto iniziale.

## Funzionalità

Il programma contiene un menù minimale per la gestione di un vettore di interi.

1. Scelta dell'utente sul numero di elementi del vettore.
2. Caricamento del vettore in un range 0 - 20.
3. Visualizzazione del vettore in righe di 15 elementi.
4. Inizializzazione degli elementi del vettore a 0.
5. Ordinamento del vettore con algoritmo GH-Sort.

## Come usare il programma

1. Scarica o clona la repository.
2. Compila il file `main.cpp` usando un compilatore C++.
3. Esegui il programma.

## Funzionamento di GH-Sort

utilizzo tre indici:
- f (inizio) punta alla posizione dove andrà il minimo.
- j (fine) punta alla posizione dove andrà il massimo.
- i per scandire il vettore tra f e j.

Confronto v[i] con v[f] se è minore lo scambio,
altrimenti lo confronto con v[j] e se è maggiore lo scambio,
per ogni passata sistemo i valori min e max dei rimanenti,
aggiorno gli indici faccio una nuova passata.

L’elaborazione termina quando l’indice f raggiunge o supera la metà del vettore (n/2),
perché a quel punto anche j avrà raggiunto o superato la metà del vettore e tutti
gli elementi saranno ordinati.

## Output

Inserisci il numero di elementi del vettore: 10

Vettore caricato:

12 7 19 3 5 0 18 2 11 9

Dopo GH-Sort:

0 2 3 5 7 9 11 12 18 19

## Autore

Gabriele Henriet	[Gabri-dev-C](https://github.com/Gabri-dev-C)

## Licenza

Questo progetto è rilasciato sotto licenza [MIT](https://opensource.org/licenses/MIT).  
