﻿#pragma once

int Add(int a, int b);  // 반환 타입이 int고 함수명은 Add, 인자는 int 2개 받는 함수가 있다. 선언
int Sub(int a, int b);
int Mul(int a, int b);

// 헤더 파일의 구체적인 역할이 어떤식으로 동작을 하는지?
// 헤더 파일이 함수가 있다라고 선언 파트만 둠!!

// 헤더에다가 기능 구현을 하면 발생하는 문제점
// 그러면 #include 전처리기를 사용해야하는데 모든 파일에 구현부분까지 다 들어옴
// 하나로 다 합쳐지면 파일마다 똑같은 함수가 있어 함수가 중복됨 

// #include : 지정한 파일의 내용을 자기쪽으로 복사 붙여넣기
// 함수를 사용하는 이유 : 코드 재사용