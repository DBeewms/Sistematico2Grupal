#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, antecesor;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    antecesor = num - 1;

    printf("El antecesor de %d es %d\n", num, antecesor);

    return 0;
}
