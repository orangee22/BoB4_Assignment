노용환 멘토님 - 운영체제 과제 #1

BoB 4기 취약점 분석 트랙 서승오

#####################################################################################
<과제 내용>

ANSI 인코딩 형식의 문자열과, UNICODE 인코딩 형식의 문자열을 UTF-8 인코딩 형식으로 변환 및 출력
1. 현재디렉토리\bob.txt 파일을 생성
2. 영문자/한글 조합으로 utf-8 인코딩 저장
3. 현재디렉토리\bob2.txt 복사
4. 현재디렉토리\bob2.txt 를 읽어서 화면(콘솔)에 출력 (한글 깨지면 x)
    - ReadFile() api 를 통해서 파일 읽기
    - Memory Mapped I/O 를 이용해서 파일 읽기
5. 현재디렉토리\bob.txt, 현재디렉토리\bob2.txt 삭제
#####################################################################################

<img src="/Homework1/image/Homework1(1).jpg">

<img src="/Homework1/image/Homework1(2).jpg">

<img src="/Homework1/image/Homework1(3).jpg">

<img src="/Homework1/image/Homework1_result.jpg">