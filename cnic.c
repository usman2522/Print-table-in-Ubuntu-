#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	int pid,status;
	pid=fork();
	if(pid==0)
	{
		int num=9;
		for(int i=1; i<=10; i++){
			printf("%d * %d = %d\n",num, i, num*i);
		}
	}
	else{
		wait(&status);
		printf("in the Parent Process : \n Name Muhammad Usman and CNIC 3650275815057");
	}
	return 0;
}
