
#ifndef FUNCOES_H
#define FUNCOES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct carrinho{
    struct produto* produto_escolhido; //aponta pro produto escolhido
    int qtd_comprada;
    struct carrinho* next_item; //aponta pro proximo item do carrinho
}carrinho;

typedef struct client{ //124+20
    char cpf[12]; 
    char nome[50];
    char email[50];
    char data_de_nascimento[12];
    char telefone[20]; 
    struct carrinho* meu_carrinho; //aponta pro primeiro item do carrinho
    struct client* proximo_cliente; //aponta pro proximo cliente

}client;

typedef struct produto{
    char codigo[50]; 
    char nome[50];
    float preco;
    int quantidade;
    struct produto* proximo_produto; //aponta pro proximo produto

}produto;

//Gerenciamento de Clientes
void Cadastrar_Cliente(client** lista);
void Listagem_Clientes_Recursiva(client* lista);
client *Buscar_Cliente(client* lista, char*buscado);
void Buscar_Cliente_void(client* lista);
void Editar_Dados_Cliente(client** lista);
void Remover_Cliente(client** lista);

//Gerenciamento de produtos
void Cadastrar_Produto(produto** lista);
void Listagem_Produto_Recursiva(produto* lista);
produto *Buscar_Produto(produto* lista, char* buscado);
void Editar_Dados_Produtos(produto** lista);
void Remover_Produto(produto** lista, client* lista_client);
void Buscar_Produto_void(produto* lista);

//gerenciamento modo compra
void Adicionar_Produtos_No_Carrinho(client** lista_clientes, produto* lista_produtos);
void Itens_no_Carrinho(client* lista);
void Custo_Total_do_Carrinho(client* lista_de_clientes);
void Remover_do_Carrinho(client** lista_cliente, produto* lista_produtos);
void Remover_do_carrinho_produtos(client* lista_clientes,produto *removido);


//free listas
void Free_produto(produto* lista);
void Free_carrinho(carrinho *lista);
void Free_client(client *lista);


#endif



