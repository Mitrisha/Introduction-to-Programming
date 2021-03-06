#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int Q = 0, i = 0;
    while (i < 6){
        printf("Введите номер задания:");
        scanf("%d",&Q);
        i++;
        if(Q == 1){
            printf("\n1. Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).");
            int A = 0, B = 0, j = 0;
            printf("\nВведите числа A и B:");
            scanf("%d %d",&A, &B);
            while(A<=B){
                j = 0;
                while(j!=A){
                    printf("%d", A);
                    j++;
                }
                printf("\n");
                A++;
            }
            printf("/////////////////////////////////////////////////////////////////\n");
        } 
        if(Q == 2){
            printf("\n2. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A.");
            int A = 0, B = 0, S = 0;
            printf("\nВведите числа A и B:");
            scanf("%d %d",&A, &B);
            while (S<A){
                S = S + B;
            }
            if(S!= A){
                S = S - B; 
            }
            B = A - S;
            printf("%d\n", B);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 3){
            printf("\n3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.");
            printf("\nВведите число:");
            int N = 0, K = 1, s = 0;
            scanf("%d",&N);
            while(s<N){
                s = s + K;
                K++;
            }
            K--;
            printf("K=%d\n", K);
            printf("сумма=%d\n", s);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 4){
            printf("\n4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).");
            float P =0, S = 1000;
            int K = 0;
            printf("\nВведите P =");
            scanf("%f",&P);
            P = P*0.01;
            while(S<=1100){
                S = S + S*P;
                K++;
            }
            printf("Сумма равна:%f\n", S);
            printf("Количество месяцев:%d\n", K);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 5){
            printf("\n5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида");
            int A = 0, B = 0, S = 0;
            printf("\nВведите числа A и B:");
            scanf("%d %d",&A, &B);
            while(A!=B){
                if(A>B){A = A - B;}
                else{B = B - A;}
            }
            printf("НОД=%d\n", A);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 6){
            printf("\n6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.");
            int N = 0, a = 1, b = 1, S = 0, k = 2;
            printf("\nВведите число фибоначчи:");
            scanf("%d",&N);
            while(a!=N){
                S = a + b;
                b = a;
                a = S;
                k++;
            }
            printf("K=%d\n", k);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
    }
    return 0;
}
