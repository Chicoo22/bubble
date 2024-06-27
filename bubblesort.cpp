#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Quantos nomes voce quer inserir? ");
    scanf("%d", &n);
    
    char nomes[n][50];
    
    printf("Digite os nomes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }
    
    bubbleSort(nomes, n);
    
    printf("Os nomes em ordem alfabetica:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }
    
    return 0;
}

