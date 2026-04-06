#include <stdio.h>

int main() {
    int math_score, physics_score; // 수학, 물리 점수를 담을 변수 상자 만들기
    int total = 0;                 // 총점 상자 (초기값 0)
    float average;                 // 평균은 소수점이 나올 수 있으니 float 상자!

    // 1. 입력받기 (scanf 활용)
    printf("수학 점수를 입력하세요: ");
    scanf("%d", &math_score);      // 입력받을 땐 변수 앞에 & 붙이기!
    
    printf("물리 점수를 입력하세요: ");
    scanf("%d", &physics_score);

    // 2. 표현식과 할당 (사칙연산 활용)
    total = math_score + physics_score; // 오른쪽을 계산해서 왼쪽에 넣기!
    
    // 고급 프로그래밍 점수 가산점 주기 (할당 연산자 활용)
    int prog_bonus = 10;
    total += prog_bonus; // total = total + 10 이랑 같은 뜻!

    average = total / 2.0; // 평균 구하기

    // 3. 출력하기 (printf 활용)
    printf("\n--- 결과 발표 ---\n");
    printf("보너스 포함 총점: %d점\n", total);
    printf("평균: %f점\n", average);

    // 4. 비교 연산과 논리 연산
    // 수학이 80점 이상이고 (AND), 물리가 80점 이상인가?
    int is_pass = (math_score >= 80) && (physics_score >= 80);
    
    // 결과가 참이면 1, 거짓이면 0이 출력됨!
    printf("두 과목 모두 80점 이상인가? (참:1, 거짓:0): %d\n", is_pass);

    return 0;
}