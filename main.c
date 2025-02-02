#include <stdio.h>

int main(void) {
    char squadre []={'N','I','A','L','J'};
    char serie []={'A','A','A','A','B'};
    int punti[]={53,48,45,38,10};
    int i;
    int dim=5;
    printf("ELENCO SQUADRE SERIE A");
    printf("\n");
    printf("SQUADRA  PUNTI");
    printf("\n");
    for(i=0;i<dim;i++) {
        if(serie[i]=='A') {
            printf("%c        %d\n",squadre[i],punti[i]);
    }
    }
    return 0;
}
