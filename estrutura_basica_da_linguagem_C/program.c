// Biblioteca de onde as funções são importadas:
#include <stdio.h>

int main(){

    /* Criando variável que irá armazenar o valor que irá ser escrito no
    arquivo */
    char caractere_inserido;

    // Dando valor para a variável:
    printf("Insira um valor:\nDigite aqui -> ");
    scanf(" %c", &caractere_inserido);

    // Criando ponteiro que irá apontar para o arquivo:
    FILE *pointer_file;

    // Criando arquivo:
    pointer_file = fopen("arquivo_de_exemplo.txt", "w+");

    // Escrevendo o caractere:
    fputc(caractere_inserido,pointer_file);
    
    // Reposicionando o arquivo em seu início:
    rewind(pointer_file);

    // Lendo caractere e imprimindo:
    while(feof(pointer_file) == 0){

        // Variável temporária que irá armazenar o valor que foi inserido: 
        char variavel_que_ira_armazenar_o_caractere;
        variavel_que_ira_armazenar_o_caractere = fgetc(pointer_file);

        // Printando caractere:
        if(variavel_que_ira_armazenar_o_caractere != EOF){
            printf("\nCaractere inserido -> %c", variavel_que_ira_armazenar_o_caractere);
        }
    }

    // Fechando arquivo:
    fclose(pointer_file);

    return 0;
}