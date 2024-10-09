#include<stdio.h>

int main()
{
    int arrEnteros[6];
    int contadorPrimos = 0, numero = 1;
    int divisiones, modulo;

    while (contadorPrimos < 6)
    {
        divisiones = 0;
        for(int i=1; i<= numero; i++)
        {
            modulo = numero % i;
            printf("numero= %d ", numero);
            printf("mod %d: %d\n", i, modulo);
            if(modulo == 0)
                divisiones++;
        }
        printf("divisiones: %d\n", divisiones);
        if(divisiones==2)
        {
            printf("%d es primo\n", numero);
            arrEnteros[contadorPrimos] = numero;
            contadorPrimos++;
        }
            
        printf("\n");
        numero++;
    }
    
    printf("\n\narrEnteros[]= {%d", arrEnteros[0]);
    for (int i = 1; i < 6; i++)
    {
        printf(", %d", arrEnteros[i]);
    }
    printf("}\n\n");

    return 0;
}