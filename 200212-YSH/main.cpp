// => 주석 (메모남기기)

/*
여러줄 주석
가급적 사용X
코드가 길어지면 사용이 복잡해짐

*/ 

// # => C/C++ 전처리기
// C++ => iostream => input, output, stream 
// C => studio
// C# => system.io
#include <iostream>
//usein namespace std => std안에 있는 함수들을 사용하기 위해 선언해준것(std::cout처럼 하나씩 사용도 가능)
using namespace std;

//모든 어플리케이션에는 반드시 메인함수가 존재한다.
//메인함수(역할=시작지점을 알려주는것)3
//반환형 함수이름 (인자값)
int main()
{
	//주의사항 : 항상 괄호를 열었으면 괄호를 닫고 시작해라
	//cout << : 화면으로 출력해라
	//cin >> : 키보드로부터 입력받아라
	//endl : 줄바꿈
	cout << "우리는 플밍 19기" << endl;
	printf("C 스타일");

	// ++ => 1씩증가, -- => 1씩 감소
	// C => C++

	return 0;

}