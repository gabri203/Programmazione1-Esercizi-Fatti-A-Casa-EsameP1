#include <stdio.h>

void fusione(char *s, char *t, char *z) {
    while (*t) {
        if (*s == *t) {
            // Incrementa s e t solo se è trovata una corrispondenza
            s++;
            t++;
        } else {
            *z = *t;
            z++;
            t++;
        }
    }

    *z = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1; // Restituisce un codice di errore
    }

    char *a = argv[1];
    char *b = argv[2];
    char c[20]; // Aumentato le dimensioni dell'array per contenere la fusione delle stringhe

    fusione(a, b, c);
    printf("%s\n", c);

    return 0;
}
