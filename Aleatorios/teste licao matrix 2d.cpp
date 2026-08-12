#include<stdio.h>
#include<math.h>
int main(){
			int a[10], b[10][3], i, j, fat;
			//cadê o printf e scanf???
			for(i=0; i<10; i++){
			scanf("%i", &a[i]);	
		}
			for(j=0; j<3; ++j){
				for(i=0; i<10; i++){
					if(j==0){
						b[i][j]=a[i]+5;
					}
					if(j==1){
						b[i][j]=1;
						for(fat=1; fat<=a[i]; fat++){
						b[i][j] *= fat;
					}
				}
				if(j==2){
					b[i][j]= pow(a[i], 2);
				}					
			}
		}
	for(i=0; i<10; i++){
		for(j=0; j<3; ++j){
			printf("%i ", b[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
