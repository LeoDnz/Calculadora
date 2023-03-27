#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nescolhido;
    float n1, n2;

    printf("Escolha a operação que deseja realizar de acordo com o número atribuído a elas:");

    printf ("\n 1 - Somar \n 2 - Subtrair \n 3 - Multiplicar \n 4 - Dividir \n 5 - Sair\n");
    scanf ("%c", &nescolhido);

    switch (nescolhido)
    {
    case '1':
        printf ("Digite o primeiro numero:");
        scanf ("%f", &n1);
        printf ("Digite o segundo numero:");
        scanf ("%f", &n2);

        printf ("O resultado da conta é: %.1f", n1 + n2);
        break;

          case '2':
        printf ("Digite o primeiro numero:");
        scanf ("%f", &n1);
        printf ("Digite o segundo numero:");
        scanf ("%f", &n2);

        printf ("O resultado da conta é: %.1f", n1 - n2);
        break;

                  case '3':
        printf ("Digite o primeiro numero:");
        scanf ("%f", &n1);
        printf ("Digite o segundo numero:");
        scanf ("%f", &n2);

        printf ("O resultado da conta é: %.1f", n1 * n2);
        break;

                    case '4':
        printf ("Digite o primeiro numero:");
        scanf ("%f", &n1);
        printf ("Digite o segundo numero:");
        scanf ("%f", &n2);

        printf ("O resultado da conta é: %.1f", n1 / n2);

                case '5':
        return 0;
        break;
    }

    return 0;
}
