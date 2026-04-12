#include <stdio.h>

int main() {
    int var_score = 69;

    // 점수를 10으로 나눈 '몫'만 가지고 검사합니다!
    switch (var_score / 10) { 
        case 10: case 9:     // 100점이나 90점대(9)라면
            printf("A grade\n");
            break;
        case 8:              // 80점대(8)라면 (85 / 10 = 8 이니까 일로 옵니다!)
            printf("B grade\n");
            break;
        case 7:              // 70점대(7)라면
            printf("C grade\n");
            break;
        default:             // 그 밑은 전부
            printf("F grade\n");
            break;
    }
    return 0;
}