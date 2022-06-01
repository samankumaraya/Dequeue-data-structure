#include <stdio.h>
#include <stdlib.h>

#define MAXDEQUEUE 20
#define TRUE 1
#define FALSE 0

typedef struct dequeue{
  int count;
  int rear;
  int front;
  int item[MAXDEQUEUE];
}Dequeue;

void Creatdequeue(Dequeue *dq){
 dq->count=0;
 dq->front=-1;
 dq->rear=-1;
}

int IsDequeueFull(Dequeue *dq){
  if(dq->front==-1 && dq->rear==MAXDEQUEUE-1 || dq->front=dq->rear+1)
    return 1;
}

int IsDequeueEmpty(Dequeue *dq){
  if(dq->front==-1)
    return 1;
}

void InsertRear(int x, Dequeue *dq){
 if(IsDequeueFull(dq)){
    printf("Dequeue is full");
    exit(1);
 }
 if(IsDequeueEmpty(dq)){
     dq->front=dq->rear=0;
 }
 else{
    if(dq->rear=MAXDEQUEUE-1){
        dq->rear=0;
    }else{
     dq->rear++;
     dq->item[dq->rear]=x;
    }
 }
}

void insertFront(int x,Dequeue *dq){
   if(IsDequeueFull(dq)){
    printf("Dequeue is full");
    exit(1);
 }
 if(IsDequeueEmpty(dq)){
     dq->front=dq->rear=0;
 }else{
    if(dq->front==0){
        dq->front=MAXDEQUEUE-1;
    }else
     dq->front--;
     dq->item[dq->front]=x
 }
}

void Deleterear(Dequeue *dq, int *x){
 if(IsDequeueEmpty(dq)){
    printf("Dequeue is underflow");
    exit(1);
 }
 *x=dq->item[dq->rear];

 if(dq->front=dq->rear){
    dq->front=dq->rear=-1;
 }else{
    if(dq->rear=0){
        dq->rear==MAXDEQUEUE-1;
    }else{
     dq->rear--;
    }
  }
}

void Deletefront(Dequeue *dq,int *x){
  if(IsDequeueEmpty(dq)){
    printf("Dequeue is underflow");
    exit(1);
 }
 *x=dq->item[dq->rear];

 if(dq->front=dq->rear){
    dq->front=dq->rear=-1;
 }else{
   if(dq->front==MAXDEQUEUE-1)
    dq->front=0;
 }else
  dq->front--;
}

void Display(Dequeue *dq){
int fro_pos=dq->front;
int rear_pos=dq->rear;

if(IsDequeueEmpty(dq)){
    printf("Dwqueue is empty...");
    exit(1);
}
printf("Queue Elements :");

if(for_pos<=rear_pos){
    while(for_pos<=rear_pos){
        printf("%d",dq->item[for_pods]);
        fro_pos++;
    }
}else{
    while(fro_pos<=MAXDEQUEUE){
        printf("%d",dq->item[fro_pos]);
        fro_pos++;
    }
    while(for_pos<=rear_pos){
        printf("%d",dq->item[for_pods]);
        fro_pos++;
    }

}

}




