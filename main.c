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

     //Subtração
    subtracao = num1 - num2;
    printf("Subtracao: %.2f\n", subtracao);

    //Multiplicação
    multiplicacao = num1 * num2;
    printf("Multiplicao: %.2f\n", multiplicacao);

    //Divisão
    if(num2 != 0){
        divisao = num1 / num2;
        printf("Divisão: %.2f\n", divisao);
    }else{
        printf("Não é posível dividir por zero.\n");
    }

    return 0;
}

