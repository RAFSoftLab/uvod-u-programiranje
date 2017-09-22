/*
    NP koji nalazi najveci broj u tekstu asdbadh123124bkasf23324abds -> 123124.
    Tekst se nalazi u jednoj liniji.
*/

#include <stdio.h>

int main() {
    char c;
    int broj = 0, max = 0;
    while ((c = getchar()) != '\n') {
        if (('0' <= c) && (c <= '9')) {
            broj = broj * 10 + (c - '0');
            if (broj > max) max = broj;
        } else {
            broj = 0;
        }
    }
    printf("%d\n", max);
    return 0;
}
