#include <cs50.h>
#include <stdio.h>

void printPyramid(int height);

int main(void) { // prototype

    int height;

    do {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    if (height == 1) {
        printf("#  #\n");
    }
    else {
        printPyramid(height);
    }
}

void printPyramid(int height) { // function that holds the role of build the pyramid

    for (int i = 0; i < height; i++) {

        for (int j = height - 1; j > i; j--) {
            printf(" ");
        }

        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        printf("  ");

        for (int l = 0; l <= i; l++) {
            printf("#");
        }

        printf("\n"); //! cat's jump (that makes more sense in portuguese)
    }
}