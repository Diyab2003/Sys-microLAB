#include<stdio.h>
void main(){
 int limit,i;
 printf("Enter the no: of processes:");
 scanf("%d",&limit);
 int process[limit],bt[limit],wt[limit],tat[limit];
 printf("Enter the processes and their corressponding burst time\n");
 for(i=0;i<limit;i++){
   scanf("%d%d",&process[i],&bt[i]);
 }
 wt[0]=0;
 tat[0]=bt[0];
 float tot_wt=0;
 float tot_tat=0;
 for(i=1;i<limit;i++){
   wt[i]=wt[i-1]+bt[i-1];
   tat[i]=tat[i-1]+bt[i];
   tot_wt=tot_wt+wt[i];
   tot_tat=tot_tat+tat[i];
 }
 
 printf("Process\tbt\twt\ttat\n");
  for(i=0;i<limit;i++){
    printf("%d\t%d\t%d\t%d\n",process[i],bt[i],wt[i],tat[i]);
  }
  printf("Total wt=%.2f\nTotal tat=%.2f\nAverage wt=%.2f\nAverage tat=%.2f\n",tot_wt,tot_tat,tot_wt/limit,(tot_tat/limit));
 printf("GANTT CHART\n");
 for(i=0;i<limit;i++){
 printf("  P%d\t",process[i]);
 }
int x=0;
printf("\n0\t");
for(i=0;i<limit;i++){
 x=x+bt[i];
 printf("%d\t",x);
 }
 printf("\n");
}
 
 
  




