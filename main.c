#include <stdio.h>

int main(){
    int day = 0;
    int month = 0;
    int year = 0;
    int result = 0;

    printf("Introduce el dia de tu cumple: \n");
    scanf("%d",&day);
    printf("Introduce el mes de tu cumple: \n");
    scanf("%d",&month);
    printf("Introduce el año de tu cumple: \n");
    scanf("%d",&year);

    result = day + month + year;
    printf("Result: %d\n", result);

    return 0;
}