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

  return 0;
}
