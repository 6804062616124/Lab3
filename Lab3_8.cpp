#include <stdio.h>
int main(void) {
	
	int hour, min, sec, next_min;
	scanf("%d:%d:%d", &hour, &min, &sec);
	
	printf("Next minutes: ");
	scanf("%d", &next_min);
	
	min = min + next_min;
	hour = hour + (min / 60);
	min = min % 60;
	

	printf("hour:%d \nminute:%d \nsecond:%d", hour, min, sec);

	return 0;
}
