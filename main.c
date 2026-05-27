/* 
  파일이름: mian.c
  작 성 자: 스포츠학부 60232535 임창묵
  하 는 일: 개인별 3대 운동 중량 분석 및 스트렝스 레벨 관리 시스템
*/
#include <stdio.h>
#include <stdlib.h>

// 전역 변수 선언
char initial = ' ';
double bodyWeight = 0.0;
int squat = 0, bench = 0, dead = 0;
int total = 0;
double ratio = 0.0;
int hasData = 0; //데이터 입력 여부를 확인하는 플래그 변수

//사용자 정의 함수 1: 데이터 입력 함수
void inputData()
{
  printf("\n--- [1. 입력] 사용자 정보 및 중량 등록 ---\n");
  printf("본인 서함의 영문 이니셜 첫 글자를 입력하세요: ");
  scanf(" %c", &initial);

  printf("현재 몸무게(kg)을 입력하세요: ");
  scanf("%lf", &bodyWeight);

  printf("스쿼트, 벤치프레스, 데드리프트 중량을 공백으로 구분하여 입력: ");
  scanf("%d %d %d", &squat, &bench, &dead);

  hasData = 1;
  printf("--> 데이터 입력이 완료되었습니다\n");
}

//사용자 정의 함수 2: 3대 중량 총합 계산 함수
int calculateTotal(int s, int b, int d)
{
  return s + b + d;
}

//사용자 정의 함수 3: 체중 대비 비율 계산 함수
double calculateRatio(int t, double bw)
{
  if(bw > 0)
  {
    return (double)t / bw;
  }
  return -.0;  
}

//사용자 정의 함수 4: 기록 분석 결과 출력 함수
void printView()
{
  printf("\n===============================\n");
  printf("사용자 [%c] 님의 근력 분석 결과\n", initial);
  printf("===============================\n");
  printf("3대 중량 총합: \t%d kg\n", total);
  printf("체중 대비 비율:\t%.2f 배\n", ratio);
  printf("===============================\n");
  printf("분석: %c님은 본인 무게의 약 %.2f배를 들어올립니다!\n", initial, ratio);
}

//사용자 정의 함수 5: 숙력도 등급 및 특별 성취 분석 출력 함수
void printAnalysis(double r, int t, char init)
{
  //1. 등급/숙련도 판별
  printf("\n▶ 등급 및 특별 성취 분석 ◀\n");
  printf("- 현재 숙련도 : ");
 
  if(r >= 5.5)
  {
    printf("엘리트 (로니콜먼과 견줄 실력자!!)\n");
  }
  else if(r >= 4.5)
  {
    printf("고급자 (훌륭한 스트렝스의 소유자)\n");
  }
  else if(r >= 3.5)
  {
    printf("중급자(꾸준한 훈련의 결정체)\n");
  }
  else if(r >= 2.5)
  {
    printf("초급자 (기본기가 탄탄하게 잡혀가는 단계)\n");
  }
  else
  {
    printf("입문자 (앞으로의 폭발적인 성장이 기대됩니다)");
  }

  //2. 특별 성취 보상 확인
  if(t >= 500)
  {
    printf("⭐ 븍별 보상 : [3대 500 달성!!] 오운완 및 바디프로필 업로드가 허가되었습니다 ⭐\n");
  }
  if(r >= 6.0)
  {
    printf("👑 칭호 획득 : [명예의 전당 등극!] 체중의 6배를 들어올렸습니다! 👑");
  }

  //3. 맞춤형 훈련 강도 추천
  printf("\n▶ %c님의 맞춤형 훈련 권장 중량 (총합 기준) ◀\n", init);
  printf("- 90%% 강도 (스트렝스 훈련) : %.1f kg\n", t * 0.9); 
  printf("- 80%% 강도 (근비대 훈련) : %.1f kg\n", t * 0.8); 
  printf("- 70%% 강도 (볼륨 훈련) : %.1f kg\n", t * 0.7);
}

int main()
{
  system("chcp 65001");

  //메뉴선택
  int menuChoice;

  //while 무한루프를 이용한 메인 메뉴 출력
  while(1)
  {
    printf("\n===================================================\n");
    printf(" -- 개인별 3대 운동 중량 분석 및 스트렝스 시스템 --\n");
    printf("===================================================\n");
    printf(" 1. 입력 (사용자 정보 및 중량 등록)\n");
    printf(" 2. 조회 (3대 중량 총합 및 체중 대비 비율 확인)\n");
    printf(" 3. 분석 (숙련도 판별 및 훈련 추천)\n");
    printf(" 4. 종료\n");
    printf("===================================================\n");
    printf("메뉴를 선택하세요 (1~4): ");
    scanf("%d", &menuChoice);

    //사용자가 "종료" 메뉴 선택할 때만  break로 종료
    if(menuChoice == 4)
    {
      printf("\n프로그램을 종료합니다. 오늘도 안전하게 득근하세요! 💪\n");
      break;
    }

    //메인 로직은 호출 위주로 간결하게 구정(목차)
    if(menuChoice == 1)
    {
      inputData();
      total = calculateTotal(squat, bench, dead);
      ratio = calculateRatio(total, bodyWeight);
    }
    else if(menuChoice == 2)
    {
      if(hasData == 0)
      {
        printf("\n⚠️ [알림] 1번 메뉴에서 데이터를 먼저 입력해주세요!\n");
      }
      else
      {
        printView();
      }
    }
      else if(menuChoice == 3)
    {
      if(hasData == 0)
      {
        printf("\n⚠️ [알림] 1번 메뉴에서 데이터를 먼저 입력해주세요!\n");
      }
      else
      {
        printAnalysis(ratio, total, initial);
      }
    }

    else
    {
      printf("\n잘못된 입력입니다. 1~4번 사이의 숫자를 입력해주세요.\n");
    }
  }
  return 0;
}