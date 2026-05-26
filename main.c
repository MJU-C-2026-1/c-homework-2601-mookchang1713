/* 
  파일이름: mian.c
  작 성 자: 스포츠학부 60232535 임창묵
  하 는 일: 개인별 3대 운동 중량 분석 및 스트렝스 레벨 관리 시스템
*/
#include <stdio.h>
#include <stdlib.h>

// 전역 변수 선언
char initial = '';
double bodyweight = 0.0;
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
  scanf("%d %d %d", &squat &bench &dead);

  hasData = 1;
  printf("--> 데이터 입력이 완료되었습니다\n");
}

//사용자 정의 함수 2: 3대 중량 총합 계산 함수
int calculateTotal(int s, int b, int d)
{
  return s + b + d;
}

//사용자 정의 함수 3: 숙력도 등급 및 특별 성취 분석 출력 함수
void printStrngthLevel(double r, int t)
{
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






  
}