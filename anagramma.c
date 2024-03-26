#include <stdio.h>
/*Si scriva un programma che prenda due stringhe (due parole
di lettere alfabetiche minuscole, senza spazi) dalla linea di
comando e dica se esse sono l’una l’anagramma dell’altra.
Il programma dovrà usare una funzione int anagramma
(char *s, char *t)che, prese in input due stringhe,
restituisca 1 se esse sono l’una l’anagramma dell’altra, 0
altrimenti.*/
//Nome:Said Gabriel
//Cognome:Brito Ferlisi
//Classe:A-C
#include <stdio.h>

int anagramma(char *s, char *t) {
    int count[26] = {0}; // Array per conteggiare le occorrenze delle lettere

    // Conta le occorrenze delle lettere nella prima stringa e decrementa nelle seconda
    while (*s != '\0' && *t != '\0') {
        count[*s - 'a']++;
        count[*t - 'a']--;
        s++;
        t++;
    }

    // Verifica se le stringhe hanno lunghezza diversa
    if (*s != '\0' || *t != '\0')
        return 0;

    // Verifica se tutte le occorrenze sono state bilanciate
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1; // Se tutte le occorrenze di tutte le lettere corrispondono, sono anagrammi
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Utilizzo: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    printf("%d\n", anagramma(argv[1], argv[2]));

    return 0;
}
