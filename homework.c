#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1. 게임 준비: 랜덤 숫자를 뽑기 위한 세팅
    srand(time(NULL));

    // 대진표 출력
    printf("가위바위보 토너먼트\n");
    printf("[대진표]\n");
    printf("8강\n");
    printf("[1] 플레이어 VS [2] 메시\n");
    printf("[3] 호날두 VS [4] 네이마르\n");
    printf("[5] 음바페 VS [6] 홀란\n");
    printf("[7] 마라도나 VS [8] 펠레\n");
    printf("당신은 [1] 플레이어입니다.\n\n");

    // 라운드별 상대 이름 및 라운드 이름 설정
    char* opponents[3] = {"메시", "네이마르", "펠레"};
    char* rounds[3] = {"8강", "4강", "결승"};

    // 2. 토너먼트 시작 (총 3번 이기면 우승)
    for (int i = 0; i < 3; i++) {
        printf("====================\n");
        printf("%s - 상대 : %s\n", rounds[i], opponents[i]);
        
        // 3. 승부가 날 때까지 무한 반복 (비기거나 잘못 입력하면 계속 돔)
        while (1) {
            int my_choice;
            int com_choice = rand() % 3 + 1; // 1, 2, 3 중 랜덤 뽑기

            // 안내문 출력
            printf("1: 가위 2: 바위 3: 보\n");
            printf("선택 > ");
            scanf("%d", &my_choice);

            // 잘못된 입력 처리
            if (my_choice < 1 || my_choice > 3) {
                printf("1, 2, 3 중에서 입력하세요.\n\n");
                continue; // 아래 코드를 무시하고 다시 while문 처음으로 돌아감
            }

            // 내가 낸 것과 상대가 낸 것 출력
            char* hand[4] = {"", "가위", "바위", "보"}; // 1, 2, 3 인덱스에 맞춤
            printf("나: %s\n", hand[my_choice]);
            printf("%s: %s\n", opponents[i], hand[com_choice]);

            // 4. 승패 판정 로직
            if (my_choice == com_choice) {
                printf("=> 비겼습니다! 재경기!\n\n");
                // 비겼으므로 while문이 계속 돌아감
            } 
            else if ((my_choice == 1 && com_choice == 3) || // 가위(1)가 보(3)를 이김
                     (my_choice == 2 && com_choice == 1) || // 바위(2)가 가위(1)를 이김
                     (my_choice == 3 && com_choice == 2))   // 보(3)가 바위(2)를 이김
            {
                printf("=> 이겼습니다!\n");
                if (i < 2) {
                    printf("=> 결승/다음 라운드 진출!\n\n");
                }
                break; // 이겼으므로 while문을 탈출해서 다음 라운드(for문)로 넘어감
            } 
            else {
                printf("=> 졌습니다...\n");
                printf("아쉽습니다. 다음 기회에!\n");
                return 0; // 졌으므로 프로그램(게임) 즉시 종료
            }
        }
    }

    // 3번 다 이기고 for문을 무사히 빠져나오면 우승
    printf("\n축하합니다! 우승!\n");

    return 0;
}