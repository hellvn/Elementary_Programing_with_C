#include<stdio.h>

void main()
{
	int r;
	float s, c;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%d", &r);
	s = dientich(r);
	printf("\nDien tich cua hinh tron la: %.1f", s);
	c = chuvi(r);
	printf("\nChu vi cua hinh tron la: %.1f", c);
}
	dientich(int x)
	{
		float d;
		d = (x * x)*3.14;
		return(d);
	}
	chuvi(int y)
	{
		float e;
		e = (y * 2)*3.14;
		return(e);
	}
