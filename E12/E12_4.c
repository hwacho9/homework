#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_random(int lower, int upper);

int main(void)
{
    int x, y;
    char *hstr[] = {"グー", "チョキ", "パー"};
    char *rstr[] = {"あいこ", "勝ち", "負け"};
    srand(time(NULL));
    printf("じゃんけんをします (1:グー 2:チョキ 3:パー)\n");
    printf("あなたの手は？>> ");

    scanf("%d", &x);
    if (x > 3 || x < 1)
        return 1;
    y = my_random(1, 3);

    printf("\nプレーヤーの手: %s\n", hstr[x - 1]);
    printf("相手の手: %s\n", hstr[y - 1]);
    printf("勝負の判定: %s\n", rstr[((x * 10 + y) % 11) % 4]);
    return 0;
}

int my_random(int lower, int upper)
{
    return (rand() % upper + lower);
}