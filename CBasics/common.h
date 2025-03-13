#pragma once


// 정적 변수
static int g_iStatic = 0;
// common.h 파일에 static int g_iStatic 선언하고 static_var과 func 파일에 참조
// 그럼 static_var과 func에 있는 g_iStatic은 같은가?
// 각 파일마다 정적 변수가 있다. (각 파일 전용)
// 저렇게 선언하면 선언 위치가 파일이기 때문 static_var 파일에 iStatic 따로
// func 파일에 iStatic 따로 존재한다.

// 링크 단계를 거치고 취합되면 구별이 된다.
// 어느 쪽에서 호출한게 누군지 이름이 같아도 각 출신 지역이 다르기 때문에 구별이 된다.


// 외부 변수
extern int g_iExtern;
// extern을 헤더에 배치할 경우, 초기화를 하면 안된다.
// 변수를 선언한 게 아니라 g_iExtern이라는 변수가 있다라고 알려주는	것이다.
// 