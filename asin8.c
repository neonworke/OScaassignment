#include<stdio.h>

int main()
 {
   int a,n,tq,awt,att,m;
   int pr[10],tp[10],bt[10],wait[10],time[10],at[10];
 
 
   printf("No. of  process user wants to enter: ");
   scanf("%d",&n);
   printf("\nEnter time quantum mentioned: ");
   scanf("%d",&tq);
   printf("\n\t Burst_Time : Time_Priorities : Arrival_Time  \n");
 
   for(m=0;m<n;m++)
    {
      printf("\n Process %d ",m+1);
      scanf("%d %d %d",&bt[m],&tp[m],&at[m]);
  pr[m]=m+1;
    }
 

 int p;
  for(m=0;m<n-1;m++)
  {
   for(p=m+1;p<n;p++)
    {
     if(tp[m]<tp[p])
      {
       a=tp[m];
     tp[m]=tp[p];
     tp[p]=a;
     a=bt[p];
     bt[m]=bt[p];
     bt[p]=a;
     a=pr[p];
     pr[m]=pr[p];
     pr[p]=a;
      }
   }
}
wait[0]=0;
awt=0;
time[0]=bt[0];
att=time[0];
for(m=1;m<n;m++)
 {
 	if(tq<n || tq>n) {

   wait[m]=time[m-1];
   awt=awt+wait[m];
   time[m]=wait[m]+bt[m];
   att=att+time[m];
}
 }
 
 //Gantt chart
 printf("\n");
 printf("Gantt chart\n");
 for(m=0;m<n;m++)
 {
 	printf("P %d ",pr[m]);
 }
  printf("\n\nProcess \t Burst_Time \t Wait_Time \t Turn_Around_Time   Priority \tArrival_Time \n");
  for(m=0;m<n;m++)
   {
     printf("\n  %d",pr[m]); printf("\t\t %d",bt[m]); printf("\t\t %d",wait[m]); printf("\t\t %d",time[m]); printf("\t\t %d",tp[m]); printf("\t\t %d",at[m]);
   }
awt=awt/n;
att=att/n;
printf("\n Average Wait Time : %d ",awt);
printf("\n Average Turn Around Time : %d",att);
getch();
}
