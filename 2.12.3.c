#include <stdio.h>

int main(void) {
    int age;
    int day;

    printf("���������� age: ");
    scanf("%d", &age);     
    day = 365 * age;         
    printf("��Լ�� %d �졣\n", day);

    return 0;
}
