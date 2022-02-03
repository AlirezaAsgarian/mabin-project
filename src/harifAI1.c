(paigah)-> hamsaye[0]=1; (paigah)-> hamsaye[1]=3;                                                                                       (paigah)->toolesh=2;
(paigah+1)-> hamsaye[0]=0; (paigah+1)-> hamsaye[1]=2; (paigah+1)-> hamsaye[2]=4; (paigah+1)-> hamsaye[3]=3;                             (paigah+1)->toolesh=4;
(paigah+2)-> hamsaye[0]=1; (paigah+2)-> hamsaye[1]=4; (paigah+2)-> hamsaye[2]=5;                                                        (paigah+2)->toolesh=3;
(paigah+3)-> hamsaye[0]=0; (paigah+3)-> hamsaye[1]=1; (paigah+3)-> hamsaye[2]=4; (paigah+3)->hamsaye[3]=6; (paigah+3)->hamsaye[4]=7;    (paigah+3)->toolesh=5;
(paigah+4)-> hamsaye[0]=1; (paigah+4)-> hamsaye[1]=2; (paigah+4)-> hamsaye[2]=3; (paigah+4)->hamsaye[3]=5; (paigah+4)->hamsaye[4]=7;    (paigah+4)->toolesh=5;
(paigah+5)->hamsaye[0]=2; (paigah+5)-> hamsaye[1]=4; (paigah+5)->hamsaye[2]=7;                                                          (paigah+5)->toolesh=3;
(paigah+6)-> hamsaye[0]=3; (paigah+6)-> hamsaye[1]=7;                                                                                   (paigah+6)->toolesh=2;
(paigah+7)-> hamsaye[0]=3; (paigah+7)-> hamsaye[1]=4; (paigah+7)-> hamsaye[2]=5; (paigah+7)->hamsaye[3]=6;                              (paigah+7)->toolesh=4;
int *k=(int *)malloc(sizeof(int));
*k=0;
{
  int j=2;
  int i=0;
 // shomare_paigah_ba_bishtarin_tedad
  while((teamh+*k)->tedadekol != -1)
  { 
      (teamh+*k)-> shomare_paigah_ba_bishtarin_tedad= -1;
      (teamh+*k)-> tedadekol=0;
      while(i != 8)
      {
      if((paigah+i)->user == j){if((paigah+i)->sarbaz->tedadeshun > ((teamh+*k)-> shomare_paigah_ba_bishtarin_tedad)){(teamh+*k)-> shomare_paigah_ba_bishtarin_tedad= i;} (teamh+*k)-> tedadekol+=(paigah+i)->sarbaz->tedadeshun;}
      ++i;
      }
      if((teamh+*k)-> shomare_paigah_ba_bishtarin_tedad == -1){(teamh+*k)-> tedadekol=0;}
     // printf("(teamh+k)-> shomare_paigah_ba_bishtarin_tedad=%d (teamh+k)-> tedadekol=%d \n",(teamh+*k)-> shomare_paigah_ba_bishtarin_tedad,(teamh+*k)-> tedadekol);
      i=0;
      ++*k;
      ++j;
       }
} 


 
//////queue////////////////////////////////////
struct queue{
int *head;
int *back;
int *arr;
 };
struct queue *queue=(struct queue*)malloc(sizeof(struct queue)*(*k));
for(int i=0;i<*k;++i)
{
(queue+i)->head=(int *)malloc(sizeof(int));
(queue+i)->back=(int *)malloc(sizeof(int));
(queue+i)->arr=(int *)malloc(sizeof(int)*8);
(queue+i)->back[0]=0;
for(int i1=0;i1<8;++i1)
{
 (queue+i)->arr[i1]=-1;
}
}
free(k);
////////////////////////////////////////////////
///////////////////is_visited array/////////////
//printf("visited visited\n");
int *visited=(int *)malloc(sizeof(int)*8);

///////////////////////////////////////////////
///////////////////visited array///////////////
//printf("satl visited\n");
int *satle_queue=(int *)malloc(sizeof(int)*8); 

int *head_satle_queue=(int *)malloc(sizeof(int));

//printf("satl visited\n");
///////////////////////////////////////////////
void print_queue(struct queue* queue,int index)
{
  printf("\n");
  for(int i=0;i< (queue+index)->back[0];++i)
  {
    printf("arr[%d]=%d index=%d\n",i,(queue+index)->arr[i],index);
  }
  printf("\n");
}
void enqueue_hamsaye(struct queue* queue,int index)
{
static  int counter=0;
//  printf("index=%d\n",index);
while((queue+index)->arr[0] != -1)
{
 int *head_copy=(int *)malloc(sizeof(int));
 *head_copy= (queue+index)-> arr[0];
 *(visited+(queue+index)->arr[0])=1;
 //printf("queue-> arr[0]=%d queue+index)->back[0]=%d index=%d (paigah+*head_copy)->toolesh=%d head_copy=%d\n",(queue+index)-> arr[0],(queue+index)->back[0],index,(paigah+*head_copy)->toolesh,*head_copy);
 *(satle_queue+*head_satle_queue)=(queue+index)->arr[0];
 ++*head_satle_queue;
 int i;
 for( i=0;i<(queue+index)->back[0]; ++i)
 {
   //  printf("(queue+index)->back[0]=%d\n",(queue+index)->back[0]);   
       (queue+index)->arr[i]=(queue+index)->arr[i+1];
  //  printf("{{{{{{{{{{{{{{{{{(queue+index)->arr[%d]=%d ",i,(queue+index)->arr[i]);  
 } 
    printf("\n");
 (queue+index)->arr[i]= -1;
// printf("back=%d\n",(queue+index)->back[0]);
 -- (queue+index)->back[0];
//print_queue(queue,index);
int flag=0;
 for(int j=0; j<(paigah+*head_copy)->toolesh;++j)
 {
       if(*(visited+(paigah+*head_copy)->hamsaye[j]) != 1)
       { 
         //printf("(queue+index)->back[0]=%d (paigah+*head_copy)->hamsaye[j]=%d\n",(queue+index)->back[0],(paigah+*head_copy)->hamsaye[j]);
         *(visited+((paigah+*head_copy)->hamsaye[j]))=1;
         //printf("visited[0]=%d\n",*(visited));
         (queue+index)->arr[(queue+index)->back[0]]=(paigah+*head_copy)->hamsaye[j];
     //    printf("(queue+index)->arr[%d]=%d\n",(queue+index)->back[0], (queue+index)->arr[(queue+index)->back[0]]);
         ++(queue+index)->back[0];
       }  
 }
 //printf("salamda\n");
 


         int temp_tedad_sarbaz=(paigah+*head_copy)->sarbaz->tedadeshun; 
         if((paigah+*head_copy)->user==0 && (teamh)->tedadekol > (paigah+*head_copy)->sarbaz->tedadeshun)
         {
           int k=0;
         //  printf("index=%d\n",index);
       //   printf("*(satle_queue+ k)=%d k=%d",*(satle_queue+ k),k);
             while(*(satle_queue+ k) != -1)
             {//printf("salamda\n");
               
                if((paigah+*(satle_queue+ k))->sarbaz->tedadeshun >= temp_tedad_sarbaz){
                  flag=1;printf("k=%d *(satle_queue+ k)=%d index=%d\n",k,*(satle_queue+ k),index);
                    addlocation(*(satle_queue+ k), paigah,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination(*(head_copy),paigah,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;}
                else{temp_tedad_sarbaz-= (paigah+*(satle_queue+ k))->sarbaz->tedadeshun;}
               ++k;
             }
         //    
         }                                  
       if(flag){break;}
       // printf("(queue+index)->arr[0]=%d\n",(queue+index)->arr[0]);
       if(index==1){print_queue(queue,index);}
       free(head_copy);
}
      ++counter; 
       printf("counter=%d\n",counter);
}
//printf("(teamh+k)->tedadekol=%d\n",4);

void cheking_next_door()
{
  int k=0;
  static int counter=0;
  //printf("(teamh+k)->tedadekol=%d\n",(teamh+k)->tedadekol);
  while ((teamh+k)->tedadekol != -1)
  {
for(int i=0;i<8;++i)
{
  *(satle_queue+i)=-1;
  //printf("*(satle_queue+i)=%d\n",*(satle_queue+i));
}
for(int i=0;i<8;++i)
{
  *(visited+i)=0;
 // printf("*(visited+i)=%d\n",*(visited));
}
*head_satle_queue=0;
    //printf("(teamh+k)-> shomare_paigah_ba_bishtarin_tedad=%d (queue+k)->back[0]=%d k=%d\n",(teamh+k)-> shomare_paigah_ba_bishtarin_tedad,(queue+k)->back[0],k);
    (queue+k)->arr[0]=(teamh+k)-> shomare_paigah_ba_bishtarin_tedad;
  //  printf("(queue+k)->arr[0]=%d counter=%d\n",(queue+k)->arr[0],counter);
    ++(queue+k)->back[0];
    enqueue_hamsaye((queue),k);
   // printf("k=%d\n",k);
    ++k;
}
++counter;
}
if(counter_Time % 5000 == 0)
{
cheking_next_door(queue);
free(queue); free(head_satle_queue); free(satle_queue); free(visited);
}

/*if(head_sarbazRuHava1 != 0){ printf("hello\n");rendersoldiers(head_sarbazRuHava1,sarbazH1);
                            continuetomove(head_sarbazRuHava1,sarbazH1);}*/
      for(int i=0;i<*attack_number_Harif;++i)
      {
        rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
        continuetomove((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif);
      }

SDL_RenderPresent(renderer1);