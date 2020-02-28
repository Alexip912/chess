#include <stdio.h>
int main()
{
    char mas[8][8] = {
            {'B', 'N', 'R', 'K', 'Q', 'R', 'N', 'B'},
            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
            {'b', 'n', 'r', 'k', 'q', 'r', 'n', 'b'},
    };
    printf(" A B C D E F G H \n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 1)
                if (j % 2 == 1)
                    printf("\E[47m \E[30m%c", mas[i][j]);
                else
                    printf("\E[40m \E[37m%c", mas[i][j]);
            else if (j % 2 == 1)
                printf("\E[40m \E[37m%c", mas[i][j]);
            else
                printf("\E[47m \E[30m%c", mas[i][j]);
        }
        printf("\E[49m \E[37m%d\n", 8 - i);
    }
} //#include <iostream>

// int main()
//{
//  std::cout << "Hello world" << std::endl;
//}
