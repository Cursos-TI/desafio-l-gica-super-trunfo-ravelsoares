#include <stdio.h>

int main()
{
    char estado_1;
    char codigo_carta_1[4];
    char cidade_1[50];
    unsigned long int populacao_1;
    float area_cidade_1;
    float pib_1;
    int quantidade_pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_per_capita_1;

    char estado_2;
    char codigo_carta_2[4];
    char cidade_2[50];
    unsigned long int populacao_2;
    float area_cidade_2;
    float pib_2;
    int quantidade_pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_per_capita_2;

    printf("=========================================================\n");
    printf("===================== SUPER  TRUNFO =====================\n");
    printf("=========================================================\n\n");

    printf("Informe os dados da carta 1: \n");

    printf("Informe o Estado: ");
    scanf(" %c", &estado_1);

    printf("Informe o código da carta: ");
    scanf("%s", codigo_carta_1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade_1);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao_1);

    printf("Informe a área em km² da cidade (em km²): ");
    scanf("%f", &area_cidade_1);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &quantidade_pontos_turisticos_1);

    densidade_populacional_1 = (float)populacao_1 / area_cidade_1;
    pib_per_capita_1 = (float)(pib_1 * 1000000000) / populacao_1;

    printf("=========================================================\n");
    printf("Informe os dados da carta 2\n");

    printf("Informe o Estado: ");
    scanf(" %c", &estado_2);

    printf("Informe o código da carta: ");
    scanf("%s", codigo_carta_2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade_2);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao_2);

    printf("Informe a área em km² da cidade (em km²): ");
    scanf("%f", &area_cidade_2);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &quantidade_pontos_turisticos_2);

    densidade_populacional_2 = (float)populacao_2 / area_cidade_2;
    pib_per_capita_2 = (float)(pib_2 * 1000000000) / populacao_2;

    float super_poder_1, super_poder_2;
    super_poder_1 = (float)populacao_1 + area_cidade_1 + pib_1 + quantidade_pontos_turisticos_1 + pib_per_capita_1 + (1 / densidade_populacional_1);
    super_poder_2 = (float)populacao_2 + area_cidade_2 + pib_2 + quantidade_pontos_turisticos_2 + pib_per_capita_2 + (1 / densidade_populacional_2);

    int resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_populacional, resultado_pib_per_capita, resultado_super_poder;
    resultado_populacao = populacao_1 > populacao_2;
    resultado_area = area_cidade_1 > area_cidade_2;
    resultado_pib = pib_1 > pib_2;
    resultado_pontos_turisticos = quantidade_pontos_turisticos_1 > quantidade_pontos_turisticos_2;
    resultado_densidade_populacional = densidade_populacional_2 < densidade_populacional_1;
    resultado_pib_per_capita = pib_per_capita_1 > pib_per_capita_2;
    resultado_super_poder = super_poder_1 > super_poder_2;

    int escolha;

    printf("\n=========================================================\n");
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - Nome (Apenas pra exibir informações)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\n=========================================================\n");
        printf("Carta 1:\n");

        printf("Estado: %c\n", estado_1);
        printf("Código: %s\n", codigo_carta_1);
        printf("Nome da Cidade: %s\n", cidade_1);
        printf("População: %d\n", populacao_1);
        printf("Área: %.2f km²\n", area_cidade_1);
        printf("PIB: %.2f bilhões de reais\n", pib_1);
        printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos_1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
        printf("PIB per Capita: %.2f reais\n\n", pib_per_capita_1);

        printf("Carta 2:\n");
        printf("Estado: %c\n", estado_2);
        printf("Código: %s\n", codigo_carta_2);
        printf("Nome da Cidade: %s\n", cidade_2);
        printf("População: %d\n", populacao_2);
        printf("Área: %.2f km²\n", area_cidade_2);
        printf("PIB: %.2f bilhões de reais\n", pib_2);
        printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos_2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
        break;
    case 2:
        printf("\n=========================================================\n");
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n", cidade_1, populacao_1);
        printf("Carta 2 - %s: %d\n", cidade_2, populacao_2);
        if (populacao_1 > populacao_2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", cidade_1);
        }
        else
        {

            if (populacao_1 == populacao_2)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!", cidade_2);
            }
        }
        break;
    case 3:
        printf("\n=========================================================\n");
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f\n", cidade_1, area_cidade_1);
        printf("Carta 2 - %s: %.2f\n", cidade_2, area_cidade_2);
        if (area_cidade_1 > area_cidade_2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", cidade_1);
        }
        else
        {

            if (area_cidade_1 == area_cidade_2)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!", cidade_2);
            }
        }
        break;
    case 4:
        printf("\n=========================================================\n");
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f\n", cidade_1, pib_1);
        printf("Carta 2 - %s: %.2f\n", cidade_2, pib_2);
        if (pib_1 > pib_2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", cidade_1);
        }
        else
        {

            if (pib_1 == pib_2)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!", cidade_2);
            }
        }
        break;

    case 5:
        printf("\n=========================================================\n");
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d\n", cidade_1, quantidade_pontos_turisticos_1);
        printf("Carta 2 - %s: %d\n", cidade_2, quantidade_pontos_turisticos_2);
        if (quantidade_pontos_turisticos_1 > quantidade_pontos_turisticos_2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", cidade_1);
        }
        else
        {

            if (quantidade_pontos_turisticos_1 == quantidade_pontos_turisticos_2)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!", cidade_2);
            }
        }
        break;
    case 6:
        printf("\n=========================================================\n");
        printf("Comparação de cartas (Atributo: Densidade demográfica):\n");
        printf("Carta 1 - %s: %.2f\n", cidade_1, densidade_populacional_1);
        printf("Carta 2 - %s: %.2f\n", cidade_2, densidade_populacional_2);
        if (densidade_populacional_1 < densidade_populacional_2)
        {
            printf("Resultado: Carta 1 (%s) venceu!", cidade_1);
        }
        else
        {

            if (densidade_populacional_1 == densidade_populacional_2)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("Resultado: Carta 2 (%s) venceu!", cidade_2);
            }
        }
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}