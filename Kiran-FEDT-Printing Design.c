#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "FORMULAQSOLUTIONS";
    int n, a = 0;
    int length=strlen(str);

    printf("INPUT: Enter the number of lines for design: ");
    scanf("%d", &n);
    int m=(n/2)+1;

    printf("OUTPUT:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m - i - 1; j++)
            printf(" "); 
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c", str[(i+k)%length]);
            if (str[a] == '\0')
                a = 0;
        }
        printf("\n"); 
    }

    for (int i = m - 2, c = m-2; i >= 0; i--, c++) {
        for (int j = 0; j < m - i - 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c", str[(c+k+2)%length]);
            if (str[a] == '\0')
                a = 0;
        }

        printf("\n"); 
    }

    return 0;
}