#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, sum;

    // ユーザーに入力を促す
    printf("1つ目の数字を入力してください: ");
    scanf("%d", &num1); // 数値を入力

    printf("2つ目の数字を入力してください: ");
    scanf("%d", &num2); // 数値を入力

    // 合計を計算
    sum = num1 + num2;

    // 結果を表示
    printf("合計: %d\n", sum);

    return 0; // 正常終了
}
