#include<stdio.h>
int cal_parking_charge(int minute);

int main(void)
{
	int minute, pay;
	printf("������ �ð��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &minute);
	pay = cal_parking_charge(minute);
	printf("����� %d���Դϴ�.\n", pay);
	return 0;
}
int cal_parking_charge(int time)
{
	int result, minute, pay, day=0, hour;
	minute = time;
	hour = minute / 60;
	if (hour > 24)
	{
		day += hour / 24;
		hour -= day * 24;
		minute -= day * 1440;
	}

	if (hour > 4)
		minute -= hour*60;


	minute = minute / 10;

	result = day * 25000 + minute * 1000;
	return result;
}