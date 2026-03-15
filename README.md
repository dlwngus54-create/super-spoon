# 심화실습-1 보고서

## 1. 제출 정보

| 구분 | 내용 |
| --- | --- |
| 학년학기 | 2026학년도 1학기 |
| 과목명(학수번호) | 프로그래밍기초와실습 (DASF004-52) |
| 학번 | 2026310753 |
| 이름 | 이주현 |
| 과제명 | 심화실습-1 |

## 2. 현재 상태

### 2.1 배운적 있는 언어 및 현재 수준

- `{모든 언어}` - `{하}`
    - `상, 중, 하` 혹은 `해당없음`
        - 상: 어떤 요구사항을 받아도 어떻게든 구현할 수 있다.
        - 중: 기본적으로 어느정도 수준의 구현은 가능하지만 해당 언어의 고급기술 활용은 어렵다.
        - 하: 가볍게 배워본 정도이다.
- 예: Python - 상
- 예: Java - 중
- 예: C - 해당없음

### 2.2 실습 환경

| 사용한AI 도구 | 개발환경 |
| gemini | GitHub Codespace |
| 예: ChatGPT | 예: GitHub Codespace |

## 3. 코드 리뷰 결과

### 3.1 AI가 생성한 코드를 얼마나 이해할 수 있었는지?

- 이해도: 1점 (0점: 전혀 이해하지 못함, 10점: 완전히 이해함)
- 어떤식으로 동작하는 코드로 이해했는지 자유롭게 서술
AI로 만든 해당 코드는 항목별 정리해주는 내용으로 이해했습니다. 각각의 항목을 별개로 저장하는 것이 아닌 한개의 묶음으로 조회되도록 설정되어있었습니다.
프로그램이 실행되면 선택사항이 계속 떠있고, 원하는 번호를 누를 때마다 정해진 기능으로 점프해서 실행됐습니다. 추가로 정렬부분을 넣었는데 날짜 순서대로 정렬되는 것을 확인했습니다.
### 3.2 최초에 입력한 프롬프트와 그 결과물에 대한 평가

#### 최초 프롬프트

```
주제: 간단한 콘솔 기반 일정 관리 프로그램 작성
필수 기능
일정 추가
제목, 날짜, 시간, 설명을 입력받아 일정 추가
일정 조회
저장된 일정의 전체 목록을 보여주기
저장된 일정이 없을 경우 “저장된 일정이 없습니다.” 메시지 출력
일정 수정
기존 일정 정보 변경
일정 삭제
선택한 일정 제거
고급 기능 (선택사항)
일정 검색: 키워드로 일정을 찾는 기능
날짜별 정렬: 날짜순으로 일정을 정렬하는 기능
파일 저장/불러오기: 일정 데이터를 영구 저장하는 기능
제약사항
한 개의 .c 파일에 C언어로 구현
컴파일 오류 없이 정상 동작해야 함
교수님이 주신 내용 그대로 첨부하여 프롬포트 입력했습니다.
```

#### 최종 코드 및 실행 결과

> 본 문서 가장 아래 `부록` 섹션에서 `최종 결과물 코드`와 `실행 결과`에 각각 코드 및 실행 결과를 복사 & 붙여넣기로 첨부합니다.

### 3.3 최종 결과물을 얻기까지의 경험

- 바이브코딩이라는 것은 초기 프롬포트부터 중요하다는 것을 깨달았습니다. 확실한 니즈를 입력해야 AI도 특별한 질문 없이 즉각적으로 완성된 코딩을 해서 보내주었습니다. C언어로 이런 프로그램을 만드는 것은 입문자에게는 큰 벽처럼 느껴졌으나 큰 틀과 친절한 해석으로 전체적인 구조를 아주 조금이나마 알게 되었습니다.

## 4. 결론

- 교수님께서 수업에서 말씀해주신 바이브 코딩에 대한 장단점을 이번 과제를 통해 극명하게 알 수 있었습니다. 그래도 비교적 손쉽게 접할 수 있다는 장점이 커서 앞으로도 많이 사용하여 코딩을 해보고싶다는 생각을 했습니다. 이번 경험을 통해 나도 할 수 있다는 자신감을 얻게 되었습니다.
- 코드 분석이 아직 많이 서툴러서 하나하나 이해하는데 많은 시간이 소요됐습니다. 게다가 완전히 이해하지 못한 수박 겉핥기식 수준이라 많은 공부가 필요한 것 같습니다.
- AI가 만연한 이 시대에 프로그래밍 학습을 하는 것은 당연한 수순이라고 생각합니다. 마치 과거에 글을 읽고 쓰는 법을 배웠던 것과 같이 AI가 아무리 훌륭한 코드를 제공하더라도, 그 코드가 왜 이렇게 동작하는지, 어디에 오류가 있는지, 그리고 내가 원하는 방향으로 어떻게 수정해야 하는지를 알아야한다고 생각합니다. 앞으로도 많은 사람들이 프로그래밍교육을 배움으로써 많은 도움이 됐으면 하는 바램이 있습니다.   

## 참고문헌

- gemini
---
---

## 부록

### 실행 결과

- 프로그램의 주요 기능 실행 화면을 터미널에서 텍스트를 복사&붙여넣기로 작성
- 프로그램 실행에 실패했다면, 실패와 관련된 내용을 담아도 좋음

```bash
======= 📅 스마트 일정 관리자 =======
1. 일정 추가
2. 일정 조회 (날짜순)
3. 일정 수정
4. 일정 삭제
5. 일정 검색
6. 종료 및 저장
====================================
선택: 1

[새 일정 추가]
제목: 프기실
날짜 (YYYY-MM-DD): 2026-03-16
시간 (HH:MM): 09:00     
설명: 과제제출
일정이 성공적으로 등록되었습니다.

======= 📅 스마트 일정 관리자 =======
1. 일정 추가
2. 일정 조회 (날짜순)
3. 일정 수정
4. 일정 삭제
5. 일정 검색
6. 종료 및 저장
====================================
선택: 1

[새 일정 추가]
제목: 개인일정
날짜 (YYYY-MM-DD): 2026-03-14
시간 (HH:MM): 14:00
설명: 개인일정소화
일정이 성공적으로 등록되었습니다.

======= 📅 스마트 일정 관리자 =======
1. 일정 추가
2. 일정 조회 (날짜순)
3. 일정 수정
4. 일정 삭제
5. 일정 검색
6. 종료 및 저장
====================================
선택: 2

번호 날짜          시간     제목          설명
------------------------------------------------------------
1    2026-03-14      14:00      개인일정    개인일정소화
2    2026-03-16      09:00      프기실       과제제출

======= 📅 스마트 일정 관리자 =======
1. 일정 추가
2. 일정 조회 (날짜순)
3. 일정 수정
4. 일정 삭제
5. 일정 검색
6. 종료 및 저장
====================================
선택: 2

번호 날짜          시간     제목          설명
------------------------------------------------------------
1    2026-03-14      14:00      개인일정    개인일정소화
2    2026-03-16      09:00      프기실       과제제출


```

### 최종 결과물 코드

- AI가 생성한 전체 코드 첨부
```c

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

```
