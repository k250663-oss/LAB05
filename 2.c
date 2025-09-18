#include<stdio.h>
int main(){
	int dept;
	printf("1.Engineering \n 2.Medicine \n 3.Business \n choose:");
	scanf("%d",&dept);
	
	switch(dept){
		case 1:
			printf("chosen dept : engineering");
			printf("\n1.mechanical \n 2.electronic \n choose:");
			scanf("%d",&dept);
			switch(dept){
				case 1:
					printf("chosen dept : mechanical");
		
					printf("\n1.lab \n 2.theory \n choose:");
					scanf("%d", &dept);
					switch(dept){
						case 1:
							printf("chosen : lab");
							break;
						case 2:
							printf("chosen:theory");
							break;
						default:
							printf("invalid");
					}
					break;
				case 2:
					printf("chosen dept :electronic");
					printf("\n1.lab \n 2.theory \n choose:");
					scanf("%d", &dept);
					switch(dept){
						case 1:
							printf("chosen : lab");
							break;
						case 2:
							printf("chosen:theory");
							break;
						default:
							printf("invalid");
				
					break;
			}
}
			break;
			case 2:
			printf("chosen dept : medicine");
			printf("\n1.mbbs \n 2.bds \n choose:");
			scanf("%d",&dept);
			switch(dept){
				case 1:
					printf("chosen dept : mbbs");
		
					printf("\n1.lab \n 2.theory \n choose:");
					scanf("%d", &dept);
					switch(dept){
						case 1:
							printf("chosen : lab");
							break;
						case 2:
							printf("chosen:theory");
							break;
						default:
							printf("invalid");
					}
					break;
				case 2:
					printf("chosen dept :bds");
					printf("\n1.lab \n 2.theory \n choose:");
					scanf("%d", &dept);
					switch(dept){
						case 1:
							printf("chosen : lab");
							break;
						case 2:
							printf("chosen:theory");
							break;
						default:
							printf("invalid");
		}
	}
			break;
			case 3:
			printf("chosen dept : business");
			printf("\n1.bba \n 2.acf \n choose:");
			scanf("%d",&dept);
			switch(dept){
				case 1:
					printf("chosen dept : bba");
		
					printf("\n1.lab \n 2.theory \n choose:");
					scanf("%d", &dept);
					switch(dept){
						case 1:
							printf("chosen : lab");
							break;
						case 2:
							printf("chosen:theory");
							break;
						default:
							printf("invalid");
					}
					break;
				case 2:
					printf("chosen dept :acf");
					printf("\n1.lab \n 2.theory \n choose:");
					scanf("%d", &dept);
					switch(dept){
						case 1:
							printf("chosen : lab");
							break;
						case 2:
							printf("chosen:theory");
							break;
						default:
							printf("invalid");
			break;
		
			printf("invalid");
	}
}
}
}

	
