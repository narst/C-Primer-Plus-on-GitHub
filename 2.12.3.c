#include <stdio.h>

int main(void) {
    int age;
    int day;

    printf("请输入年龄 age: ");
    scanf("%d", &age);     
    day = 365 * age;         
    printf("大约是 %d 天。\n", day);

    return 0;
}
