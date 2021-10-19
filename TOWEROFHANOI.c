#include<stdio.h>

void TowerofHanoi(int n,char start,char dest,char helper){
    if(n>0){
	TowerofHanoi(n-1,start,helper,dest);
	printf("%c to %c\n",start,dest);
	TowerofHanoi(n-1,helper,dest,start);
}
}

int main(){
	TowerofHanoi(3,'A','B','C');
}
