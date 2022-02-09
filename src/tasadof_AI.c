

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
        if(paigahs[i]%4 == paigahs[j]%4 && abs(paigahs[i]-paigahs[j])<5){(paigahss+i)->hamsaye[head_hamsaye]=j;  ++head_hamsaye;}
        if(paigahs[i] == paigahs[j]+1 && paigahs[i]%4 != 1){(paigahss+i)->hamsaye[head_hamsaye]=j;  ++head_hamsaye;}
        if(paigahs[i] == paigahs[j]-1 && paigahs[i]%4 != 0){(paigahss+i)->hamsaye[head_hamsaye]=j;  ++head_hamsaye;}
    } 
    (paigahss+i)->toolesh= head_hamsaye;
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
      i=0;
      ++*k;
      ++j;
       }
} 
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
for(int i1=0;i1<8;++i1)
{
  if((paigahss+i1)->user == i+2 && (paigahss+i1)->sarbaz->tedad_credit>0){(teamh+i)->shomare_paigah_ha[i1]=i1;}
  else{(teamh+i)->shomare_paigah_ha[i1]= -1;}
 (queue+i)->arr[i1]=-1;
}
qsort((teamh+i)->shomare_paigah_ha,8, sizeof(int), cmpfunc);
}
free(k);
////////////////////////////////////////////////
///////////////////is_visited array/////////////
int *visited=(int *)malloc(sizeof(int)*13);

///////////////////////////////////////////////
///////////////////visited array///////////////
int *satle_queue=(int *)malloc(sizeof(int)*13); 

int *head_satle_queue=(int *)malloc(sizeof(int));

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
 *(satle_queue+*head_satle_queue)=(queue+index)->arr[0];
 ++*head_satle_queue;
 int i;
 for( i=0;i<(queue+index)->back[0]; ++i)
 {
       (queue+index)->arr[i]=(queue+index)->arr[i+1];
 } 
 (queue+index)->arr[i]= -1;
 -- (queue+index)->back[0];
int flag=0;
 for(int j=0; j<(paigahss+*head_copy)->toolesh;++j)
 {
       if(*(visited+(paigahss+*head_copy)->hamsaye[j]) != 1)
       { 
         *(visited+((paigahss+*head_copy)->hamsaye[j]))=1;
         (queue+index)->arr[(queue+index)->back[0]]=(paigahss+*head_copy)->hamsaye[j];
         ++(queue+index)->back[0];
       }  
 }
 


         int temp_tedad_sarbaz=(paigahss+*head_copy)->sarbaz->tedad_credit;
         if((paigahss+*head_copy)->user==0 && (teamh+index)->tedadekol > (paigahss+*head_copy)->sarbaz->tedad_credit)
         {

           int k=0;
       
             while((teamh+index)->shomare_paigah_ha[k] != -1)
             {
                if((paigahss+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
                    addlocation((teamh+index)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destination1(*(head_copy),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;
                  }
                else{
               if( (paigahss+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+index)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination1(*(head_copy),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigahss+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit;
                  }
               ++k;
             }
         //    
         }      
         free(head_copy);                            
       if(flag){break;}
       
}
      ++counter; 
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
       
             while((teamh+i)->shomare_paigah_ha[k] != -1)
             {
                if((paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
               
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destination1((user_team)-> shomare_paigah_ba_bishtarin_tedad,paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;
                  }
                else{
               if( (paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination1((user_team)-> shomare_paigah_ba_bishtarin_tedad,paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigahss+((teamh+i)->shomare_paigah_ha[k]))->sarbaz->tedad_credit;
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
       
             while((teamh+i)->shomare_paigah_ha[k] != -1)
             {
                if((paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destination1((user_team->hadaf),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;
                  }
                else{
               if( (paigahss+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destination1((user_team->hadaf),paigahss,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigahss+((teamh+i)->shomare_paigah_ha[k]))->sarbaz->tedad_credit;
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


void cheking_next_door()
{
  int k=0;
  static int counter=0;
  while ((teamh+k)->tedadekol != -1)
  {
for(int i=0;i<8;++i)
{
  *(satle_queue+i)=-1;
}
for(int i=0;i<8;++i)
{
  *(visited+i)=0;
}
*head_satle_queue=0;
    (queue+k)->arr[0]=(teamh+k)-> shomare_paigah_ba_bishtarin_tedad;
    ++(queue+k)->back[0];
    enqueue_hamsaye((queue),k);
    ++k;
}
++counter;
}

///////////////////amalyate asli//////////////////////////

if(*counter_temp>1000 &&  users[1][1] != 2)
{
int *flag=(int *)malloc(sizeof(int));
*flag=1;
if(counter_Time % 7000 == 0 && !(user_team->is_attack) && (user_team)-> tedadekol)
{
 hamle_be_bishtarin(flag);
}
if(*flag)
{
if(counter_Time % 5000 == 0 && (user_team->is_attack) )
{
if(((paigahss+ (user_team->hadaf))->user == 1))hamle_be_makane_khali();
else { (user_team->is_attack)=false;}
}
else if(counter_Time % 5000 == 0 && !(user_team->is_attack))
{
cheking_next_door(queue);
free(queue); free(head_satle_queue); free(satle_queue); free(visited);
}
}
free(flag);
}
///////////////////////////////////////////////////////////
      for(int i=0;i<*attack_number_Harif;++i)
      {
      if(*flag)
      {
        if(users[(*(sarbazH_Harif+i))->user][1] != 4)
        {
          if((*(sarbazH_Harif+i))->is_kond){
        rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
        continuetomove1((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
         (*(sarbazH_Harif+i))->is_kond=0; 
          }
            else {rendersoldiers_sabet((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i)); (*(sarbazH_Harif+i))->is_kond=1;}
        }
      
          else 
          {
          rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
          continuetomove1((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
          }
      }
          else 
          {
        if(users[(*(sarbazH_Harif+i))->user][1] == 3)
        {
          for(int j=0;j<2;++j)
          {
           rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
           continuetomove1((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
          }
        }
        else{
            rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
        continuetomove1((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
        }

          }
      }
     destroy_sarbaz_beine_rah(sarbazH,attack_number,head_sarbazRuHava,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigahss);
     check_sarbaz_potion(sarbazH,attack_number,head_sarbazRuHava,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah,head_potion,potions);
     
       for(int i=0;i<*attack_number_Harif;++i)
      {
     
        if((*(sarbazH_Harif+i))->tedadeshun<=0){kamkardaneSarbazH(i,attack_number_Harif,sarbazH_Harif, head_sarbazRuHava_Harif);}
      }
      for(int i=0;i<*attack_number;++i)
      {
     
        if((*(sarbazH+i))->tedadeshun<=0){kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava);}
      }
 
               check_potion_time();
               check_times_users_potion();
               int *randd=(int *)malloc(sizeof(int));
               *randd=0;
              *randd=rand()%1000;
               if(*randd>rand_for_potion && *randd<rand_for_potion_max)
               {
                 int randd2=rand()%4+1;
                 switch (randd2)
                 {
                 case 1:
                   add_potion1(paigahss,tedadeharif,200,120,400,20);
                   break;
                 case 2:
                   add_potion2(paigahss,tedadeharif,200,120,400,200);
                 case 3:
                   add_potion3(paigahss,tedadeharif,200,120,400,200);
                 case 4:
                   add_potion4(paigahss,tedadeharif,200,120,400,200);
                 default:
                   break;
                 }      
               }
              
               free(randd);
                checkforwin(tedad1,paigahss);
               SDL_RenderPresent(renderer1);
