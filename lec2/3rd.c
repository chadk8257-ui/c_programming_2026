#include <stdio.h>

int main() {
    int sum = 0; // 합계를 저장할 텅 빈 상자를 하나 준비합니다.

    // 1부터 시작해서 20이 될 때까지 1씩 더하면서 반복!
    for (int i = 1; i < 21; i++) { 
        
        if (i % 3 == 0) {       // 만약 i를 3으로 나눈 나머지가 0이라면 (즉, 3의 배수라면)
            sum += i;           // sum 상자에 i 값을 더해서 다시 넣어라!
        } else if (i % 7 == 0) { // 그게 아니고 만약 7의 배수라면
            sum += i;           // sum 상자에 i 값을 더해라!
        }

    }
    printf("sum: %d\n", sum); // 최종 합계 출력 (정답: 84)
    return 0;
}