#include<stdio.h>

int main()
{
    char cadena[11] = "";
    int n, vocales;
    n = vocales = 0;
    printf("Escribe una cadena de no mas de 10 caracteres\n");
    scanf("%s", cadena);
    while (cadena[n]!= '\0' && n<10)
    {
        printf("cadena:[%d]: %c\n", n, cadena[n]);
        if(cadena[n] == 'a' || cadena[n] == 'e')
            vocales++;
        else if(cadena[n] == 'i' || cadena[n] == 'o')
            vocales++;
        else if(cadena[n] == 'u')
            vocales++;
        n++;
    }
    printf("Vocales: %d\n", vocales);

    return 0;
}