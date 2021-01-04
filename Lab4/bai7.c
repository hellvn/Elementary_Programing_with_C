#include<stdio.h>

int main()
{
	int choice=1, i;
	float a, b, r, s, c;
	char addflag;
	while(choice<4)
	{
		printf("Chuong trinh tinh chu vi dien tich: \n\n");
		printf("Xin moi chon:\n\n 1.Hinh chu nhat.\n 2.Hinh vuong.\n 3.Hinh tron.\n 4.Ket thuc chuong trinh.\n\nLua chon cua ban: ");
		scanf("%d", &choice);
		  if (choice==1)
		  {
		  	addflag='y';
		  	for(i=0;i<4 && addflag=='y'; i++);
		  	{
		  		printf("Tinh chu vi, dien tich hinh chu nhat: \n");
		  		printf("Nhap vao chieu dai hinh chu nhat: ");
		  		scanf("%f", &a);
		  		printf("Nhap vao chieu rong hinh chu nhat: ");
		  		scanf("%f", &b);
		  		printf("* Chu vi hinh chu nhat la: %.2f\n", (a+b)*2);
		  		printf("* Dien tich hinh chu nhat la: %.2f\n", a*b);
		  		fflush(stdin);
		  		printf("Tiep tuc? (y/n): ");
		  		scanf("%c", &addflag);
		  		
			  }
		  }
		  else if(choice==2)
		  {
		  	addflag='y';
		  	for(i=0;i<4 && addflag=='y';i++);
		  	{
		  		printf("Tinh chu vi, dien tich hinh vuong:\n");
		  		printf("Nhap vao canh cua hinh vuong: ");
		  		scanf("%f", &a);
		  		printf("* Chu vi cua hinh vuong la: %.2f\n", a*4);
		  		printf("* Dien tich hinh vuong la: %.2f\n", a*a);
		  		fflush(stdin);
		  		printf("Tiep tuc? (y/n): ");
		  		scanf("%c", &addflag);
			  }
		  }
		  else if(choice==3)
		  {
		  	addflag='y';
		  	for(i=0;i<4 && addflag=='y';i++);
		  	{
		  		printf("Tinh chu vi, dien tich hinh tron:\n");
		  		printf("Nhap vao ban kinh hinh tron: ");
		  		scanf("%f", &r);
		  		printf("* Chu vi hinh tron la: %.2f\n", r*2*3.14);
		  		printf("* Dien tich hinh tron la: %.2f\n", r*r*3.14);
		  		fflush(stdin);
		  		printf("Tiep tuc? (y/n): ");
		  		scanf("%c", &addflag);
			  }
		  }
	}
}
