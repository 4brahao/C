#include <stdio.h>

int recuperar (){
int cemig;
    
    while (cemig <=100){
        
        printf ("Recuperando energia...(%d%%)\n", cemig);
        printf ("\n");
       cemig +=10;
    }
    
    printf ("Energia recuperada.");
    return cemig;
}
int main ()
{
    recuperar();
    return 0;
}
