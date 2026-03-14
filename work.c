#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FILENAME "scheduler.dat"

// 일정 구조체 정의
typedef struct {
    char title[50];
    char date[20];   // YYYY-MM-DD
    char time[10];   // HH:MM
    char desc[100];
} Schedule;

Schedule list[MAX];
int count = 0;

// 함수 선언
void addSchedule();
void viewSchedules();
void updateSchedule();
void deleteSchedule();
void searchSchedule();
void sortSchedules();
void saveToFile();
void loadFromFile();

int main() {
    int choice;
    loadFromFile(); // 프로그램 시작 시 데이터 불러오기

    while (1) {
        printf("\n======= 📅 스마트 일정 관리자 =======\n");
        printf("1. 일정 추가\n");
        printf("2. 일정 조회 (날짜순)\n");
        printf("3. 일정 수정\n");
        printf("4. 일정 삭제\n");
        printf("5. 일정 검색\n");
        printf("6. 종료 및 저장\n");
        printf("====================================\n");
        printf("선택: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // 잘못된 입력 처리
            continue;
        }
        getchar(); // 버퍼 비우기

        switch (choice) {
            case 1: addSchedule(); break;
            case 2: viewSchedules(); break;
            case 3: updateSchedule(); break;
            case 4: deleteSchedule(); break;
            case 5: searchSchedule(); break;
            case 6: 
                saveToFile(); 
                printf("데이터를 저장하고 프로그램을 종료합니다.\n");
                return 0;
            default: printf("잘못된 입력입니다.\n");
        }
    }
}

// 1. 일정 추가
void addSchedule() {
    if (count >= MAX) {
        printf("저장 공간이 부족합니다.\n");
        return;
    }
    printf("\n[새 일정 추가]\n");
    printf("제목: "); fgets(list[count].title, sizeof(list[count].title), stdin);
    list[count].title[strcspn(list[count].title, "\n")] = 0;

    printf("날짜 (YYYY-MM-DD): "); scanf("%s", list[count].date);
    printf("시간 (HH:MM): "); scanf("%s", list[count].time);
    getchar();

    printf("설명: "); fgets(list[count].desc, sizeof(list[count].desc), stdin);
    list[count].desc[strcspn(list[count].desc, "\n")] = 0;

    count++;
    sortSchedules(); // 추가 후 정렬
    printf("일정이 성공적으로 등록되었습니다.\n");
}

// 2. 일정 조회
void viewSchedules() {
    if (count == 0) {
        printf("\n⚠️ 저장된 일정이 없습니다.\n");
        return;
    }
    printf("\n%-3s %-15s %-10s %-15s %-s\n", "번호", "날짜", "시간", "제목", "설명");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-4d %-15s %-10s %-15s %-s\n", i + 1, list[i].date, list[i].time, list[i].title, list[i].desc);
    }
}

// 3. 일정 수정
void updateSchedule() {
    viewSchedules();
    if (count == 0) return;

    int num;
    printf("\n수정할 번호 선택: ");
    scanf("%d", &num);
    getchar();

    if (num < 1 || num > count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    int idx = num - 1;
    printf("새 제목: "); fgets(list[idx].title, sizeof(list[idx].title), stdin);
    list[idx].title[strcspn(list[idx].title, "\n")] = 0;
    printf("새 날짜 (YYYY-MM-DD): "); scanf("%s", list[idx].date);
    printf("새 시간 (HH:MM): "); scanf("%s", list[idx].time);
    getchar();
    printf("새 설명: "); fgets(list[idx].desc, sizeof(list[idx].desc), stdin);
    list[idx].desc[strcspn(list[idx].desc, "\n")] = 0;

    sortSchedules();
    printf("수정이 완료되었습니다.\n");
}

// 4. 일정 삭제
void deleteSchedule() {
    viewSchedules();
    if (count == 0) return;

    int num;
    printf("\n삭제할 번호 선택: ");
    scanf("%d", &num);

    if (num < 1 || num > count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    for (int i = num - 1; i < count - 1; i++) {
        list[i] = list[i + 1];
    }
    count--;
    printf("삭제되었습니다.\n");
}

// 5. 검색 기능 (고급)
void searchSchedule() {
    char keyword[50];
    printf("검색할 제목 키워드: ");
    scanf("%s", keyword);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(list[i].title, keyword) != NULL) {
            printf("[%s] %s %s: %s\n", list[i].date, list[i].time, list[i].title, list[i].desc);
            found = 1;
        }
    }
    if (!found) printf("결과를 찾을 수 없습니다.\n");
}

// 정렬 기능 (날짜순)
void sortSchedules() {
    Schedule temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (strcmp(list[j].date, list[j + 1].date) > 0) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

// 파일 저장
void saveToFile() {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp) {
        fwrite(&count, sizeof(int), 1, fp);
        fwrite(list, sizeof(Schedule), count, fp);
        fclose(fp);
    }
}

// 파일 불러오기
void loadFromFile() {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp) {
        fread(&count, sizeof(int), 1, fp);
        fread(list, sizeof(Schedule), count, fp);
        fclose(fp);
    }
}
