#include <assert.h>
#include <stdio.h>

void sortDescendingOrder(int scores[], const int SIZE);
void printArray(int array[], const int SIZE, char name[]);

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {0, 60, 70, 100, 90};

    // const int SIZE = 6;
    // int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    printArray(scores, SIZE, "scores");

    sortDescendingOrder(scores, SIZE);

    return 0;
}

void sortDescendingOrder(int scores[], const int SIZE) {
    int results[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < SIZE; i++) {
        results[i] = scores[i];
        for (int j = 0; j < i; j++) {
            if (results[j] <= results[i]) {
                int small = results[j];
                int large = results[i];
                results[j] = large;
                results[i] = small;
            }
        }
    }
    printArray(results, SIZE, "results");
}

void printArray(int array[], const int SIZE, char name[]) {
    printf("%s = ", name);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}