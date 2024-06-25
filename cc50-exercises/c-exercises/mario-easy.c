#include <cs50.h>
#include <stdio.h>

int main(void) {

    int height;

    do {
        height = get_int("Height: ");
    } while (height <= 0 || height >= 9);

    if (height == 1) {
        printf("#\n");
    } 
    else {
        for (int i = 0; i < height; i++) {

            for (int j = height - 1; j > i; j--) {
                printf(" ");
            }

            for (int k = 0; k <= i; k++) {
                printf("#");
            }

            printf("\n");
        }
    }
}