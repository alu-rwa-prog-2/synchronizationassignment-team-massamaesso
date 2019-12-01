#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
pthread_mutex_t mutex;//declaration of thread that would be allow us to use same resources
 
int numberofpizza=4; //maximum number of pizza that can be in the tray
 // client consume function
void*clientconsume(void*arg){
 
while(1){
        int pthread_mutex_lock(pthread_mutex_t*mutex);
 
if(numberofpizza>0){
  numberofpizza=numberofpizza-1;
  printf("Client ate pizza: %d\n",numberofpizza);
}
else if(numberofpizza==0){
    printf("the tray is empty wait chef\n");
  return NULL;
}
}
    int pthread_mutex_unlock(pthread_mutex_t*mutex);
 
}
// chef produce function
void*chefproduce(void*arg){
while(1){
int pthread_mutex_lock(pthread_mutex_t*mutex);
 
if(numberofpizza<4){
  numberofpizza=numberofpizza+1;
  printf("chef produce a pizza: %d\n",numberofpizza);
}
else if(numberofpizza==4){
    printf("the tray is full\n");
  return NULL;
}
}
        int pthread_mutex_unlock(pthread_mutex_t*mutex);
 
}
int main(){
pthread_t client;
pthread_t chef;
 
pthread_create(&client,NULL,clientconsume,NULL);
pthread_create(&chef,NULL,chefproduce,NULL);
 
pthread_join(client,NULL);
pthread_join(chef,NULL);
 
return 0;
}


