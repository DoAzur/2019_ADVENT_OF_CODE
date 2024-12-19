#include <stdio.h>

int main(int argc, char *argv[])
{
    int ans = 0;
    int element = 0;
    int result = 0;
    FILE *input = NULL;
    if (argc != 2) {
        printf("error\n");
        return -1;
    }
    input = fopen(argv[1], "r");
    if (input == NULL) {
        printf("error\n");
        return -1;
    }
    for (int i = 1; (result = fscanf(input, "%d", &element)) == 1; i++) {
        while ((element / 3) - 2 > 0) {
            element = (element / 3) - 2;
            ans += element;
        }
    }
    if (result != EOF) {
        printf("error\n");
        return -1;
    }
    printf("%d\n", ans);
    return 0;
}