#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

// Define a estrutura para cadastro de clientes
struct clienteTipo 
{
    char nome[40];
    char endereco[40];
    int telefone;
    int codigo;

};

int numero = 1;
struct clienteTipo listaClientes[30];

void scanClean() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

struct clienteTipo cadastrarCliente(){
    struct clienteTipo cliente;
    cliente.codigo = numero++;
    // Imprime o cabeçalho
    printf("\n------Cadastro de cliente------\n\n\n");

    // Obtém o nome do usuário
    printf("Nome do usuário: ");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);


    // Obtém o endereço do usuário
    printf("Endereço: ");
    fgets(cliente.endereco, sizeof(cliente.endereco), stdin);

    // Obtém o telefone do usuário
    printf("Informe o seu telefone: ");
    // Usa scanf para ler a entrada e armazenar em cliente.telefone
    scanf("%d", &cliente.telefone);


    scanClean();
    return cliente;

}

int main(void) 
{
    int posicao;


    // Criar clientes
    for(int max = 0; max < 3, max++){

        listaClientes[numero - 1] = cadastrarCliente();

    
    }

    // Acessar clientes
    printf("Digite o codigo do cliente: ");
    scanf("%d", &posicao);

    // Imprime os dados do cliente
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome ...........: %s\n", listaClientes[posicao].nome);
    printf("Endereço .......: %s\n", listaClientes[posicao].endereco);
    printf("Telefone .......: %d\n", listaClientes[posicao].telefone);
    printf("Código .........: %d\n", listaClientes[posicao].codigo);


    // Retorna 0 para indicar execução bem-sucedida
    return 0;
}
