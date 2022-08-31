/*Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu gênero e altura, utilizando as seguintes fórmulas:
 para homens: (72.7*h)-58
 para mulheres: (62.1*h)-44.7

 Algoritmo:

 1º solicitar gênero e altura
 2º se homem, usar formula e exibir resultado
 3º se mulher, usar formula e exibir resultado */

 #include <stdio.h> //essa versão ñ funciona
 void main ()
 {
  char g, F, H;
  int alt, HM1, HM2, HH1, HH2;

  printf("Digite a letra inicial do seu genero (M ou F): ");
  scanf("%c", &g);
  printf("Digite sua altura: ");
  scanf("%d", &alt);

  if (g == F)
  { HM1 = 62.1*alt;
    HM2 = HM1 -44.7;
    printf(" %d ", HM2 ); }

    else { HH1 = 72.7*alt;
           HH2 = HH1-58;
           printf("%d", HH2); }
 }

/* TESTES //essa versão funciona
 #include <stdio.h>
 void main ()
 {
  int alt, HM, HH, genero; //HM = altura das mulheres, HM = altura dos homens

  printf("Digite o numero correspondente ao seu genero (Masculino=1 ou Femnino=2): ");
  scanf("%d", &genero);
  printf("Digite sua altura: ");
  scanf("%d", &alt);

  if (genero == 2) // ERRO: entra e executa automaticamente no if, mesmo se a condição não for real!
  { HM = (62.1*alt)-44.7;
    printf(" %d (calculo das mulheres) ", HM ); }

    else { HH = (72.7*alt)-58;
           printf("%d (calculo dos homens)", HH); }

 }
*/
