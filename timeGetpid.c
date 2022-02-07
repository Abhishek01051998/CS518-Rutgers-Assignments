// Student name:Abhishek jain
// Ilab machine used:ilab4.cs
// netid:aj763

#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <assert.h>

// Place any necessary global variables here




long nanosec(struct timeval t){
  return((t.tv_sec*1000000+t.tv_usec)*1000);
}

int main(int argc, char *argv[]){
 int i,j,result;
  long iterations=1000000;
  float avgTSysCall;
  struct timeval t1, t2;

  result=gettimeofday(&t1,NULL);
  for (i=0;i<iterations; i++){
    j=getpid();
  }
  result=gettimeofday(&t2,NULL);
  avgTSysCall = (nanosec(t2) - nanosec(t1))/(iterations*1.0);



  printf("total no of system calls : %ld \n",iterations);
  printf("Average time for System call getpid : %f microseconds \n",avgTSysCall);
  printf("total time elapsed : %ld microseconds \n",t2.tv_sec);

}




