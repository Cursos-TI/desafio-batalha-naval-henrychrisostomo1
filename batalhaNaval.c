#include <stdio.h>


int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [10][10];
    
    
    for(int i = 0; i < 10; i++){
      for (int j = 0; j < 10; j++){
        tabuleiro[i][j] = 0;
    
      }
    }

    for (int i = 0; i < 1; i++) {
        tabuleiro[1][3 + i] = 3;
      for (int i = 0; i < 3; i++) {
           tabuleiro[2][2 + i] = 3;
        for (int i = 0; i < 1; i++) {
           tabuleiro[3][3 + i] = 3;
        }
      }
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = 3;
    }

    printf("--- TABULEIRO BATALHA NAVAL ---\n\n");
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("2%d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
        
    return 0;
}
