#include <stdio.h>
#include <string.h>

int metatesi(char *s, char *t) {
    int check = 1; // assume inizialmente che le stringhe siano uguali dopo lo scambio
    char *ps = s;
    char *pt = t;
    while (*ps != '\0' && *pt != '\0') {
        if (*ps != *pt) {
            if (*ps == *(pt + 1) && *(ps + 1) == *pt) {
                char temp = *pt;
                *pt = *(pt + 1);
                *(pt + 1) = temp;
            } else {
                check= 0; // se le stringhe non sono scambiabili, impostiamo il flag a 0
                break;
            }
        }
        ps++;
        pt++;
    }
    return check;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("usa: %s <string1> <string2>\n", argv[0]);
        return 1;
    }
printf("%d\n",metatesi(argv[1],argv[2]));

 

    return 0;
}
