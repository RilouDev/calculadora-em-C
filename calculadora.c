#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int forma;
    char continuar = 's';

    while (continuar == 's') {
        printf("Calculadora de formas geométricas\n");
        printf("\n1 - Círculo\n2 - Triângulo\n3 - Retângulo\n4 - Quadrado\n5 - Trapézio\n6 - Losango\n");
        printf("Escolha a forma geométrica (1-6): ");

        if (scanf("%d", &forma) != 1) {
            printf("Entrada inválida.\n");
            while (getchar() != '\n');
            continue;
        }

        double base, altura, area, raio, lado, base_maior, base_menor, diagonal_maior, diagonal_menor;

        switch (forma) {
            case 1:
                printf("Digite o raio do círculo: ");
                if (scanf("%lf", &raio) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                area = 3.14 * raio * raio;
                printf("A área do círculo é: %.2f\n", area);
                break;

            case 2:
                printf("Digite a base do triângulo: ");
                if (scanf("%lf", &base) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                printf("Digite a altura do triângulo: ");
                if (scanf("%lf", &altura) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                area = (base * altura) / 2.0;
                printf("A área do triângulo é: %.2f\n", area);
                break;

            case 3:
                printf("Digite a base do retângulo: ");
                if (scanf("%lf", &base) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                printf("Digite a altura do retângulo: ");
                if (scanf("%lf", &altura) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                area = base * altura;
                printf("A área do retângulo é: %.2f\n", area);
                break;

            case 4:
                printf("Digite o lado do quadrado: ");
                if (scanf("%lf", &lado) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                area = lado * lado;
                printf("A área do quadrado é: %.2f\n", area);
                break;

            case 5:
                printf("Digite a base maior do trapézio: ");
                if (scanf("%lf", &base_maior) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                printf("Digite a base menor do trapézio: ");
                if (scanf("%lf", &base_menor) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                printf("Digite a altura do trapézio: ");
                if (scanf("%lf", &altura) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                area = ((base_maior + base_menor) * altura) / 2.0;
                printf("A área do trapézio é: %.2f\n", area);
                break;

            case 6:
                printf("Digite a diagonal maior do losango: ");
                if (scanf("%lf", &diagonal_maior) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                printf("Digite a diagonal menor do losango: ");
                if (scanf("%lf", &diagonal_menor) != 1) { printf("Entrada inválida.\n"); while (getchar() != '\n'); break; }
                area = (diagonal_maior * diagonal_menor) / 2.0;
                printf("A área do losango é: %.2f\n", area);
                break;

            default:
                printf("Opção inválida. Por favor, escolha um número entre 1 e 6.\n");
                break;
        }

        /* limpar buffer e perguntar se continuará */
        int c;
        while ((c = getchar()) != '\n' && c != EOF); /* limpar até newline */
        printf("Deseja calcular outra forma? (s/n): ");
        continuar = getchar();
        while ((c = getchar()) != '\n' && c != EOF); /* consumir restante */
        if (continuar == 'S') continuar = 's';
        if (continuar != 's') break;
    }

    printf("Programa encerrado.\n");
    return 0;
}
