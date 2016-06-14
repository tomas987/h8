#include "3052.h"

main(){
	long i,j,a,b;
	while(1){
		a=1;
		P1.DDR=0xff;
		while(a<=128){
			P1.DR.BYTE=a;
			for(i=0;i<=100000;i++);
			a=a*2;
		}
		a=a/2;
		while(a>=1){
			P1.DR.BYTE=a;
			for(i=0;i<=100000;i++);
			a=a/2;
		}
	}		
}
