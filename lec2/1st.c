#include <stdio.h>

int main() {
    int var_floor = 3; // 현재 7층으로 설정됨. 이 숫자를 3, 4 등으로 바꿔가며 테스트해 보세요!
    int var_ho = 5;    // 현재 4호로 설정됨. 이 숫자도 1, 3 등으로 바꿔보세요.

    // 1단계: 7층인지 먼저 검사 (VIP 층 대전제)
    if (var_floor == 7) { 
        printf("use ev5\n");
    } else {
        // 7층이 아닌 나머지 모든 층은 여기서부터 홀수/짝수 검사 시작
        if (var_floor % 2 == 1) {
            // 층수가 홀수일 때
            if (var_ho % 2 == 1) {
                printf("use ev1\n"); // 층 홀수, 호수 홀수
            } else {
                printf("use ev2\n"); // 층 홀수, 호수 짝수
            }
        } else {
            // 층수가 짝수일 때
            if (var_ho % 2 == 1) {
                printf("use ev3\n"); // 층 짝수, 호수 홀수
            } else {
                printf("use ev4\n"); // 층 짝수, 호수 짝수
            }
        }
    }

    return 0;
}