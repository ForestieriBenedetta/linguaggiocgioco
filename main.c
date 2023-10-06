#include <stdio.h>

int main() {
    char scelta;
    char nome[10];
    int punteggio = 0;
    int gioco_in_corso = 1;  // Inizialmente, il gioco è in corso

    // Presentazione gioco e scopo
    printf("Benvenuto a Hogwarts!\n");
    printf("Rispondi alle domande e guadagna punti!\n");

    while (gioco_in_corso) {
        // Menu 
        printf("\nMenu:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        // se l'utente decide di uscire 
        if (scelta == 'B' || scelta == 'b') {
            printf("Non puoi andare a Hogwarts senza sapere...\n");
            gioco_in_corso = 0;  // Termina il gioco
        }
        // se l'utente decide di entrare
        else if (scelta == 'A' || scelta == 'a') {
            
            int risposte_corrette = 0;

            // Richiedi il nome del giocatore
            printf("Inserisci il tuo nome: ");
            scanf("%s", nome);
            
            // Domanda 1
            printf("\nDomanda 1:\n");
            printf("A che casa appartiene Harry Potter?\n");
            printf("A) Tassorosso\n");
            printf("B) Serpeverde\n");
            printf("C) Grifondoro\n");
            char risposta1;
            scanf(" %c", &risposta1);
            if (risposta1 == 'C' || risposta1 == 'c') {
                printf("Risposta corretta. 10 punti a Grifondoro!\n");
                risposte_corrette++;
            } else {
                printf("Risposta errata. Non preoccuparti, imparerai presto. A Hogwarts tutti i principianti sono uguali.\n");
            }

             // Domanda 2
            printf("\nDomanda 2:\n");
            printf("Come si chiama la fenice di Albus Silente?\n");
            printf("A) Fanny\n");
            printf("B) Edvige\n");
            printf("C) Fuffi\n");
            char risposta2;
            scanf(" %c", &risposta2);
            if (risposta2 == 'A' || risposta2 == 'a') {
                printf("Risposta corretta! 10 punti a Grifondoro\n");
                risposte_corrette++;
            } else {
                printf("Risposta errata. Non preoccuparti, imparerai presto. A Hogwarts tutti i principianti sono uguali.\n");
            }

            // Domanda 3
            printf("\nDomanda 3:\n");
            printf("Come si chiama chi non è un mago?\n");
            printf("A) Gringott\n");
            printf("B) Babbano\n");
            printf("C) Serpentese\n");
            char risposta3;
            scanf(" %c", &risposta3);
            if (risposta3 == 'B' || risposta3 == 'b') {
                printf("Risposta corretta!\n");
                risposte_corrette++;
            } else {
                ("Risposta errata. Non preoccuparti, imparerai presto. A Hogwarts tutti i principianti sono uguali.\n");
            }

            // Mostra il punteggio finale
            printf("\nCiao, %s! Hai totalizzato %d punti su 30.\n", nome, risposte_corrette * 10);
        } 
    }

    return 0;
}
