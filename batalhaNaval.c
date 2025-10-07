#include <stdio.h>


int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro [10][10];

    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    
    for (int j = 0; j <= 10; j++)
    {
        printf("%c ",  linha[j]);
    }

    for(int i = 0; i <= 10; i++)
    {
        printf ("%d \n", i);
      
      
    return 0;
}
