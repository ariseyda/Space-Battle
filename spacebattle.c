#include<stdio.h>

//Space Battle

/*There are a bunch of rockets in space lined up in a row.
You are given a list of integers nums representing each rocket's size and direction. 
If the number is positive it's going right, and if it's negative it's going left. The value of the number represents the rocket's size.
If two rockets collide, the smaller one will disappear and the larger one will continue on its course unchanged. 
If they are the same size and they collide, they'll both explode (both numbers are removed). 
If two rockets are moving in the same direction, they will never collide. 
The rockets start out equally spaced in the given order and all move at the same speed and become harmless after exploding.
Return the state of the rockets after all collisions.*/


void _print(int array[],int n){
	
	int i;
	printf("\n[");
	for(i=0;i<n;i++){
		printf("%d",array[i]);
		if(i<n-1){
			printf(",");
		}
	}
	printf("]");
}


int main(){
	
	int n,i,j;
	printf("Enter number of rockets:");
	scanf("%d",&n);
	int array[n];
	printf("Enter integers nums representing each rocket's size and direction:");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	_print(array,n);
	
	
	
	
	for(i=0;i<n;i++){
		if(array[i]<0){
			for(j=0;j<i;j++){
				if(array[j]<(-array[i])&&array[j]>0){
					array[j]=0;
				}
				else if(array[j]==(-array[i])&&array[j]>0){
					array[j]=0;
					array[i]=0;
				}
			}
		}
	}
	
	int count=0;
	printf("\n[");
	for(i=0;i<n;i++){
		if(array[i]!=0){
			if(count!=0){
				printf(",");
			}
			printf("%d",array[i]);
			count++;
		}
		
	}
	printf("]");
	
	
	
	
	
	
	
	
	return 0;
}
