#include <stdio.h>

int main()
{
    while (1)
    {
        int interface;
        printf("\n=======================================\n");
        printf("Escolha a atividade que deseja executar:\n");
        printf("1 - Aprovado ou reprovado?\n");
        printf("2 - Inverter número de três dígitos\n");
        printf("3 - Verificar divisibilidade\n");
        printf("4 - Calcular IMC de uma pessoa\n");
        printf("5 - Viagens de Kombi e passagens de coletivo\n");
        printf("6 - CastraçãoSolidária\n");
        printf("7 - Calcular valor final com frete\n");
        printf("8 - Brinquedos no parque de diversão\n");
        printf("9 - Classificação no campeonato de futebol\n");

        scanf("%d", &interface);
        switch (interface)
        {
        case 1:
            /*Escrever programa para ler as três notas de um aluno, calcular a média deste (média segunda nota com peso 2 e terceira nota com peso 3) e determinar a situação do aluno: APROVADO – se média igual ou superior a 7; EM RECUPERAÇÃO – se não aprovado e com média igual ou superior a 5; REPROVADO – quando média inferior a 5.*/
            float nota1, nota2, nota3;

            printf("\n=======================================\n");
            printf("Atividade 1 selecionada.\n");
            printf("Primeira nota: ");
            scanf("%f", &nota1);
            printf("Segunda nota: ");
            scanf("%f", &nota2);
            printf("Terceira nota: ");
            scanf("%f", &nota3);

            float media = (nota1 + nota2 * 2 + nota3 * 3) / 6;

            if (media >= 7)
            {
                printf("Situação: APROVADO\n");
            }
            else if (media >= 5)
            {
                printf("Situação: EM RECUPERAÇÃO\n");
            }
            else
            {
                printf("Situação: REPROVADO\n");
            }

            break;
        case 2:
            /*Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro número formado pelos dígitos invertidos do número lido (Ex: Numero Lido = 123;
            Numero Gerado = 321) Em seguida informar:
            NÚMERO GERADO MAIOR QUE NÚMERO LIDO ou NÚMERO LIDO MAIOR QUE NÚMERO GERADO, ou ainda, NÚMERO GERADO IGUAL AO NÚMERO LIDO.*/
            int numero, centenas, dezenas, unidades, numero_invertido;

            printf("\n=======================================\n");
            printf("Atividade 2 selecionada.\n");
            printf("Digite um número inteiro positivo de três dígitos: ");
            scanf("%d", &numero);

            if (numero < 100 || numero > 999)
            {
                printf("Número inválido. Por favor, digite um número de três dígitos.\n");
                break;
            }

            unidades = numero % 10;
            dezenas = (numero / 10) % 10;
            centenas = (numero / 100) % 10;

            numero_invertido = unidades * 100 + dezenas * 10 + centenas;

            if (numero_invertido > numero)
            {
                printf("NÚMERO GERADO MAIOR QUE NÚMERO LIDO\n");
            }
            else if (numero_invertido < numero)
            {
                printf("NÚMERO LIDO MAIOR QUE NÚMERO GERADO\n");
            }
            else
            {
                printf("NÚMERO GERADO IGUAL AO NÚMERO LIDO\n");
            }

            break;
        case 3:
            /*Faça um programa para verificar se
            determinado número inteiro lido N é divisível
            por A ou B, mas não simultaneamente pelos
            dois valores dados. São A e B, bem como N,
            dados pelo usuário. Atendendo a condição
            estabelecida, emitir mensagem “ATENDE
            CONDIÇÃO”; caso contrário, exibir: “NÃO
            ATENDE CONDIÇÃO”.*/
            printf("\n=======================================\n");
            printf("Atividade 3 selecionada.\n");

            int N, A, B;

            printf("Digite o valor de N: ");
            scanf("%d", &N);
            printf("Digite o valor de A: ");
            scanf("%d", &A);
            printf("Digite o valor de B: ");
            scanf("%d", &B);

            if (((N % A == 0) || (N % B == 0)) && !((N % A == 0) && (N % B == 0)))
            {
                printf("ATENDE CONDIÇÃO\n");
            }
            else
            {
                printf("NÃO ATENDE CONDIÇÃO\n");
            }

            break;

        case 4:
            /*4. Crie um programa em C que calcule o IMC (Índice de Massa Corporal) de uma pessoa. Leia peso e altura, calcule o IMC usando a fórmula IMC = peso / (altura × altura) e exiba o nome da pessoa, peso, altura e o valor do IMC calculado.*/
            printf("\n=======================================\n");
            printf("Atividade 4 selecionada.\n");

            float altura_imc, peso, IMC;

            printf("Digite a altura em metros(m): ");
            scanf("%f", &altura_imc);
            printf("Digite o peso em quilogramas(Kg): ");
            scanf("%f", &peso);

            IMC = peso / (altura_imc * altura_imc);

            if (IMC < 18.5)
            {
                printf("Classificação: Abaixo do peso\n\n");
            }
            else if (IMC < 24.9)
            {
                printf("Classificação: Saudável\n\n");
            }
            else if (IMC < 29.9)
            {
                printf("Classificação: Sobrepeso\n\n");
            }
            else if (IMC < 34.9)
            {
                printf("Classificação: Obesidade grau I\n\n");
            }
            else if (IMC < 39.9)
            {
                printf("Classificação: Obesidade grau II(severa)\n\n");
            }
            else
            {
                printf("Classificação: Obesidade Grau III(morbida)\n\n");
            }
            break;
        case 5:
            /*Os colegas do filho de Sr. Zé estão sentindo dificuldade para alugar um ônibus para levá-los ao “Museu da Gente Sergipana”. Então Sr. Zé resolveu disponibilizar sua Kombi, mas a depender do número de inscritos, serão necessárias muitas viagens, e alguns passageiros deverão ir de coletivo.
            Considerando que a Kombi tem capacidade para transportar 11 pessoas (fora o motorista – Sr. Zé), escrever um programa em C, para, dado o número de inscritos no passeio ao Museu, exibir o número de viagens que devem ser necessárias e o número de passagens de coletivo. Exemplos: se 22 pessoas – 2 viagens de kombi e 0 passagem em coletivo; se 37 pessoas – 3 viagens e 4 passagens em coletivo. Vale esclarecer que se o número de passageiros for inferior a 11, Sr. Zé os levará de Kombi.*/

            printf("\n=======================================\n");
            printf("Atividade 5 selecionada.\n");

            int inscritos, viagens, passagens;

            printf("Digite o número de inscritos para o passeio: ");
            scanf("%d", &inscritos);

            viagens = inscritos / 11;
            passagens = inscritos % 11;

            if (inscritos < 11)
            {
                viagens += 1;
            }

            printf("Número de viagens de kombi: %d\n", viagens);
            printf("Número de passagens de coletivo: %d\n", passagens);
            break;

        case 6:
            /* Para conter o crescimento da quantidade de gatos abandonados na UFS, surgiu o projeto "CastraçãoSolidária". 4 veterinários experientes e 1 recém-formado decidiram efetuar capturas e castrações todos os dias úteis. Os animais capturados são divididos igualitariamente entre os veterinários experientes, e as sobras ficam sob responsabilidade do recém-formado. Se capturados 4 ou menos gatos, todos os veterinários castram juntos. */

            printf("\n=======================================\n");
            printf("Atividade 6 selecionada.\n");

            int gatos, experientes, recem_formado;

            printf("Digite o número de gatos capturados: ");
            scanf("%d", &gatos);

            if (gatos <= 4)
            {
                printf("Todos os veterinários castram juntos.\n");
            }
            else
            {
                experientes = gatos / 4;
                recem_formado = gatos % 4;

                printf("Cada veterinário experiente castra: %d\n", experientes);
                printf("Veterinário recém-formado castra: %d\n", recem_formado);
            }
            break;

        case 7:
            /*Numa loja web os valores dos fretes são
            calculados em conformidade com os totais
            das compras. Se valor da compra é até
            R$300,00 (inclusive), o frete corresponde a
            35% desta; para valores maiores, o frete é
            de 20% do valor desta. Escrever programa
            para ler valor da compra e exibir valor final,
            com frete.*/
            printf("\n=======================================\n");
            printf("Atividade 7 selecionada.\n");

            float valor_compra, frete, valor_final;

            printf("Digite o valor da compra: R$ ");
            scanf("%f", &valor_compra);

            if (valor_compra <= 300.0)
            {
                frete = valor_compra * 0.35;
            }
            else
            {
                frete = valor_compra * 0.20;
            }

            valor_final = valor_compra + frete;
            printf("Valor do frete: R$ %.2f\n", frete);
            printf("Valor final com frete: R$ %.2f\n", valor_final);
            break;

        case 8:
            /*Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para que uma pessoa possa usá-los. O parque Ambrolândia possui 3 brinquedos que possuem essa limitação:
            a) Barca Viking: 1,5m de altura e 12 anos.
            b) Elevator of Death: 1,4m de altura e 14 anos.
            c) Final Killer: 1,7m de altura ou 16 anos.

            Dada a altura e a idade de uma pessoa, faça um programa que
            identifique quantos brinquedos ele pode andar.

            Formato de Entrada: Dois inteiros, F e I, representando a altura (em cm) e a idade, respectivamente.

            Formato de Saída: O número de brinquedos que ele pode andar no parque, seguido de uma quebra de linha.

            [Testes] Dados 130 e 15, o retorno é 0. Dados 173 e 20, o retorno é 3. Dados 170 e 11, o retorno é 1. Dados 160 e 14, o retorno é 2.*/

            printf("\n=======================================\n");
            printf("Atividade 8 selecionada.\n");

            int F, I, brinquedos = 0;
            printf("Digite a altura em cm: ");
            scanf("%d", &F);
            printf("Digite a idade: ");
            scanf("%d", &I);

            // a) Barca Viking: 1,5m de altura e 12 anos.
            if (F >= 150 && I >= 12)
            {
                brinquedos++;
            }
            // b) Elevator of Death: 1,4m de altura e 14 anos.
            if (F >= 140 && I >= 14)
            {
                brinquedos++;
            }
            // c) Final Killer: 1,7m de altura ou 16 anos.
            if (F >= 170 || I >= 16)
            {
                brinquedos++;
            }

            printf("%d\n", brinquedos);
            break;

        case 9:
            /*[Contexto] Dois times, Cormengo e Flaminthians, participam de um campeonato de futebol, juntamente com
            outros times. Cada vitória conta três pontos, cada empate um ponto. Fica melhor classificado no campeonato um time que tenha mais pontos. Em caso de empate no número de pontos, fica melhor classificado o time que tiver maior saldo de gols. Se o número de pontos e o saldo de gols forem os mesmos para os dois times então os dois times estão empatados no campeonato.

            [Objetivo] Dados os números de vitórias e empates, e os saldos de gols dos dois times, sua tarefa é determinar qual dos dois está melhor classificado, ou se eles estão empatados no campeonato.

            [Formato de Entrada] A entrada é descrita em uma única linha, que contém seis inteiros, separados por um espaço em branco. Cv ,Ce, Cs, Fv, Fe, Fs, que são, respectivamente, o número de vitórias do
            Cormengo, o número de empates do Cormengo, o saldo de gols do Cormengo, o número de vitórias do Flaminthians, o número de empates do Flaminthians e o saldo de gols do Flaminthians. Considerando: 0 <= Cv, Ce, Fv, Fe <= 100,1000 <= Cs, Fs <= 1000

            [Formato de Saída] Seu programa deve imprimir uma única linha. Se Cormengo é melhor classificado que Flaminthians, a linha deve conter apenas a letra ‘C’, se Flaminthians é melhor classificado que Cormengo, a linha deve conter apenas a letra ‘F’, e se os dois times estão empatados a linha deve conter apenas o caractere ‘=’.

            [Testes] Dados 5 3 5 1 8 1, o retorno é C. Dados 1 8 11 5 3 5, o retorno é F. Dados 4 2 8 4 2 1, o retorno é C. Dados 0 5 3 1 2 5, o retorno é C. Dados 0 5 3 1 2 3 o retorno é =.*/

            int Cv, Ce, Cs, Fv, Fe, Fs;
            int pontos_C, pontos_F;

            printf("\n=======================================\n");
            printf("Atividade 9 selecionada.\n");

            printf("Digite o número de vitórias, empates e o saldo de gols do Cormengo e também o número de vitórias, empates e o saldo de gols do Flaminthians. Separados por espaços\n");
            scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

            pontos_C = Cv * 3 + Ce;
            pontos_F = Fv * 3 + Fe;

            if (pontos_C > pontos_F)
            {
                printf("C\n");
            }
            else if (pontos_F > pontos_C)
            {
                printf("F\n");
            }
            else
            {
                if (Cs > Fs)
                {
                    printf("C\n");
                }
                else if (Fs > Cs)
                {
                    printf("F\n");
                }
                else
                {
                    printf("=\n");
                }
            }
            break;

        default:
            printf("\n=======================================\n");
            printf("Atividade inválida.\n");
        }
    }
    return 0;
}
