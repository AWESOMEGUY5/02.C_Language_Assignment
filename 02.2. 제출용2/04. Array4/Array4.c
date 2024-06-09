#include <stdio.h>

#define STUDENTS 5

int get_average(int score[], int n);

int main(void)
{
	int scores[STUDENTS] = { 1,2,3,4,5 }, avg;
	avg = get_average(scores, STUDENTS);

	printf("평균은 %d입니다.", avg);
	
	return 0;
}
// 배열은 원본, 배열의 시작 주소가 전달됨.
int get_average(int score[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		sum += score[i];
		
	return sum / n;
}