#include<stdio.h>

int main()
{
    int tablaDatos[3][2] = { 
    {1, 2}, 
    {4, 3}, 
    {10, 20}};
    printf("tablaDatos[][] = {{1, 2}, {4, 3}, {10, 20}}\n\n");
    printf("Direccion de tablaDatos: %X\n", tablaDatos);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("tablaDatos[%d][%d]: %d", i, j, tablaDatos[i][j]);
            printf("\tdir: %X\n", tablaDatos);
        }   
    }
    
    return 0;
}