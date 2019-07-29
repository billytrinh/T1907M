#include <stdio.h>

int main(){
	int T = 1000,S = 8,i;

	// while(T<2000){
	// 	T = T + S*T/100;
	// 	n++;
	// }

	// do{
	// 	T = T+ S*T/100;
	// 	n++;		
	// }while(T<2000);

	for(i=0;T<2000;i++){
		if(i!=3){
			T = T + S*T/100;
		}else{
			continue;
		}
		
		if(i>=5){
			break;
		}
	}

	printf("So nam can gui: %d\n",i);

	return 0;
}