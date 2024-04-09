#include <stdio.h>

int main(int argc, char const *argv[])
{
    //numero al cubo n*n*n//
    int n1,respuesta;
    printf("Escriba un numero para elevarlo al cubo");
    scanf ("%i",&n1);
    respuesta = n1 * n1 * n1;
    printf("La respuesta es %i \n",respuesta);
    return 0;
}
