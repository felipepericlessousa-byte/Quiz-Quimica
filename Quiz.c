#include <stdio.h>

int main(void) {
  int menu, menu2;
  printf("Bom dia, Químico!!\n");
  printf("Topa participar de um quiz de química ?\n");
  printf("Se sim escolha 'Iniciar quiz' no menu incial\n");

  do {
    printf("\x1b[1m"); 
    printf("\nMenu Inicial\n");
    printf("\x1b[0m"); 
    printf("1 - Iniciar Quiz\n");
    printf("2 - Como jogar\n");
    printf("3 - Sair\n");
    scanf("%d", &menu);
    
    switch (menu) {
      case 1:
        printf("\x1b[1m"); 
        printf("\nVAMOS PARA O QUIZ!\n");
        printf("\x1b[0m");
        int pontuacao = 0; 
        int resp1, resp2, resp3, resp4, resp5;

        printf("\nA quem é atribuída a Lei da Conservação de Massas?\n");
        printf("1) Isaac Newton\n");
        printf("2) John Dalton\n");
        printf("3) Antoine Lavoisier\n");
        scanf("%d", &resp1);
        if (resp1 == 3) {
          pontuacao = pontuacao+2;
        }

        printf("\nQuantos gramas de ácido clorídrico são necessários para preparar 2,5L de solução aquosa do ácido com concentração de 12 g/L?\n");
        printf("1) 30g\n");
        printf("2) 40g\n");
        printf("3) 50g\n");
        scanf("%d", &resp2);
        if (resp2 == 1) {
          pontuacao = pontuacao+2;
        }

        printf("\nSobre reações endotérmicas e exotérmicas, assinale a alternativa correta:\n");
        printf("1) Reações exotérmicas absorvem energia do ambiente\n");
        printf("2) Reações endotérmicas liberam energia para o ambiente\n");
        printf("3) Reações exotérmicas liberam energia para o ambiente\n");
        scanf("%d", &resp3);
        if (resp3 == 3) {
          pontuacao = pontuacao+2;
        }

        printf("\nQual a distribuição eletrônica correta dos elétrons em um átomo de mercúrio (Hg), considerando que seu número atômico é 80?\n");
        printf("1) 1s2, 2s2, 2p6, 3s2, 3p6, 4s2, 3d10, 4p6, 5s2, 4p6, 5s2, 4d10, 5p6, 6s2, 4f14, 5d10\n");
        printf("2) 1s2, 2s2, 2p6, 3s2, 3p6, 4s2, 3d10, 4p6, 5s2, 4d10, 5p6, 6s2, 4f14, 5d10\n");
        printf("3) 1s2, 2s2, 2p6, 3s2, 3p6, 4s2, 3d10, 4p6, 5s2, 4d10, 5p6, 6s2, 4f14, 5d8\n");
        scanf("%d", &resp4);
        if (resp4 == 2) {
          pontuacao = pontuacao+2;
        }

        printf("\nConsiderando o coeficiente de solubilidade de sal na água como 36 g de sal a cada 100 g de água, assinale a alternativa INCORRETA:\n");
        printf("1) É possível dissolver completamente 300 g de sal em 1 Kg de água.\n");
        printf("2) Uma solução saturada seria formada com 270 g de sal em 750 g de água.\n");
        printf("3) É possível dissolver completamente 100 g de sal em 250 g de água.\n");
        scanf("%d", &resp5);
        if (resp5 == 3) {
          pontuacao = pontuacao+2;
        }
        
        printf("\nSua pontuação foi: %d\n", pontuacao);
        if (pontuacao >=4){
          printf("Precisa estudar mais!\n");
        } else if (pontuacao >=9) {
          printf("Muito bem\n");
        } else {
          printf("Excelente, parabéns!\n");
        }

        printf("\nCaso queira jogar novamente, digite '4' para voltar ao menu inical\n");
        scanf("%d", &menu2);
      break;

      case 2:
        printf("\x1b[1m"); 
        printf("\nVamos descobrir como jogar?\n");
        printf("\x1b[0m"); 
        printf("O quiz possui cinco perguntas, cada uma com 3 opções.\n");
        printf("Cada opção possui um número atribuído, e o jogador deve selecionar o número da opção correta.\n");
        printf("Cada acerto dará ao jogador 2 pontos.\n");

        printf("\nCaso queira jogar, digite '4' para voltar ao menu inical\n");
        scanf("%d", &menu2);
      break;

      case 3:
        printf("\nAté mais!\n");
        printf("Lembre-se: A química é pura felicidade!!\n");
      break;
      
      default:
      printf("Opção inválida!\n");
      break;
    }
      
  } while (menu2 == 4);
  
  return 0;
}