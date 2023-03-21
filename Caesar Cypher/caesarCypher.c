#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void caesarCipher(char* plainText, int key){
    int i=0;
    int cypherValue;
    char cypher;

    while( plainText[i] != '\0' && strlen(plainText)-1 > i){
        cypherValue = ((int)plainText[i] - 97 + key) % 26 + 97;
        cypher = (char)(cypherValue);
        i++;
        printf("%c", cypher); 
    }

    printf("\n");
}

int main(){
    int key;
    char plainText[101];

    printf("Please enter the plain text you want to encrypt: ");
    fgets(plainText, sizeof(plainText), stdin);

    printf("Enter a key: ");
    scanf("%d", &key);

    printf("The cyphered text is: ");
    caesarCipher(plainText, key);
}