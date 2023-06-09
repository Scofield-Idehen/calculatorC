#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    char terminate;

    do {
        printf("input the first number: ");
        scanf("%d", & num1);
        getchar();

        printf("input the operator(-, +, *, /): ");
        scanf("%c", &operator);

        printf("input the first number: ");
        scanf("%d", & num2);

        int answer;
            switch(operator){
                case '+':
                answer = num1 + num2;
                break;
                case '-':
                answer = num1 - num2;
                break;
                case '*':
                answer = num1 * num2;
                break;
                case '/':
                answer = num1 / num2;
                break;
                default:
                    printf("invalid operator");
                    continue;
        }

        printf("Answer: %d\n", answer);

        printf("do you want to continue? (y/n): ");
        scanf(" %c", &terminate);
        getchar();
    }while (terminate != 'n' && terminate != 'N');


        return 0;
}
