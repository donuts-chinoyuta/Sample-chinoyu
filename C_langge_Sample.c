#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("データの数を入力してください: ");
    scanf("%d", &n);

    float numbers[n]; // 配列を宣言

    // 数値を入力
    for (i = 0; i < n; i++) {
        printf("数字を入力してください [%d]: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i]; // 合計を計算
    }

    average = sum / n; // 平均を計算
    printf("平均値は: %.2f\n", average);

    return 0;
}
