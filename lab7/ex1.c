#include<stdio.h>
#include<conio.h>

void main()
{
	int as, wrt, prt;
	char name[30];
	printf("Ho va ten: ");
	fgets(name, sizeof(name), stdin);
	printf("Nhap diem ASM:");
	scanf("%d", &as);
	printf("Nhap vao diem written: ");
	scanf("%d", &wrt);
	printf("Nhap vao diem practice: ");
	scanf("%d", &prt);
	if(as >= 4 && as <=10)
	{
		puts(name);
		printf("Diem ASM cua ban la: %d/10 \n\tDU DIEM QUA MON!\n", as);
	}
	else if (as > 10)
		printf("\n\tSO DIEM KHONG HOP LE!\n");
	else
		printf("\nBan khong du diem qua mon ASM\n\tTHI LAI!\n\n");
	
	
	if(wrt >=40 && wrt<=100)
		printf("Diem written cua ban la: %d/100 \n\tDU DIEM QUA MON!\n", wrt);
	else if (wrt > 100)
		printf("\n\tSO DIEM KHONG HOP LE!\n");
	else
		printf("\nBan khong du diem qua mon writen\n\tTHI LAI!\n");
	
	if(prt >=6 && wrt<=15)
		printf("Diem practice cua ban la: %d/15 \n\tDU DIEM QUA MON!\n", prt);
	else if (prt > 15)
		printf("\n\tSO DIEM KHONG HOP LE!\n");
	else
		printf("\nBan khong du diem qua mon practice\n\tTHI LAI!\n");
		
	
}
