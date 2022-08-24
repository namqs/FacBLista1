/* Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Categoria    Faixa de idade
infantil A    0 - 4 anos
infantil B    5 - 7 anos
infantil C    8-10 anos
juvenil A     11-13 anos
juvenil B     14-17 anos
Adulto        18 anos ou mais

Algoritmo:
  1º: solicitar a idade
  2º se a idade for >= a 18, exibir Adulto
     senão, se 0<= idade  >= 4, exibir infantil A
            senão, se idade = 5 ou idade>= 7, exibir Infantil B
                   senão, se idade = 8 ou idade >=10, exibir Infantil C
                          senão, se idade = 11 ou idade>= 13, exibir Juvenil A
                                 senão, exibir Juvenil B. */

#include <stdio.h>
void main ()
{
  int idade;

      printf("Digite sua idade: ");
      scanf("%d", &idade);

     /* if (idade>=18)
      { printf("Adulto"); }

        else if (0 == idade || idade <= 4)
        { printf("infantil A"); }

            else if (idade == 5 || idade<= 7)
            { printf("Infantil B"); }

                  else if (idade == 8 || idade <=10)
                  { printf("Infantil C"); }

                          else if (idade == 11 || idade<= 13)
                          { printf("Juvenil A"); }

                                 else { printf("Juvenil B"); }
} */

     if (idade >= 18 )
      { printf("Adulto");}

        else if (idade == 0 || idade <= 4)
        { printf("Infantil A");}

          else if (idade == 5 || idade <= 7)
          { printf ("Infantil B"); }

            else if (idade == 8 || idade <= 10)
            { printf ("Infantil C"); }

              else if (idade == 11 || idade <= 13)
              { printf ("Juvenil A"); }

                else { printf ("Juvenil B"); }
}
