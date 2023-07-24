#include <stdio.h>
void updateValueTo98(int *ptr) {
    if (ptr != NULL) {
        *ptr = 98; 
    } else {
        printf("Error: Received a NULL pointer.\n");
    }
}
int main() {
    int number = 10;
    int *ptr = &number;

    printf("Before update: %d\n", *ptr);
    updateValueTo98(ptr);
    printf("After update: %d\n", *ptr);

    return 0;
}
