#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IntToStr(unsigned int num, char* str)
{
    int i = 0;
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    while (num > 0) {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    str[i] = '\0';

    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    unsigned int num;
    char str[20];

    printf("Please, enter an unsigned integer:");
    scanf("%u", &num);
    IntToStr(num, str);
    printf("The number as a string: %s\n", str);

    return 0;
}
