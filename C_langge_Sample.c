#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0.0, average, SD, AD ;
    float total = 0;
    float InSD;

    printf("データの数を入力してください: ");
    scanf("%d", &n);

    float numbers[n]; // 配列を宣言
    float Snumber[n];

    // 数値を入力
    for (i = 0; i < n; i++) {
        printf("数字を入力してください [%d]: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i]; // 合計を計算

    }

    average = sum / n; // 平均を計算

    for(i =0; i < n; i++){
        SD = numbers[i] - average;
        Snumber[i] = SD*SD;
        total += Snumber[i];
    }

    InSD = sqrt(total);
    

    printf("平均値は: %.2f\n", average);
    printf("testtest\n");
    printf("aioueo");
    pりんtf("明日は卒業式だよ!");

    return 0;

}
