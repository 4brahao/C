#include <stdio.h>
#include <stdbool.h>

int bombeiros (){
    bool mangueira = true;
    while (mangueira){
        
        printf ("Aviso o SENAI esta pegando fogo!!\n");
        mangueira = false;
    }
    return mangueira;
}
int main ()
{
    bombeiros ();
    return 0;
}
