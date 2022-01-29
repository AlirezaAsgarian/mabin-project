//printf("salam AI\n");


if(*counter_temp>500){*counter_temp=1002;}
else{*counter_temp+=50;}

int *k=(int *)malloc(sizeof(int));
*k=0;
for(int i=0;i<tedad1;++i)
{
  int head_hamsaye=0;
    for(int j=0;j<tedad1;++j)
    {    
        if(j==i){continue;}
      //  printf("%d - %d = abs(%d)\n",paigahs[i],paigahs[j],abs(paigahs[i]-paigahs[j]));
        if(paigahs[i]%4 == paigahs[j]%4 && abs(paigahs[i]-paigahs[j])<5){(paigahss+i)->hamsaye[head_hamsaye]=j;  ++head_hamsaye;}
        if(paigahs[i] == paigahs[j]+1 && paigahs[i]%4 != 1){(paigahss+i)->hamsaye[head_hamsaye]=j;  ++head_hamsaye;}
        if(paigahs[i] == paigahs[j]-1 && paigahs[i]%4 != 0){(paigahss+i)->hamsaye[head_hamsaye]=j;  ++head_hamsaye;}
    } 
    (paigahss+i)->toolesh= head_hamsaye;
  //  printf("paigahs=%d \n",paigahs[i]);
}
{
  int j=2;
  int i=0;
  /////////////user team tahlil////////////////////////
      (user_team)-> shomare_paigah_ba_bishtarin_tedad= -1;
      (user_team)-> tedadekol=0;
      while(i != tedad1)
      {
      if((paigahss+i)->user == 1 && (paigahss+i)->sarbaz->tedad_credit>0 ){if((paigahss+i)->sarbaz->tedad_credit > (((user_team)-> shomare_paigah_ba_bishtarin_tedad)+1)){(user_team)-> shomare_paigah_ba_bishtarin_tedad= i;} (user_team)-> tedadekol+=(paigahss+i)->sarbaz->tedad_credit;}
      ++i;
      }
      if((user_team)-> shomare_paigah_ba_bishtarin_tedad == -1){(user_team)-> tedadekol=0;}
     // printf("(teamh+k)-> shomare_paigah_ba_bishtarin_tedad=%d (teamh+k)-> tedadekol=%d \n",(teamh+*k)-> shomare_paigah_ba_bishtarin_tedad,(teamh+*k)-> tedadekol);
      i=0;
      ///////////////// /////////////////////////
 // shomare_paigah_ba_bishtarin_tedad
  while((teamh+*k)->tedadekol != -1)
  { 
      (teamh+*k)-> shomare_paigah_ba_bishtarin_tedad= -1;
      (teamh+*k)-> tedadekol=0;
      while(i != tedad1)
      {
      if((paigahss+i)->user == j && (paigahss+i)->sarbaz->tedad_credit>0 ){if((paigahss+i)->sarbaz->tedad_credit > (((teamh+*k)-> shomare_paigah_ba_bishtarin_tedad)+1)){(teamh+*k)-> shomare_paigah_ba_bishtarin_tedad= i;} (teamh+*k)-> tedadekol+=(paigahss+i)->sarbaz->tedad_credit;}
      ++i;
      }
      if((teamh+*k)-> shomare_paigah_ba_bishtarin_tedad == -1){(teamh+*k)-> tedadekol=0;}
     // printf("(teamh+k)-> shomare_paigah_ba_bishtarin_tedad=%d (teamh+k)-> tedadekol=%d \n",(teamh+*k)-> shomare_paigah_ba_bishtarin_tedad,(teamh+*k)-> tedadekol);
      i=0;
      ++*k;
      ++j;
       }
} 
//printf("salam AI Team\n");
int cmpfunc (const void * a, const void * b) {
  if(*(int*)a == -1){return 1;}
  if(*(int*)b == -1){return -1;}
   return -( (paigahss+*(int*)a)->sarbaz->tedad_credit - (paigahss+*(int*)b)->sarbaz->tedad_credit );
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
(queue+i)->arr=(int *)malloc(sizeof(int)*13);
(teamh+i)->shomare_paigah_ha=(int *)malloc(sizeof(int)*13);
(queue+i)->back[0]=0;
//(teamh+i)->shomare_paigah_ha=(int *)malloc(sizeof(int)*8);
//printf("*k=%d\n",*k);
for(int i1=0;i1<8;++i1)
{
  if((paigahss+i1)->user == i+2 && (paigahss+i1)->sarbaz->tedad_credit>0){(teamh+i)->shomare_paigah_ha[i1]=i1;}
  else{(teamh+i)->shomare_paigah_ha[i1]= -1;}
 // printf("(team+%d)->shomare_paigah_ha[%d]=%d\n",i,i1,(teamh+i)->shomare_paigah_ha[i1]);
 (queue+i)->arr[i1]=-1;
}
qsort((teamh+i)->shomare_paigah_ha,8, sizeof(int), cmpfunc);
//printf("i=%d\n",i);
}
//printf("queue made succesfully\n");
free(k);
////////////////////////////////////////////////
///////////////////is_visited array/////////////
//printf("visited visited\n");
int *visited=(int *)malloc(sizeof(int)*13);

///////////////////////////////////////////////
///////////////////visited array///////////////
//printf("satl visited\n");
int *satle_queue=(int *)malloc(sizeof(int)*13); 

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
///////////////////hamle be hamsaye///////////////////////////////////////////////////////////////////////////////////////
void enqueue_hamsaye(struct queue* queue,int index)
{
static  int counter=0;
   
while((queue+index)->arr[0] != -1)
{
  
 int *head_copy=(int *)malloc(sizeof(int));
 *head_copy= (queue+index)-> arr[0];
 *(visited+(queue+index)->arr[0])=1;
 //printf("queue-> arr[0]=%d queue+index)->back[0]=%d index=%d (paigah+*head_copy)->toolesh=%d head_copy=%d\n",(queue+index)-> arr[0],(queue+index)->back[0],index,(paigahss+*head_copy)->toolesh,*head_copy);
 *(satle_queue+*head_satle_queue)=(queue+index)->arr[0];
 ++*head_satle_queue;
 int i;
 for( i=0;i<(queue+index)->back[0]; ++i)
 {
   //  printf("(queue+index)->back[0]=%d\n",(queue+index)->back[0]);   
       (queue+index)->arr[i]=(queue+index)->arr[i+1];
  //  printf("{{{{{{{{{{{{{{{{{(queue+index)->arr[%d]=%d ",i,(queue+index)->arr[i]);  
 } 
    //printf("\n");
 (queue+index)->arr[i]= -1;
// printf("back=%d\n",(queue+index)->back[0]);
 -- (queue+index)->back[0];
//print_queue(queue,index);
int flag=0;
//print
 for(int j=0; j<(paigahss+*head_copy)->toolesh;++j)
 {
       if(*(visited+(paigahss+*head_copy)->hamsaye[j]) != 1)
       { 
        // printf("(queue+index)->back[0]=%d (paigah+*head_copy)->hamsaye[j]=%d paigah=%d\n",(queue+index)->back[0],(paigahss+*head_copy)->hamsaye[j],paigahs[(paigahss+*head_copy)->hamsaye[j]]);
         *(visited+((paigahss+*head_copy)->hamsaye[j]))=1;
         //printf("visited[0]=%d\n",*(visited));
         (queue+index)->arr[(queue+index)->back[0]]=(paigahss+*head_copy)->hamsaye[j];
     //    printf("(queue+index)->arr[%d]=%d\n",(queue+index)->back[0], (queue+index)->arr[(queue+index)->back[0]]);
         ++(queue+index)->back[0];
       }  
 }
 //printf("salamda\n");
 


         int temp_tedad_sarbaz=(paigahss+*head_copy)->sarbaz->tedad_credit;
         if((paigahss+*head_copy)->user==0 && (teamh+index)->tedadekol > (paigahss+*head_copy)->sarbaz->tedad_credit)
         {
                   // printf("headcopy=%d (paigah+*head_copy)->user=%d\n",*head_copy,(paigahss+*head_copy)->user); 

           int k=0;
         //  printf("index=%d\n",index);
       
       //   printf("*(satle_queue+ k)=%d k=%d",*(satle_queue+ k),k);
             while((teamh+index)->shomare_paigah_ha[k] != -1)
             {//printf("salamda\n");
             //  printf("k=%d\n",k);
                if((paigahss+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
               //     printf("index=%d\n",index);
                 // printf("k=%d *(satle_queue+ k)=%d index=%d\n",k,(teamh+index)->shomare_paigah_ha[k],index);
                    addlocation((teamh+index)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destination(*(head_copy),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
              //      printf("*attack_number_Harif=%d (paigah+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedadeshun=%d temp_tedad_sarbaz=%d\n",*attack_number_Harif,(paigah+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit,temp_tedad_sarbaz);
                  break;
                  }
                else{
               if( (paigahss+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+index)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination(*(head_copy),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigahss+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit;
              //    printf("yes\n");
                  }
               ++k;
             }
         //    
         }      
         free(head_copy);                            
       if(flag){break;}
       // printf("(queue+index)->arr[0]=%d\n",(queue+index)->arr[0]);
       //if(index==1){print_queue(queue,index);}
       
}
      ++counter; 
   //    printf("counter=%d\n",counter);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void hamle_be_bishtarin(int *ok_or_not)
{
 int temp_tedad_sarbaz=(paigahss+ (user_team)-> shomare_paigah_ba_bishtarin_tedad)->sarbaz->tedad_credit;
   int i=0;
    while ((teamh+i)->tedadekol != -1)
    {
      int flag=0;
         if((teamh+i)->tedadekol > (paigahss+(user_team)-> shomare_paigah_ba_bishtarin_tedad)->sarbaz->tedadeshun)
         {
           int k=0;
         //  printf("index=%d\n",index);
       
       //   printf("*(satle_queue+ k)=%d k=%d",*(satle_queue+ k),k);
             while((teamh+i)->shomare_paigah_ha[k] != -1)
             {//printf("salamda\n");
              // printf("k=%d\n",k);
                if((paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
               //     printf("index=%d\n",index);
                 // printf("k=%d *(satle_queue+ k)=%d index=%d\n",k,(teamh+index)->shomare_paigah_ha[k],index);
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destination((user_team)-> shomare_paigah_ba_bishtarin_tedad,paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                 //   ((paigah+(teamh+index)->shomare_paigah_ha[k]))->shomare_dastoor[0]=*attack_number_Harif;
                    ++*attack_number_Harif;
                   // printf("*attack_number_Harif=%d (paigah+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedadeshun=%d temp_tedad_sarbaz=%d\n",*attack_number_Harif,(paigah+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit,temp_tedad_sarbaz);
                  break;
                  }
                else{
               if( (paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination((user_team)-> shomare_paigah_ba_bishtarin_tedad,paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                  //  ((paigah+(teamh+index)->shomare_paigah_ha[k]))->shomare_dastoor[0]=*attack_number_Harif;
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigahss+((teamh+i)->shomare_paigah_ha[k]))->sarbaz->tedad_credit;
                 // printf("yes\n");
                  }
                   if(flag){break;}
               ++k;
             }
            
         }
         if(flag){*ok_or_not=0;break;}
         ++i;
       }
}
void hamle_be_makane_khali()
{
 int temp_tedad_sarbaz=(paigahss+ (user_team->hadaf))->sarbaz->tedad_credit;
   int i=0;
    while ((teamh+i)->tedadekol != -1)
    {
      int flag=0;
         if((teamh+i)->tedadekol > (paigahss+(user_team->hadaf))->sarbaz->tedadeshun)
         {
           int k=0;
         //  printf("index=%d\n",index);
       
       //   printf("*(satle_queue+ k)=%d k=%d",*(satle_queue+ k),k);
             while((teamh+i)->shomare_paigah_ha[k] != -1)
             {//printf("salamda\n");
              // printf("k=%d\n",k);
                if((paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
               //     printf("index=%d\n",index);
                 // printf("k=%d *(satle_queue+ k)=%d index=%d\n",k,(teamh+index)->shomare_paigah_ha[k],index);
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destination((user_team->hadaf),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                 //   ((paigah+(teamh+index)->shomare_paigah_ha[k]))->shomare_dastoor[0]=*attack_number_Harif;
                    ++*attack_number_Harif;
                   // printf("*attack_number_Harif=%d (paigah+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedadeshun=%d temp_tedad_sarbaz=%d\n",*attack_number_Harif,(paigah+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit,temp_tedad_sarbaz);
                  break;
                  }
                else{
               if( (paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination((user_team->hadaf),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                  //  ((paigah+(teamh+index)->shomare_paigah_ha[k]))->shomare_dastoor[0]=*attack_number_Harif;
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigahss+((teamh+i)->shomare_paigah_ha[k]))->sarbaz->tedad_credit;
                 // printf("yes\n");
                  }
                   if(flag){break;}
               ++k;
             }
            
         }
         user_team->is_attack=false;
         if(flag){break;}
         ++i;
       }
}

//printf("(teamh+k)->tedadekol=%d\n",4);
//printf("attack number harif=%d\n",*attack_number_Harif);
void cheking_next_door()
{
  int k=0;
  static int counter=0;
  //printf("(teamh+k)->tedadekol=%d\n",(teamh+k)->tedadekol);
  while ((teamh+k)->tedadekol != -1)
  {
  //  printf("k=%d\n",k);
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
//printf("counter Time started\n");

//printf("is_attack=%d\n",user_team->is_attack);
///////////////////amalyate asli//////////////////////////
printf("counter_temp=%d\n",*counter_temp);
if(*counter_temp>1000)
{
int *flag=(int *)malloc(sizeof(int));
*flag=1;
if(counter_Time % 7000 == 0 && !(user_team->is_attack) && (user_team)-> tedadekol)
{
//printf("hello guys\n");
 hamle_be_bishtarin(flag);
}
if(*flag)
{
if(counter_Time % 5000 == 0 && (user_team->is_attack))
{
//  printf("haaaaaaaaaaaaaaaaaaaaaaaaaamle \n");
hamle_be_makane_khali();
}
else if(counter_Time % 5000 == 0 && !(user_team->is_attack))
{
  //printf("yes\n");
cheking_next_door(queue);
  // printf("yes2\n");
free(queue); free(head_satle_queue); free(satle_queue); free(visited);
}
}
free(flag);
}
///////////////////////////////////////////////////////////
      for(int i=0;i<*attack_number_Harif;++i)
      {
     //   printf("attack_number=%d i=%d (head_sarbazRuHava_Harif+i)=%d (*(sarbazH_Harif+i))->is_destroy=%d %d\n",*attack_number_Harif,i,*(head_sarbazRuHava_Harif+i),(*(sarbazH_Harif+i))->is_destroy,(paigah+(*(sarbazH_Harif+i))->loc)->sarbaz->tedad_credit);
        rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
         //printf("attack_number1=%d\n",*attack_number_Harif);
        continuetomove1((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
       //  printf("attack_number2=%d\n",*attack_number_Harif);
      }
//     printf("moving\n");
     // printf("go to kamkardan\n");
       for(int i=0;i<*attack_number_Harif;++i)
      {
     //   printf("attack_number=%d i=%d (head_sarbazRuHava_Harif+i)=%d (*(sarbazH_Harif+i))->is_destroy=%d %d\n",*attack_number_Harif,i,*(head_sarbazRuHava_Harif+i),(*(sarbazH_Harif+i))->is_destroy,(paigah+(*(sarbazH_Harif+i))->loc)->sarbaz->tedad_credit);
       printf("(*(sarbazH_Harif+i))->is_destroy=%d\n",(*(sarbazH_Harif+i))->is_destroy);
        if((*(sarbazH_Harif+i))->tedadeshun<=0){kamkardaneSarbazH(i,attack_number_Harif,sarbazH_Harif, head_sarbazRuHava_Harif);}
       //  printf("attack_number2=%d\n",*attack_number_Harif);
      }
      for(int i=0;i<*attack_number;++i)
      {
     //   printf("attack_number=%d i=%d (head_sarbazRuHava_Harif+i)=%d (*(sarbazH_Harif+i))->is_destroy=%d %d\n",*attack_number_Harif,i,*(head_sarbazRuHava_Harif+i),(*(sarbazH_Harif+i))->is_destroy,(paigah+(*(sarbazH_Harif+i))->loc)->sarbaz->tedad_credit);
       printf("(*(sarbazH_Harif+i))->is_destroy=%d\n",(*(sarbazH_Harif+i))->is_destroy);
        if((*(sarbazH+i))->tedadeshun<=0){kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava);}
       //  printf("attack_number2=%d\n",*attack_number_Harif);
      }
   //   printf("attack_number=%d\n",*attack_number_Harif);
 //   printf("moving\n");
     printf("destroy s\n");
     destroy_sarbaz_beine_rah(sarbazH,attack_number,head_sarbazRuHava,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
    //  destroy_sarbaz_beine_rah(struct sarbazRuHava **sarbazH,int *attack_number,int *head_sarbaz_ru_hava,struct sarbazRuHava **sarbazH_Harif,int *attack_number_Harif,int *head_sarbaz_ru_hava_Harif,struct paigah* paigah1)
     printf("destroy s2\n");
     SDL_RenderPresent(renderer1);
  //   printf("sdl presented\n");