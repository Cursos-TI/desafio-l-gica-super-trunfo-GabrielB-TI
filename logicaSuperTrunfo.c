#include <stdio.h>

int main() {

    char Nome_cidade1[20];
    char Estado_cidade1[20];
    int Codigo_Cidade1;
    float Populacao1;
    float PIB1;
    float Area1;
    int ponto_turisticos1;

    char Nome_cidade2[20];
    char Estado_cidade2[20];
    int Codigo_Cidade2;
    float Populacao2;
    float PIB2;
    float Area2;
    int ponto_turisticos2;


    printf("Digite o Nome da primeira Cidade:");
    scanf("%s", &Nome_cidade1);

    printf("Estado da Cidade: ");
    scanf("%s", &Estado_cidade1);

    printf("Digite o Codigo da Cidade: ");
    scanf("%d", &Codigo_Cidade1);

    printf("Qual o tamanho da populacao da sua cidade?: ");
    scanf("%f", &Populacao1);

    printf("Digite a Area total da Cidade: ");
    scanf("%f", &Area1);

    printf("PIB da sua cidade: ");
    scanf("%f", &PIB1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &ponto_turisticos1);
    
 //================================================//   
    printf("========Cidade Registrada========== \n");
 //================================================//

    printf("Digite o Nome da Segunda Cidade: ");
    scanf("%s", &Nome_cidade2);

    printf("Estado da Cidade: ");
    scanf("%s", &Estado_cidade2);

    printf("Digite o Codigo da Cidade: ");
    scanf("%d", &Codigo_Cidade2);

    printf("Qual o tamanho da populacao da sua cidade?: ");
    scanf("%f", &Populacao2);

    printf("Digite a Area total da Cidade: ");
    scanf("%f", &Area2);

    printf("PIB da sua cidade: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &ponto_turisticos2);

    if (Populacao1 > Populacao2){
        printf("A Cidade 1 Ganhou com a Populaçao Maior!");
    }else{
        printf("Cidade 2 Ganhou com a populaçao Maior!");
    }

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
