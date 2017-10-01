#include <stdio.h>

int main() {
  int a[5];
  int p[5];
  int n, j=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
        if(1 % a[0] != 0 && 1 % a[1] != 0 && 1 % a[2] != 0 && 1 % a[3] != 0 && 1 % a[4] != 0 ){
		printf("-");
	}
	for(j=0; j<5; j++){
		if(a[j] == 1){
			printf("%d", j);	
		}
		if(j==4){
				printf("\n");
			}
	}
	
  for (int i=2; i<=n; i++) {
        if(i % a[0] != 0 && i % a[1] != 0 && i % a[2] != 0 && i % a[3] != 0 && i % a[4] != 0 ){
		printf("-");
	}
	for(j=0; j<5; j++){
    	if(i % a[j] == 0){
    		printf("%d", j);
		}
		if(j==4){
			  	printf("\n");		
			}
	}
	
  }

  return 0;
}
