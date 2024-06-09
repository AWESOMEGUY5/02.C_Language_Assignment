#include <stdio.h>
void array()
{
	// 배열 : 동일한 타입의 데이터를 여러개 저장 가능한 자료구조
	// 원소 : 배열 안에 있는 각각의 데이터
	// 배열의 크기 : 원소의 개수
	// 배열은 연속된 메모리에 저장되며 정수형의 번호(인덱스, Index)를 사용하여 접근
	// 인덱스(첨자, index, subscript) : 배열 원소의 번호

	// 왼쪽에서 오른쪽으로, 저장하는 자료형의 타입 배열명[배열의 크기];

	int array1[5] = { 0, 3, 7, 9, 10 };	// 초기화 방법 1 : 값이 서로 다른 경우 하나하나 지정하기
	for (int i = 0; i < 5; i++) 
		printf("%d ", array1[i]), printf("\n");

	int score2[5] = { 2, 3 };			// 초기화 방법 2 : 일부 초기화하기, 이런 경우 나머지는 전부 0으로 초기화된다.
	for (int j = 0; j < 5; j++)
		printf("%d ", score2[j]), printf("\n");

	int score3[5] = { 0 };				// 초기화 방법 3 : 전부 0으로 초기화하기, 하나만 입력하면 모든 값이 해당 값으로 초기화된다.
	for (int k = 0; k < 5; k++) 
		printf("%d ", score3[k]), printf("\n");
}

int main(void)
{
	array();

	return 0;
}