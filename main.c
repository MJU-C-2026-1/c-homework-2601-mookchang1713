/* 
  파일이름: mian.c
  작 성 자: 스포츠학부 60232535 임창묵
  하 는 일: 개인별 3대 운동 중량 분석 및 스트렝스 레벨 관리 시스템
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  system("chcp 65001");

  // 1. 변수 선언 (자료형 3개 : char, double, int / 변수 7개)
  char initial;
  double bodyWeight;
  int squat, bench, dead;
  int total;
  double ratio;
  
  // 2. 입력 (printf, scanf 사용)
  printf("-- 개인별 3대 운동 중량 분석 및 스트렝스 레벨 관리 시스템 --\n");
  printf("본인 성함의 영문 이니셜 첫 글자를 입력하세요: ");
  scanf(" %c", &initial);

  printf("현재 몸무게(kg)를 입력하세요: ");
  scanf("%lf", &bodyWeight);

  printf("스쿼트, 벤치프레스, 데드리프트 중량을 공백으로 구분하여 입력: ");
  scanf("%d %d %d", &squat, &bench, &dead);

  // 3. 산술 연산 (순차 구조)
  total = squat + bench + dead;
  ratio = (double)total / bodyWeight;

  // 4. 출력
  printf("\n==============================\n");
  printf("사용자 [%c] 님의 근력 분석 결과\n", initial);
  printf("==============================\n");
  printf("3대 중량 총합:\t%d kg\n", total);
  printf("체중 대비 비율:\t%.2f 배\n", ratio);
  printf("==============================\n");
  printf("분석: %c님은 본인 무게의 약 %.2f배를 들어올립니다!\n", initial, ratio);

//[2차 과제 : 조건문 활용한 테이터 분석 및 판별 로직]

// 1. 등급/숙련도 판별 - 근력 비율 기준 (if ~ else of ~ else 사용)
printf("\n▶ 등급 및 특별 성취 분석 ◀\n");
printf("- 현재 숙련도 : ");
if(ratio >= 5.5)
{
  printf("엘리트 (로니콜먼과 견줄 실력자!!)\n");
}
  else if(ratio >= 4.5)
  {
    printf("고급자 (훌륭한 스트렝스의 소유자)\n");
  }
  else if(ratio >= 3.5)
  {
    printf("중급자 (꾸준한 훈련의 결정체)\n");
  }
  else if(ratio >= 2.5)
  {
    printf("초급자 (기본기가 탄탄하게 잡혀가는 단계)\n");
  }
  else
  {
    printf("입문자 (앞으로의 폭발적인 성장이 기대됩니다!)");
  }
  
  // 2. 특별 성취 보상 확인 - 개별 if문
  if (total >= 500)
  {
    printf("⭐ 특별 보상 : [3대 500 달성!!] 오운완 및 바디프로필 업로드가 허가되었습니다 ⭐\n");
  }

  if (ratio >= 6.0)
  {
    printf("👑 칭호 획득 : [명예의 전당 등극!] 체중의 6배를 들어올렸습니다! 👑\n");
  }

  //3. 맟춤형 훈련 강도 추천 (단순 산술 연산 활용)
  printf("/n▶ %c님의 맞춤형 훈련 권장 중량 (총합 기준) ◀\n", initial);
  printf("- 90%% 강도 (스트렝스 훈련) : %.1f kg\n", total * 0.9);
  printf("- 80%% 강도 (근비대 훈련) : %.1f kg\n", total * 0.8);
  printf("- 70%% 강도 (볼륨 훈련) : %.1f kg\n", total * 0.7);

  return 0;
}
ㄴㅇㅇㅇㅇㅇㅇ
ㅇㅇㅇㅇ
