#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

// Define a estrutura para cadastro de cliente
struct cadastro_de_cliente
{
    char nome[40];
    char endereco[40];
    int telefone;
    int codigo;

};
void scanClean() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(void) 
{
    int numero = 1;
struct cadastro_de_cliente cadastrarCliente(){
     // Declara uma variável do tipo cadastro_de_cliente
    struct cadastro_de_cliente cliente;
    cliente.codigo = numero++;
    // Imprime o cabeçalho
    printf("\n------Cadastro de cliente------\n\n\n");

    // Obtém o nome do usuário
    printf("Nome do usuário: ");
    // Usa fgets para ler a entrada e armazenar em cliente.nome
    fgets(cliente.nome, sizeof(cliente.nome), stdin);
    // Remove o caractere de nova linha
    //remove_newline(cliente.nome);

    // Obtém o endereço do usuário
    printf("Endereço: ");
    // Usa fgets para ler a entrada e armazenar em cliente.endereco
    fgets(cliente.endereco, sizeof(cliente.endereco), stdin);
    // Remove o caractere de nova linha
    //remove_newline(cliente.endereco);

    // Obtém o telefone do usuário
    printf("Informe o seu telefone: ");
    // Usa scanf para ler a entrada e armazenar em cliente.telefone
    scanf("%d", &cliente.telefone);

    // Imprime os dados do usuário
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome ...........: %s\n", cliente.nome);
    printf("Endereço .......: %s\n", cliente.endereco);
    printf("Telefone .......: %d\n", cliente.telefone);
    printf("Código .........: %d\n", cliente.codigo);

     scanClean();
     return cliente;

}

// Função para remover o caractere de nova linha (\n) capturado por fgets
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}


    while(true){
    struct cadastro_de_cliente cliente1 = cadastrarCliente();
    }
    // Retorna 0 para indicar execução bem-sucedida
    return 0;
}
