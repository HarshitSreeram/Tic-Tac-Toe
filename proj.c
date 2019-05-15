#include<stdio.h>
int main(){
	int i,j,k=0,m,ch,l,x,y,c,n,h[100],e=0,flag = 0,z=1;
	char a[100][100];
	while(z){
		flag = 0;e = 0;
	printf("1.    First palyer is : O \n      Second Player is : X\n\n");
	printf("2.    First palyer is : X \n      Second Player is : O\n\n");
	printf("Enter 1 or 2 to choice the players : ");
	scanf("%d",&ch);
	switch(ch){
		case 1 : k = 0; m = 9;
				break;
		case 2 : k = 1; m = 10;break;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=2*(i+1)*(j+1);
		}
	}
		printf("\n\n\n");
	while(k<m){
	up:
	printf("Enter positions between 1 to 9 : ");
	scanf("%d",&n);
	
	for(i=0;i<=e-1 || n<1 || n>9 ;i++){
		if(h[i]==n){
			printf("Please Enter another position its already present  (OR)  its out of the bond\n");
			goto up;
		}
	}
	h[e] = n;
	e++;
	x=0;c=1;
	for(i=0;i<3;i++){
		y=0;
		for(j=0;j<3;j++){
			if(c == n){
				break;
			}
			y++;
			if(y<3){
				c++;
			}
		}
		if(c == n){
			break;
		}		
		x++;
		c++;
	}
	if(k%2 == 0){
		a[x][y]=0;
	}else{
		a[x][y]=1;
	}
	if(k>3){
		for(i=0;i<3;i++){
			int count1=0,count2 =0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,b=2,d=2;
			for(j=0;j<3;j++){
				if(a[i][j]==0){
					count1++;
				}
				if(a[i][j] == 1){
					count2++;
				}
				if(a[j][j] == 0){
					count3++;
				}
				if(a[j][j]==1){
					count4++;
				}
				if(a[j][i]==0){
					count5++;
				}
				if(a[j][i] == 1){
					count6++;
				}
				if(a[j][b] == 0 && b+j==2){
					count7++;b--;
				}
				if(a[j][d] == 1 && d+j == 2){
					count8++;d--;
				}
			}
			if(count1==3 ||count3==3||count5==3||count7 == 3){
				if(m!=10){
				printf("\n\nWinner is FIRST Player \n\n");
				}else{
					printf("\n\nWinner is SECOND Player \n\n ");
				}
				k=9;
				flag = 0;
				break;
			}else if(count2==3||count4==3||count6==3||count8 == 3){
				if(m!=10){
				printf("\n\nWinner is SECOND Player \n\n ");
				}else{
					printf("\n\nWinner is FIRST Player \n\n");
				}
				k=9;
				flag = 0;
				break;
			}else{
				flag = 1;
			}
		}
	}
	printf("\n\n");
//	printf("\t");
//	printf("===========");
//	printf("\n");
	printf("\t ");
	for(i=0;i<3;i++){
		if(i<2){
		printf("  | ");
		}
	}
	printf("\n\t");
	for(i=0;i<3;i++){
		printf(" ");
			for(j=0;j<3;j++){
				if(i==1 && (j==0)){
						for(l=0;l<3;l++){
							
							if(l<2){
							printf("  | ");
							}
						}
						printf("\n\t ");
					}
					
				if(a[i][j]==1 || a[i][j]==0){
					if(a[i][j]==1){
						printf("X");
					}else{
						printf("O");
					}
				//printf("%d",a[i][j]);
				if(j<2){
					printf(" | ");
				}
				}else{
					if(j<2){
					printf("  | ");
					}
				}
			}if(i<2){
			printf("\n\t");
			for(l=0;l<11;l++){
				if(l==3 || l==7){
					printf("|");
				}else{
					printf("-");
				}
			}
			printf("\n");
			}
			printf("\t");
		}
		printf("\n\t ");	
	for(i=0;i<3;i++){
		if(i<2){
		printf("  | ");
		}
	}
	
		printf("\n");
		//printf("\t===========");
		printf("\n\n");
	k++;
	}
	if(flag == 1){
		printf("\n\nDraw Game \n\n");
	}
	printf("1.----------Play Again-------\n2.----------Exit-------------\n\nEnter a choice to Play Again (OR) Exit : ");
	scanf("%d",&z);
	switch(z){
		case 1 : z = 1;break;
		case 2 : z = 0;break;
	}
	}
}
