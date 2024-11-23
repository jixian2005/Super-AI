/******************
@author: Epiphany <jixian0721@gmail.com>
******************/

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("让我们说中文！\n");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    if (strcmp(input, "你好") == 0) {
        printf("你也好\n");
    } else {
        printf("抱歉，我不明白你说的是什么。\n");
    }

    return 0;
}
