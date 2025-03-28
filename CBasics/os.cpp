﻿// 플랫폼(Platform)은 프로그램이 실행될 수 있는 기반을 의미.

//운영체제 기반 플랫폼 : Windows, macOS, Linux, Android, iOS 등은 각기 다른 운영체제 플랫폼.

// 배포 플랫폼 : 게임이나 애플리케이션의 경우, Steam, 스팀, 에픽, 오리진, GOG, 유플레이

// 솔루션 플랫폼

// Visual Studio가 솔루션을 생성 -> 하위로는 프로젝트가 존재
// -> 각각 프로젝트 안에 소스코드가 존재(헤더파일, 소스파일, 리소스파일 등)

// 솔루션 : 여러 개의 프로젝트를 포함할 수 있는 최상위 컨테이너 역할(.snl)
// 프로젝트 : 코드, 리소스 파일, 헤더 파일, 설정 파일 등을 포함하는 개별 애플리케이션 또는 라이브러리 단위
// 코드 : 프로젝트 안에서 실제로 실행될 프로그램을 작성하는 소스 코드 파일
// 코드 파일 안에는 클래스, 메서드, 변수 등이 정의되어 있으며, 프로젝트를 구성하는 핵심 요소

// 윈도우 운영체제 : 64bit(x64) - 8byte, 32bit(x86) - 4byte
//  CPU(중앙처리장치, 프로세서)가 처리할 수 있는 데이터 크기와 메모리 관리 방식의 차이를 의미

// x86: 32비트 플랫폼을 의미 32비트 CPU에서 실행되며, 32비트 운영체제에서 최대 4GB의 메모리만 사용 가능
// x64 : 64비트 플랫폼을 의미 64비트 CPU에서 실행되며, 
// 64비트 운영체제에서 훨씬 더 많은 메모리를 사용할 수 있습니다. 대부분의 현대적인 소프트웨어와 게임은 64비트를 기본으로 지원

// 64비트 운영체제의 장점
// 더 많은 RAM 사용 가능(4GB 이상의 메모리 지원)
// 연산 속도가 빠름(한 번에 더 많은 데이터 처리)
// 보안이 강화됨(Kernel Patch Protection, ASLR 등 지원)
// 멀티태스킹 성능 향상(대량의 데이터 처리에 적합)




// 솔루션 플랫폼 : 솔루션을 빌드할 때 사용할 플랫폼을 지정하는 설정
// 만든 프로그램을 32비트로 할지 64비트로 할지 실행 플랫폼을 선택하는 것


