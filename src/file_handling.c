


   FILE * fp;
   
   fp = fopen ("/home/alireza/state.io/src/player.txt","r");
   
   if(fp==NULL){printf("maww\n");}
   char *temp_string=(char *)malloc(sizeof(char)*100);
   int *temp_int=(int *)malloc(sizeof(int));
   char *ch=(char *)malloc(sizeof(char));
   fscanf(fp,"%d",temp_int);
   fscanf(fp,"\n",ch);
   *head_player= *temp_int;
   int n=0;
   while(1) {
     fscanf(fp,"%[^\n]s",temp_string);
     fscanf(fp,"%d",temp_int);
     fscanf(fp,"\n",ch);
     strcpy((player+n)->name,temp_string);
     (player+n)->id=*temp_int;
     ++n;
      if(feof(fp)) { 
         break ;
      }
   }
   fclose(fp);
     int flag=1;
      for(int i=0;i<n;++i)
      {
          if(strcmp(text,(player+i)->name)==0){flag=0;  kodum_player=i; break;}
      }
       if(flag)
       {
         strcpy((player+*head_player)->name,text); (player+*head_player)->id=0; kodum_player=*head_player; ++*head_player;
       }
    
    
    




