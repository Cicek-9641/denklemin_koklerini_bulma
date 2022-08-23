#include<stdio.h>
#include<math.h>

// ax^2 +bx +c þeklindeki denklemin köklerini bulma;

int main(){
	float a,b,c;
	float kok1,kok2;
	float delta,gercekKisim,imaginerKisim;
	
	printf("denklemin a'sini giriniz:");
	scanf("%f" , &a);
	printf("denklemin b'sini giriniz:");
	scanf("%f" , &b);
	printf("denklemin c'sini giriniz:");
	scanf("%f" , &c);
	
	delta = (b*b - 4*a*c);
	if(delta > 0)
	{
		kok1 = ((-b + (sqrt(delta)) ) / (2*a));
	    kok2 = ((-b - (sqrt(delta)) ) / (2*a));
	    printf("denklemin 1. koku %.2f , 2. koku %.2f dir" , kok1,kok2);
	}
	
	else if (delta == 0)
	{
		kok1 = kok2 = -b/(2*a);
		printf("kok1 esittir kok2 ye = %.2f  ",kok1,kok2);		
	}
	else
	{
		gercekKisim = -b/(2*a);
		imaginerKisim = sqrt(-delta)/(2*a);
		printf(" kok1 = %.2f + %.2fi ve kok2 = %.2f - %.2fi", gercekKisim, imaginerKisim, gercekKisim, imaginerKisim);	}
	
	return 0;
	
}



















