        
        
       
                   SDL_RenderClear(renderer1);

             
       SDL_RenderCopy(renderer1,backgroundT,NULL,NULL);
       if(isset)
       {
       ratio=11;
       biajolo=68;
       biabala=40;
        t16.x = 176*ratio/10+biajolo; t16.y=262*ratio/10-biabala; t16.w=128*ratio/10; t16.h=174*ratio/10;
        (paigah2)->position=t16;
        t18.x = 246*ratio/10+biajolo; t18.y=142*ratio/10-biabala; t18.w=158*ratio/10; t18.h=131*ratio/10;
        (paigah2+1)->position=t18; 
 
        TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        if(font == NULL){printf("%s\n",SDL_GetError());}
        for(int i=0;i<9;++i)
        { 
                (paigah2+i)->sarbaz = (struct Sarbaz*)malloc(sizeof(struct Sarbaz));
                (paigah2+i)->arm = (struct Arm*)malloc(sizeof(struct Arm));
                (paigah2+i)->arm->position = *(arms1+i);
                (paigah2+i)->sarbaz->position = *(counter1+i);
                (paigah2+i)->shomare_dastoor=(int *)malloc(sizeof(int)*2); 
                if( (paigah2+i)->shomare_dastoor == NULL){printf("nonnnnnnnnnnnn\n");}
              //  (paigah2+i)->shomare_dastoor[0]= -1;

        }
      tedadeharif=3;
       if(tedadeharif == 1)
       {
        
        for(int i=0;i<9;++i)
        {
                (paigah2+i)->user = 0;
                
        }
           int *randd=(int *)malloc(sizeof(int));
           *randd=rand()%3; if(*randd == 1){(paigah2)->user=1;} else if(*(randd)== 2){(paigah2+1)->user=1;} else{(paigah2+3)->user=1;} free(randd);
           int *rand1=(int *)malloc(sizeof(int));
           *rand1=rand()%3;  if(*rand1 == 1){(paigah2+5)->user=2;} else{(paigah2+7)->user=2;} free(rand1);
        for(int i=0;i<9;++i)
        {
               (paigah2+i)->arm->armt=(SDL_Texture *)malloc(sizeof(SDL_Texture*));
               if((paigah2+i)->user == 0){(paigah2+i)->arm->armt= *(armsT);}
               else if((paigah2+i)->user == 1){(paigah2+i)->arm->armt= *(armsT+1);}
               else{(paigah2+i)->arm->armt= *(armsT+2);}
                
        }
           isset=0;
       }
       else
       {
        
        for(int i=0;i<9;++i)
        {
                (paigah2+i)->user = 0;
                
        }
           int *randd=(int *)malloc(sizeof(int));
           *randd=rand()%3;  if(*randd == 1){(paigah2)->user=1;(paigah2+6)->user=2; (paigah2+8)->user=3; } 
          else if(*(randd)== 2){(paigah2)->user=1;(paigah2+5)->user=2; (paigah2+8)->user=3;} 
           else{(paigah2)->user=2;(paigah2+6)->user=3; (paigah2+8)->user=1;} 
           free(randd);
        for(int i=0;i<9;++i)
        {      (paigah2+i)->arm->armt=(SDL_Texture *)malloc(sizeof(SDL_Texture*));
               if((paigah2+i)->user == 0){(paigah2+i)->arm->armt= *(armsT);}
               else if((paigah2+i)->user == 1){(paigah2+i)->arm->armt= *(armsT+1);}
               else if((paigah2+i)->user == 2){(paigah2+i)->arm->armt= *(armsT+2);}
               else{(paigah2+i)->arm->armt= *(armsT+3);}
               
        }
        printf("hello2");
        
        
        }
           isset=0;
       if(font == NULL){printf("bia paeen saremon dard geref %s\n",TTF_GetError());}
        for(int i=0;i<9;++i)
        {
        if((paigah2+i)->user == 0){(paigah2+i)->sarbaz->tedadeshun=40; (paigah2+i)->sarbaz->tedad_credit=40;}
        else{(paigah2+i)->sarbaz->tedadeshun=50; (paigah2+i)->sarbaz->tedad_credit=50;}
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah2+i)->sarbaz->tedadeshun);
        SDL_Color color = {0,0,0,255};
        SDL_Color color1={255,255,255,255};
        SDL_Surface *text1 = TTF_RenderText_Solid(font,c,color1);
        SDL_Surface *text = TTF_RenderText_Solid(font,c,color);
        if((paigah2+i)->user != 1){ (paigah2+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text);}
       else {(paigah2+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text1);}
        free(text);
        free(text1);
        free(c);
        }
       //////////////////tedade harifan/////////////////////////////////////////////////////
        
        int k[10]={0}; 
        int *counter=(int *)malloc(sizeof(int));
        int j=0;
        *counter=0;
        
        while(j != 9)
        {
        if(((paigah2+j)->user)>1){k[j]+=1; if(k[j] == 1){++*counter;}}
         ++j;
        }
         teamh=(struct TeamH*)malloc((*counter+1)*sizeof(struct TeamH));
         user_team=(struct TeamH*)malloc(1*sizeof(struct TeamH));
         user_team->is_attack=false;
        (teamh+ *counter)->tedadekol= -1;
        free(counter);
        ////////////////////////////////////////////////////////////////////////////////////
       
       TTF_CloseFont(font);
       printf("is set finished\n");
       }

     
        checkarms(paigah2,9);
        switch ((paigah2)->user)
        {
        case 0: 
        (paigah2)-> color = *(imagess+5);
        SDL_RenderCopy(renderer1,(paigah2)-> color,NULL,&((paigah2)->position));
        SDL_RenderCopy(renderer1,(paigah2)->sarbaz->tedad,NULL,&((paigah2)->sarbaz->position));
        break;
        case 1: 
        (paigah2)-> color = *(imagess+27+5);
        SDL_RenderCopy(renderer1,(paigah2)-> color,NULL,&((paigah2)->position));
        SDL_RenderCopy(renderer1,(paigah2)->arm->armt,NULL,&((paigah2)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2)->sarbaz->tedad,NULL,&((paigah2)->sarbaz->position));
        break;
        case 2: 
        (paigah2)-> color = *(imagess+54+5);
        SDL_RenderCopy(renderer1,(paigah2)-> color,NULL,&((paigah2)->position));
        SDL_RenderCopy(renderer1,(paigah2)->arm->armt,NULL,&((paigah2)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2))->sarbaz->tedad,NULL,&((paigah2)->sarbaz->position));
        break;
        case 3 : 
        (paigah2)-> color = *(imagess+81+5);
        SDL_RenderCopy(renderer1,(paigah2)-> color,NULL,&((paigah2)->position));
         SDL_RenderCopy(renderer1,(paigah2)->arm->armt,NULL,&((paigah2)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2))->sarbaz->tedad,NULL,&((paigah2)->sarbaz->position));
        default:
                break;
        }








       
        
      

      
      (paigah2+1)->position=t18;
      (paigah2+2)->position=t19;
      (paigah2+3)->position=t110;
      (paigah2+4)->position=t111;
      (paigah2+5)->position=t112;
      (paigah2+6)->position=t113;
      (paigah2+7)->position=t114;
      (paigah2+8)->position=t115;
     for(int i=1;i<9;++i)
     {
           

        switch ((paigah2+i)->user)
        {
        case 0: 
        (paigah2+i)-> color = *(imagess+i+6);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 1: 
        (paigah2+i)-> color = *(imagess+i+27+6);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 2: 
        (paigah2+i)-> color = *(imagess+i+54+6);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 3 : 
        (paigah2+i)-> color = *(imagess+81+6+i);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
         SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        default:
                break;
        }
     }
       int  rand_arm=rand()%3+1;
        
  
     if(counter_Time %30 == 0)
     {
     int *i=(int *)malloc(sizeof(int));
     *i=0;
      while(*i != 9)
      {
              
         if((paigah2+ *i)->user == 0)
         {
                 
                 
             ++ *i;
         }
         else 
         {
                 if(users[(paigah2+*i)->user][1]==0)
                 {
                 
                 if((paigah2+*i)->sarbaz->tedadeshun < 50)
                 {
                    if(50-(paigah2+*i)->sarbaz->tedadeshun<2)
                    {
                           
                            addsoldier(((paigah2+ *i)),50-(paigah2+ *i)->sarbaz->tedadeshun,renderer1);
                    }
                    else 
                    {
                            
                       addsoldier(((paigah2+ *i)),2,renderer1);       
                    }
                 }
                 }
                 else 
                 {
                         addsoldier(((paigah2+ *i)),2,renderer1);  
                 }
                ++ *i;
         }
      }
      free(i);
      }
       int *flag=(int *)malloc(sizeof(int));
       *flag=0;
       for(int i=0;i<4;++i)
       {
               if(users[i][1]==4){*flag=1; break;}
       } 
      render_potion();   
      for(int i=0;i<*attack_number;++i)
      {
      if(*flag)
      {
         if(users[(*(sarbazH+i))->user][1] != 4)
         {
                 if((*(sarbazH+i))->is_kond)
                 {
                 rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
                 continuetomove2((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2);
                 (*(sarbazH+i))->is_kond=0;
                 } 
                 else{rendersoldiers_sabet((head_sarbazRuHava+i),*(sarbazH+i)); (*(sarbazH+i))->is_kond=1;}
      }
      else 
      {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove2((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2);
      }
      }
      else{
      if(users[(*(sarbazH+i))->user][1] == 3){
              for(int j=0;j<2;++j)
              {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove2((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2); 
              }
           }
           else 
           {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove2((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2);     
           }  
      }
      }
       for(int i=0;i<*attack_number;++i)
       {
        
        if((*(sarbazH+i))->is_destroy == 1){ kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava); --i;}
       
       }
       if(renderer1 == NULL){printf("%s",SDL_GetError());}
     