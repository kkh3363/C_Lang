#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;
    char* choices[] = {"", "Rock", "Paper", "Scissors"};

    // 난수 생성기 초기화
    srand((unsigned int)time(NULL));

    printf("=== Rock , Paper, Scissors Game ===\n");
    printf("1. Rock  2. Paper  3. Scissors  4. Exit\n");
	printf("Select # : ");
    scanf("%d", &user);

    // 게임 종료 조건
    if (user == 4) {
        printf("Game Exit.\n");
        return 0;
    }

    if (user < 1 || user > 3) {
        printf("Incorrect user input (1~4).\n");
        return 0;
    }

    // 컴퓨터의 랜덤 선택 (0, 1, 2 중 하나 생성 -> 1, 2, 3으로 변환)
    computer = rand() % 3 + 1;

    // 선택 출력
    
    printf("\nYou: %s\n", choices[user]);
    printf("Computer: %s\n", choices[computer]);

    // 승패 판정
    printf("\n[결과] ");
    if (user == computer) {
        printf("same Result.\n");
    } else if ((user == 1 && computer == 3) || 
               (user == 2 && computer == 1) || 
               (user == 3 && computer == 2)) {
        printf("You Win!\n");
    } else {
        printf("Ooops you !\n");
    }

    return 0;
}
