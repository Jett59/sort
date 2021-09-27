#include <stdio.h>
#include <stdlib.h>

#define MAX(A, B)  ((A) < (B) ? (B) : (A))

void sort(int a [], int n) {
int iterations = 0;
int i, j;
for (i = n - 1; i > 0; i --) {
int indexOfLargest = i - 1;
int largest = -1;
for (j = i; j >= 0; j --) {
iterations++;
if (largest < a[j]) {
indexOfLargest = j;
largest = a[j];
}
}
a[indexOfLargest] = a[i];
a[i] = largest;
}
printf("%d\n", iterations);
}

int main (int argc, char** argv) {
int* a = malloc((argc - 1) * sizeof(int));
for (int i = 1; i < argc; i ++) {
a[i - 1] = atoi(argv[i]);
}
sort(a, argc - 1);
for (int i = 0; i < argc - 1; i ++) {
printf("%d ", a[i]);
}
}
