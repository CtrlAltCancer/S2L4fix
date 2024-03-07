#include <stdio.h>

//Gioco

void print_menu();
int gioco();

int main(){
    int partite=0;
    char scelta= {'\0'};
    print_menu();
    scanf("%c", &scelta);

    if(scelta == 'B'){
        printf("Grazie per aver giocato!\n");
        return 0;
    }

    while (scelta == 'A'){
        gioco();
        print_menu();
        scanf(" %c",&scelta);
    }
    return 0;
}

void print_menu(){
    int partite;        //Questo if controlla se si ha già giocato al gioco, e da il Benvenuto o il Bentornato.
    if(partite==0){
    printf("Benvenuto!\n");

    } else {
    printf("Bentornato! Vuoi giocare ancora?\n");
    }
    partite++;
    printf("A: Inizia partita | B: Esci dal gioco\n");
    printf("Scegli tra A e B\n");
}

//Per qualche motivo che non comprendo, l'applicazione skippa sempre uno scanf, a meno che non si inserisce uno spazio. Perché?

int gioco(){
    int score=0;
    char nome[20]={'\0'}; //Prova a mettere nome indef.
    printf("Inserisci il tuo nome: \n");
    scanf(" %s", nome);

    char Ris1;
    printf("Domanda 1:\nQuanto è lungo un chilometro? \n");
    printf("A: Un minuto | B: 1000 metri | C: Mi sono dimenticato \n");
    printf("Rispondi attentamente!: \n");
    scanf(" %c", &Ris1);
    if (Ris1 == 'B'){
        score++;
    }

    char Ris2;
    printf("Domanda 2:\nChe voto mi merito? \n");
    printf("A: DIESCI | B: non lo so | C: 7 in condotta. \n");
    printf("Rispondi adesso! \n");
    scanf(" %c",&Ris2);
    if (Ris2 == 'A'){
        score++;
    }
    
    char Ris3;
    printf("Domanda 3:\nQuesto e' un corso di...\n");
    printf("A: Economia aziendale | B: Acconciatura | C: Cybersecurity \n");
    printf("Rispondi, veloce!\n");
    scanf(" %c",&Ris3);
    if (Ris3 == 'C'){
        score++;
    }
    
    char Ris4;
    printf("Domanda 4:\nCosa uso per digitare sul PC?\n");
    printf("A: Schermo | B: Acqua | C: Tastiera \n"); //Ero sovrappensiero e ho scritto mouse, modificato.
    printf("Rispondi, ma pensaci bene... \n");
    scanf(" %c",&Ris4);
    if (Ris4 == 'C'){
        score++;
    }

    printf("Punteggio totale...%d, complimenti %s!\n", score, nome);

    return 0;

}
