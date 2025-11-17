#include <stdio.h>

int main()
{
    while (1)
    {
        int interface;
        printf("Escolha a atividade que deseja executar:\n");
        printf("1 - Calcular nota necessária para média 5\n");
        printf("2 - Calcular área de um retângulo\n");
        printf("3 - Converter temperatura de Celsius para Fahrenheit e Kelvin\n");
        printf("4 - Calcular IMC de uma pessoa\n");
        printf("5 - Calcular salário líquido de um funcionário\n");
        scanf("%d", &interface);

        switch (interface)
        {
        case 1:
            // 1.Crie um programa em C para ler as duas primeiras notas de um aluno e exibir a nota que o aluno precisa obter na 3a prova para ficar com média 5.
            float nota1, nota2, nota3;

            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            nota3 = 15 - (nota1 + nota2);
            printf("O aluno precisa obter %.2f na terceira prova para ficar com média 5.\n\n\n", nota3);
            break;

        case 2:
            // 2. Desenvolva um programa em C que calcule a área de um retângulo. Leia as medidas da base e da altura em metros, calcule a área e exiba o resultado com uma mensagem adequada.
            float altura, base, area;

            printf("Digite a altura em metros: ");
            scanf("%f", &altura);
            printf("Digite a base em metros: ");
            scanf("%f", &base);

            area = base * altura;
            printf("A area do seu retangulo é %.4fm².\n\n", area);
            break;

        case 3:
            // 3. Desenvolva um programa em C para ler uma temperatura em Celsius e convertê-la para Fahrenheit e Kelvin. Efetue as conversões e exiba os três valores de temperaturas com suas respectivas unidades. Considerar: Fahrenheit = (Celsius × 9/5) + 32 e Kelvin = Celsius + 273.15.
            float temperatura, c_to_Fahrenheit, c_to_Kelvin;

            printf("Digite a temperatura em Celsius: ");
            scanf("%d", &temperatura);

            c_to_Fahrenheit = (temperatura * 9 / 5) + 32;
            c_to_Kelvin = temperatura + 273.15;

            printf("A temperatura digitada é %.1fC° que convertido para Fahrenheit é: %.1fF \n E para Kelvin: %1fK\n\n", temperatura, c_to_Fahrenheit, c_to_Kelvin);
            break;

        case 4:
            // 4. Crie um programa em C que calcule o IMC (Índice de Massa Corporal) de uma pessoa. Leia peso e altura, calcule o IMC usando a fórmula IMC = peso / (altura × altura) e exiba o nome da pessoa, peso, altura e o valor do IMC calculado.
            float altura_imc, peso, IMC;
            char nome[50];

            printf("Digite seu nome: ");
            scanf("%s", nome);
            printf("Digite a altura em metros(m): ");
            scanf("%f", &altura_imc);
            printf("Digite o peso em quilogramas(Kg): ");
            scanf("%f", &peso);

            IMC = peso / (altura_imc * altura_imc);

            printf("Nome: %s\n Altura: %.2fm\nPeso: %.2f\nIMC (Índice de Massa Corporal): %.1f\n", nome, altura_imc, peso, IMC);
            break;

        case 5:
            /*5.Desenvolva um programa em C que calcule o salário líquido de um funcionário. Leia o prenome do funcionário o salário bruto, o percentual de desconto do INSS e o percentual de desconto do Imposto de Renda.
            Calcule os valores dos descontos, o salário líquido e exiba um demonstrativo completo com todas essas informações formatadas.
            Fórmulas:
            ● Desconto INSS = Salário Bruto × (percentual INSS / 100)
            ● Desconto IR = Salário Bruto × (percentual IR / 100)
            ● Salário Líquido = Salário Bruto - Desconto INSS - Desconto IR
            Para declarar uma string (nome) use: char nome[30];
            Para ler uma string: scanf(“%s”,nome);
            Para exibir uma string: printf(“Funcionário: %s”,nome);*/

            char nome[30];
            float salario_bruto, percentual_inss, percentual_ir, desconto_ir, desconto_inss, salario_liquido;

            printf("Digite o nome do funcionário: ");
            scanf("%s", nome);
            printf("Digite o salário bruto: ");
            scanf("%f", &salario_bruto);
            printf("Digite o percentual de desconto do INSS: ");
            scanf("%f", &percentual_inss);
            printf("Digite o percentual de desconto do Imposto de Renda: ");
            scanf("%f", &percentual_ir);

            desconto_inss = salario_bruto * (percentual_inss / 100);
            desconto_ir = salario_bruto * (percentual_ir / 100);
            salario_liquido = salario_bruto - desconto_inss - desconto_ir;

            printf("Funcionário: %s\n", nome);
            printf("Salário Bruto: R$ %.2f\n", salario_bruto);
            printf("Desconto INSS: R$ %.2f\n", desconto_inss);
            printf("Desconto Imposto de Renda: R$ %.2f\n", desconto_ir);
            printf("Salário Líquido: R$ %.2f\n\n", salario_liquido);
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
        }
    };
    return 0;
}
