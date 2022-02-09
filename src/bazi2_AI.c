(paigah2)-> hamsaye[0]=1; (paigah2)-> hamsaye[1]=3;   (paigah2)-> hamsaye[2]=2;                                                                               (paigah2)->toolesh=3;
(paigah2+1)-> hamsaye[0]=0; (paigah2+1)-> hamsaye[1]=2; (paigah2+1)-> hamsaye[2]=5;                                                                           (paigah2+1)->toolesh=3;
(paigah2+2)-> hamsaye[0]=1; (paigah2+2)-> hamsaye[1]=0; (paigah2+2)-> hamsaye[2]=5;  (paigah2+2)-> hamsaye[3]=3;  (paigah2+2)-> hamsaye[4]=4;                 (paigah2+2)->toolesh=5;
(paigah2+3)-> hamsaye[0]=0; (paigah2+3)-> hamsaye[1]=2; (paigah2+3)-> hamsaye[2]=4;                                                                           (paigah2+3)->toolesh=3;
(paigah2+4)-> hamsaye[0]=3; (paigah2+4)-> hamsaye[1]=8;                                                                                                       (paigah2+4)->toolesh=2;
(paigah2+5)->hamsaye[0]=2; (paigah2+5)-> hamsaye[1]=6;                                                                                                        (paigah2+5)->toolesh=2;
(paigah2+6)-> hamsaye[0]=5; (paigah2+6)-> hamsaye[1]=7;                                                                                                       (paigah2+6)->toolesh=2;
(paigah2+7)-> hamsaye[0]=6; (paigah2+7)-> hamsaye[1]=4; (paigah2+7)-> hamsaye[2]=8;                                                                           (paigah2+7)->toolesh=3;
(paigah2+8)->hamsaye[0]=7;      (paigah2+8)->hamsaye[1]=5;                                                                                                    (paigah2+8)->toolesh=2;
int *k=(int *)malloc(sizeof(int));
*k=0;

{
  int j=2;
  int i=0;
  /////////////user team tahlil////////////////////////
      (user_team)-> shomare_paigah_ba_bishtarin_tedad= -1;
      (user_team)-> tedadekol=0;
      while(i != 9)
      {
      if((paigah2+i)->user == 1 && (paigah2+i)->sarbaz->tedad_credit>0 ){if((paigah2+i)->sarbaz->tedad_credit > (((user_team)-> shomare_paigah_ba_bishtarin_tedad)+1)){(user_team)-> shomare_paigah_ba_bishtarin_tedad= i;} (user_team)-> tedadekol+=(paigah2+i)->sarbaz->tedad_credit;}
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
      while(i != 9)
      {
      if((paigah2+i)->user == j && (paigah2+i)->sarbaz->tedad_credit>0 ){if((paigah2+i)->sarbaz->tedad_credit > (((teamh+*k)-> shomare_paigah_ba_bishtarin_tedad)+1)){(teamh+*k)-> shomare_paigah_ba_bishtarin_tedad= i;} (teamh+*k)-> tedadekol+=(paigah2+i)->sarbaz->tedad_credit;}
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
   return -( (paigah2+*(int*)a)->sarbaz->tedad_credit - (paigah2+*(int*)b)->sarbaz->tedad_credit );
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
(queue+i)->arr=(int *)malloc(sizeof(int)*9);
(teamh+i)->shomare_paigah_ha=(int *)malloc(sizeof(int)*9);
(queue+i)->back[0]=0;
for(int i1=0;i1<9;++i1)
{
  if((paigah2+i1)->user == i+2 && (paigah2+i1)->sarbaz->tedad_credit>0){(teamh+i)->shomare_paigah_ha[i1]=i1;}
  else{(teamh+i)->shomare_paigah_ha[i1]= -1;}
 (queue+i)->arr[i1]=-1;
}
qsort((teamh+i)->shomare_paigah_ha,9, sizeof(int), cmpfunc);
}
free(k);
////////////////////////////////////////////////
///////////////////is_visited array/////////////
int *visited=(int *)malloc(sizeof(int)*9);

///////////////////////////////////////////////
///////////////////visited array///////////////
int *satle_queue=(int *)malloc(sizeof(int)*9); 

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
 for(int j=0; j<(paigah2+*head_copy)->toolesh;++j)
 {
       if(*(visited+(paigah2+*head_copy)->hamsaye[j]) != 1)
       { 
         *(visited+((paigah2+*head_copy)->hamsaye[j]))=1;
         (queue+index)->arr[(queue+index)->back[0]]=(paigah2+*head_copy)->hamsaye[j];
         ++(queue+index)->back[0];
       }  
 }
 


         int temp_tedad_sarbaz=(paigah2+*head_copy)->sarbaz->tedad_credit;
         if((paigah2+*head_copy)->user==0 && (teamh+index)->tedadekol > (paigah2+*head_copy)->sarbaz->tedad_credit)
         {

           int k=0;
       
             while((teamh+index)->shomare_paigah_ha[k] != -1)
             {
                if((paigah2+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
                    addlocation((teamh+index)->shomare_paigah_ha[k], paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destintion2(*(head_copy),paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;
                  }
                else{
               if( (paigah2+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+index)->shomare_paigah_ha[k], paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destintion2(*(head_copy),paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigah2+(teamh+index)->shomare_paigah_ha[k])->sarbaz->tedad_credit;
                  }
               ++k;
             }
         //    
         }      
         free(head_copy);                            
       if(flag){break;}
        printf("(queue+index)->arr[0]=%d\n",(queue+index)->arr[0]);
       
}
      ++counter; 
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void hamle_be_bishtarin(int *ok_or_not)
{
 int temp_tedad_sarbaz=(paigah2+ (user_team)-> shomare_paigah_ba_bishtarin_tedad)->sarbaz->tedad_credit;
   int i=0;
    while ((teamh+i)->tedadekol != -1)
    {
      int flag=0;
         if((teamh+i)->tedadekol > (paigah2+(user_team)-> shomare_paigah_ba_bishtarin_tedad)->sarbaz->tedadeshun)
         {
           int k=0;
       
             while((teamh+i)->shomare_paigah_ha[k] != -1)
             {
                if((paigah2+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
               
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destintion2((user_team)-> shomare_paigah_ba_bishtarin_tedad,paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;
                  }
                else{
               if( (paigah2+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destintion2((user_team)-> shomare_paigah_ba_bishtarin_tedad,paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigah2+((teamh+i)->shomare_paigah_ha[k]))->sarbaz->tedad_credit;
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

 int temp_tedad_sarbaz=(paigah2+ (user_team->hadaf))->sarbaz->tedad_credit;
   int i=0;
     
    while ((teamh+i)->tedadekol != -1)
    {
      int flag=0;
         if((teamh+i)->tedadekol > (paigah2+(user_team->hadaf))->sarbaz->tedadeshun)
         {
           int k=0;
       
             while((teamh+i)->shomare_paigah_ha[k] != -1)
             {
                if((paigah2+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit > temp_tedad_sarbaz){
                  flag=1;
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    if( (*(sarbazH_Harif+ *attack_number_Harif))->loc == -1){++k;printf("oh mg////////////////;k'';k;k;k;'////////////////////////////////////////////// \n"); continue;}
                    add_destintion2((user_team->hadaf),paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  break;
                  }
                else{
               if( (paigah2+(teamh+i)->shomare_paigah_ha[k])->sarbaz->tedad_credit == 0){++k;printf("oh (*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun=%d \n",(*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun); continue;}
                    addlocation((teamh+i)->shomare_paigah_ha[k], paigah,*(sarbazH_Harif+ *attack_number_Harif));
                    add_destintion2((user_team->hadaf),paigah2,*(sarbazH_Harif+ *attack_number_Harif));
                    addSarbazRuHava((*(sarbazH_Harif+ *attack_number_Harif))->tedadeshun,*(sarbazH_Harif+ *attack_number_Harif));
                    ++*attack_number_Harif;
                  temp_tedad_sarbaz-= (paigah2+((teamh+i)->shomare_paigah_ha[k]))->sarbaz->tedad_credit;
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
for(int i=0;i<9;++i)
{
  *(satle_queue+i)=-1;
}
for(int i=0;i<9;++i)
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
if(*counter_temp<1002 && users[1][1] != 2)
{
int *flag=(int *)malloc(sizeof(int));
*flag=1;
if(counter_Time % 7000 == 0  && !(user_team->is_attack) && (user_team)-> tedadekol)
{
 hamle_be_bishtarin(flag);
}
if(*flag)
{
if(counter_Time % 5000 == 0 && (user_team->is_attack))
{
  if(((paigah2+ (user_team->hadaf))->user == 1))hamle_be_makane_khali();
else { (user_team->is_attack)=false;}

}
else if(counter_Time % 5000 == 0  && !(user_team->is_attack))
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
        continuetomove2((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah2);
        (*(sarbazH_Harif+i))->is_kond=0; 
          }
          else {rendersoldiers_sabet((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i)); (*(sarbazH_Harif+i))->is_kond=1;}
        }
        else {
        rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
        continuetomove2((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah2);
        }
      }
      else{
        if(users[(*(sarbazH_Harif+i))->user][1] == 3)
        {
          for(int j=0;j<2;++j)
          {
        rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
        continuetomove2((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah2);
          }
        }
        else{
            rendersoldiers((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i));
        continuetomove2((head_sarbazRuHava_Harif+i),*(sarbazH_Harif+i),i,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah2);
        }
      }
      }
      for(int i=0;i<*attack_number;++i)
      {
    
        if((*(sarbazH+i))->tedadeshun<=0){kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava);}
      }
       for(int i=0;i<*attack_number_Harif;++i)
      {
    
        if((*(sarbazH_Harif+i))->tedadeshun<=0){kamkardaneSarbazH(i,attack_number_Harif,sarbazH_Harif, head_sarbazRuHava_Harif);}
      }
     
          destroy_sarbaz_beine_rah(sarbazH,attack_number,head_sarbazRuHava,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah2);
          check_sarbaz_potion(sarbazH,attack_number,head_sarbazRuHava,sarbazH_Harif,attack_number_Harif,head_sarbazRuHava_Harif,paigah2,head_potion,potions);
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
               if(*randd>rand_for_potion && *randd<rand_for_potion_max )
               {
                 int randd2=rand()%4+1;
                 switch (randd2)
                 {
                 case 1:
                   add_potion1(paigah2,tedadeharif,360,120,200,200);
                   break;
                 case 2:
                   add_potion2(paigah2,tedadeharif,360,120,200,200);
                 case 3:
                   add_potion3(paigah2,tedadeharif,360,120,200,200);
                 case 4:
                   add_potion4(paigah2,tedadeharif,360,120,200,200);
                 default:
                   break;
                 }      
               }
               
               free(randd);
               checkforwin(9,paigah2);
                SDL_RenderPresent(renderer1);
