#include <stdio.h>

int meu_strlen(char[]);
int meu_strcmp(char[], char[]);
void meu_strncpy(char[], char[], int);
void meu_strcat(char[], char[]);
void meu_strfind(char[], char[]);

int main(){
    char str1[50] = "teste";
    char str2[50] = "te";
    
}

int meu_strlen(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

int meu_strcmp(char s1[], char s2[]){
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0'){
        i++;
    }
    if(s1[i] == s2[i]){
        return 1; 
    }
    return 0;
}

void meu_strncpy(char dest[], char src[], int n){
    int i;
    for(i = 0; i < n && src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    for(; i < n; i++){
        dest[i] = '\0';
    }
}

void meu_strcat(char dest[], char src[]){
    int i = 0, j = 0;
    while(dest[i] != '\0'){
        i++;
    }
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

void meu_strfind(char texto[], char busca[]){
    int i, j, achou;
    int tam_t = 0, tam_b = 0;

    while(texto[tam_t] != '\0') tam_t++;
    while(busca[tam_b] != '\0') tam_b++;

    for(i = 0; i <= tam_t - tam_b; i++){
        achou = 1;
        for(j = 0; j < tam_b; j++){
            if(texto[i+j] != busca[j]){
                achou = 0;
                break;
            }
        }
        if(achou == 1){
            printf("Posicao: %d\n", i);
        }
    }
}