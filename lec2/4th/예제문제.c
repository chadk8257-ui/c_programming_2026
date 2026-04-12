#include <stdio.h>

int main() {
    int from = 8;
    int to = 16;
    int baesu = 7;
    int d; 

    // 1. from(8)부터 to(16)까지 1씩 증가시키며 반복합니다.
    for (d = from; d <= to; d++) {
        
        // 2. 현재 숫자(d)가 7의 배수인지 확인합니다.
        if (d % baesu == 0) {
            
            // 3. 조건이 맞으면 결과를 출력하고 루프를 즉시 빠져나옵니다.
            printf("from %d to %d, minimum %d baesu is %d.\n", from, to, baesu, d);
            break; 
        }
    }

    return 0;
} 