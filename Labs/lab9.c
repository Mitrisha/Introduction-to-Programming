#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int Q = 0, i = 0;
    while (i < 5){
        printf("Введите номер задания:");
        scanf("%d",&Q);
        i++;
        if(Q == 1){
            int N = 0;
            printf("\nВведите количество секунд с начала дня:");
            scanf("%d", &N);
            int k = N/60;
            int S = N - k*60;
            printf("Количество секунд, прошедших с начала последней минуты:%d\n", S);
            printf("/////////////////////////////////////////////////////////////////\n");
        } 
        if(Q == 2){
            printf("\nВведите номер дня:");
            int K = 0;
            scanf("%d",&K);
            int n = K/7;
            int S = K - n*7;
            printf("Номер дня недели =%d\n",S);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 3){
            printf("\nВведите номер дня:");
            int K = 0, N = 0, S = 0;
            scanf("%d",&K);
            printf("\nПервое января, какой номер дня недели");
            scanf("%d",&N);
            int n = K/7;
                S = K - n*7 + N - 1;
                if (S > 7){
                    S = S - 7;
                }
            printf("Номер дня недели =%d\n",S);
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 4){
            int A =0,B = 0, C = 0;
            printf("\nВведите первую сторону прямоугольника A=");
            scanf("%d",&A);
            printf("Введите вторую сторону прямоугольника B=");
            scanf("%d",&B);
            printf("Введите сторону квадрата C=");
            scanf("%d",&C);
            int s1 = A/C;
            int s2 = B/C;
            int s = s1*s2;
            printf("\nВ прямоугольнике помещается %d", s);
            printf(" квадратов\n");
            printf("/////////////////////////////////////////////////////////////////\n");
        }
        if(Q == 5){
            float A =0;
            printf("\nВведите год:");
            scanf("%f",&A);
            if(A <=2000){
                int n = A/100;
                if(A!=n*100){
                    n++;
                }
            printf("Столетие равно:%d\n", n);
            }
            printf("/////////////////////////////////////////////////////////////////\n");
        }
    }
    return 0;
}
