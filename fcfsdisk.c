#include<stdio.h>
#include<stdlib.h>
void main(){
  int i,n,head,seektime,difference;
  printf("Enter the no:of disk requests\n");
  scanf("%d",&n);
  printf("Enter the head position\n");
  scanf("%d",&head);
  int queue[n];
  printf("Enter the requests\n");
  for(i=1;i<=n;i++){
    scanf("%d",&queue[i]);
    }
    queue[0]=head;
    printf("FCFS SCHEDULING\n");
  for(i=0; i<n; i++){
    difference=abs(queue[i]-queue[i+1]);
    printf("Head movement from %d to %d is %d\n",queue[i],queue[i+1],difference);
    seektime+=difference;
    }
    printf("Total seek time=%d\n",seektime);
 }   
    
    
  
