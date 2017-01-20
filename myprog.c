#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char** argv){
 
  int rtime,wtime;
  if(argc==1)
  {
    printf(1,"No Commands given\n");
    waitx(&rtime,&wtime);
    printf(1,"\nRunning Time:%d Ticks\nWaiting Time:%d Ticks\n",rtime,wtime);
  }    

  else if(fork()==0)
  {if(exec(argv[1],argv+1)==-1)printf(1,"Wrong Command\n");}
  else{

waitx(&rtime,&wtime);
printf(1,"\nRunning Time:%d Ticks\nWaiting Time:%d Ticks\n",rtime,wtime);
  }
exit();
}
