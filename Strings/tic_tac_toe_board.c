/*
Use a 2-D character array to store and
display a tic-tac-toe board.
*/

#include <stdio.h>

int main() {

    char board[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'X', ' ', 'O'}
    };

    int i, j;

    printf("Tic-Tac-Toe Board:\n\n");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);

            if(j < 2) {
                printf("|");
            }
        }

        printf("\n");

        if(i < 2) {
            printf("-----------\n");
        }
    }

    return 0;
}