# include <stdio.h>

int main(){
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);

    //soma
    soma = num1 + num2;
    printf("Soma: %.2f\n", soma);

    return 0;
}

