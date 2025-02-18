#include <stdio.h>

int main() {

    char Nome_cidade[20];
    char Estado_cidade[20];
    int Codigo_Cidade;
    float Populacao;
    float PIB;
    float Area;
    int ponto_turisticos;


    printf("Digite o Nome da sua Cidade: ");
    scanf("%c", &Nome_cidade);

    printf("Qual o Estado da sua Cidade?: ");
    scanf("%c", &Estado_cidade);

    printf("Digite o Codigo da sua Cidade: ");
    scanf("%d", &Codigo_Cidade);

    printf("Qual o tamanho da populacao da sua cidade?: ");
    scanf("%f", &Populacao);

    printf("Digite a Area total da sua cidade: ");
    scanf("%f", &Area);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turisticos?: ");
    scanf("%d", &ponto_turisticos);
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
