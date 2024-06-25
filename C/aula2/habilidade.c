#include <stdio.h>

char habilidade (){
    char aceitar = 's';
    
    while (aceitar == 's'){
        printf ("Deseja usar habilidade?\n");
        printf ("\n");
        scanf ("%s", &aceitar);
        printf ("\n");
        printf ("Voce usou habilidade!");
    }

    return aceitar;
    
}

int main ()
{
    habilidade();
    return 0;
}
