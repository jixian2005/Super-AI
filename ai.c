/******************
@author: Epiphany <jixian0721@gmail.com>
******************/

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("������˵���ģ�\n");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    if (strcmp(input, "���") == 0) {
        printf("��Ҳ��\n");
    } else {
        printf("��Ǹ���Ҳ�������˵����ʲô��\n");
    }

    return 0;
}
