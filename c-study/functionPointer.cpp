#include <stdio.h>

//배열을 특정함수에 넘겨서 함수 안에서 배열의 내용출력

void func(int* pArr)
{
	printf("와아아아 pArr 주소값 복사: %x\n", pArr);


	printf("pArr : %x\n", *pArr);
	printf("pArr : %x\n", *(pArr + 1));


	printf("pArr : %x\n", pArr[0]);
	printf("pArr : %x\n", pArr[1]);
	printf("pArr : %x\n", pArr[2]);
	printf("pArr : %x\n", pArr[3]);
	printf("pArr : %x\n", pArr[4]);

}

void main()
{
	// 배열의 이름은 포인터다.
	int arr[] = { 1,2,3,4,5 };

	// 배열 넘길때 작성법
	// 배열에 이름을 넘기면된다.
	// 결국 {1,2,3,4,5} 메모리를 참조 하겠다는 의미
	// 통째로 못넘기기때문에 함수에게 주소값만 알려주면됨
	// 원본 메모리 공유
	// 결론 
	// 주소값을 저장하는 포인터 변수를 선언하면 됨!

	func(arr);



}