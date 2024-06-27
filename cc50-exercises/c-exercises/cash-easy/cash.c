#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {

    float changeOwned = get_float("Change owned: ");
    int cents = round(changeOwned * 100);

    printf("%d\n", cents);
}