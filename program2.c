#include <stdio.h>

int main() {
    int arr[8] = {6,7,1,3,29};
    int diff = 2;
    int count = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (arr[j] == arr[i] + diff || arr[j] == arr[i] - diff) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }

    printf("Total %d pairs\n", count);

    return 0;
}
