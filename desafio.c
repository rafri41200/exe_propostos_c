#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibirArmarios(char controle)
{
  printf("\nStatus dos armários:\n");
  for (int i = 0; i < 8; i++)
  {

    if (controle & (1 << i))
    {
      printf("Armário %d : ocupado\n", i + 1);
    }
    else
    {
      printf("Armário %d : livre\n", i + 1);
    }
  }
}

int main()
{

  char controle = 0;
  srand(time(NULL));

  int posicao;
  int opcao;

  do
  {
    printf("\n   ***** MENU ***** \n");
    printf("  1 . Ocupar Armário\n");
    printf("  2 . liberar Armário\n");
    printf("  3 . Sair do sistema\n");
    printf("\n  Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

      if (controle == 255)
      {
        printf("todos os armários estão ocupados\n");
      }
      else
      {
        int armario;
        do
        {
          armario = rand() % 8;
        } while (controle & (1 << armario));

        controle |= (1 << armario);
        printf("Armário %d foi ocupado\n", armario + 1);
      }
      exibirArmarios(controle);
      break;

    case 2:

      printf("digite a posição do armário a ser liberado (1-8):");
      scanf("%d", &posicao);
      if (posicao >= 1 && posicao <= 8)
      {
        if (controle &= ~(1 << (posicao - 1)))
        {
          printf("Armário %d foi liberado \n", posicao);
        }
        else
        {
          printf("Armário %d foi liberado\n", posicao);
        }
      }
      else
      {
        printf("opção inválida\n");
      }
      exibirArmarios(controle);
      break;

    case 3:

      printf("Saindo do programa\n");
      break;

    default:
      printf("opção inválida. tente novamente\n");
    }
  } while (opcao != 3);

  return 0;
}