// Student name:Abhishek jain
// Ilab machine used:ilab4.cs
// netid:aj763

#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <assert.h>
long nanosec(struct timeval t){ 
        return((t.tv_sec*1000000+t.tv_usec)*1000);
}

int main(int argc, char *argv[]){
        int i,j,s;
        long Niterations=(500*1024); 
        float avgTimeSysCall;
        struct timeval t1, t2;
        FILE *file = NULL;
        unsigned char buffer[4*1024];
        size_t bytesRead = 0;
		int k=0;
        
        file = fopen("file512.txt", "rb");
        s=gettimeofday(&t1,NULL); assert(s==0);
        if(file!=NULL){	    

                while((bytesRead = fread(buffer, 1, sizeof(buffer), file))){
					k++;
				}
					
        }
        s=gettimeofday(&t2,NULL);   assert(s==0);       
        avgTimeSysCall = (nanosec(t2) - nanosec(t1))/(Niterations*1.0);
	printf("Total system calls%d",k);
        printf("Average time for System call is: %f\n",avgTimeSysCall);
        printf("Total number of iterations are: %ld\n", Niterations);
}

