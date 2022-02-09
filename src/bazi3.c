

 SDL_RenderClear(renderer1);
 SDL_RenderCopy(renderer1,backgroundT,NULL,NULL);
       if(isset)
       {
fpm=17;
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
            
        
        SDL_Rect *counter2=(SDL_Rect *)malloc(sizeof(SDL_Rect)*12);
        SDL_Rect *arms2=(SDL_Rect *)malloc(sizeof(SDL_Rect)*12);  
        
        
         SDL_Rect r116;
        r116.x = 547*ratio/10+biajolo+41+40; r116.y=39*ratio/10-biabala+60+10; r116.w=34; r116.h=41;
        *(arms1)=r116;
        SDL_Rect c116;
        c116.x = 547*ratio/10+biajolo+41+40; c116.y=39*ratio/10-biabala+80+38; c116.w=32; c116.h=29;
        *(counter1)=c116;
        
        
        
      
         SDL_Rect r117;
        r117.x = 587*ratio/10+biajolo+41+70; r117.y=154*ratio/10-biabala+40; r117.w=34; r117.h=41;
        *(arms1+1)=r117;
        SDL_Rect c117;
        c117.x = 587*ratio/10+biajolo+41+70; c117.y=154*ratio/10-biabala+80+5; c117.w=32; c117.h=29;
        *(counter1+1)=c117;
        
         SDL_Rect r118;
        r118.x = 587*ratio/10+biajolo+41+100; r118.y=154*ratio/10-biabala+60+10+115; r118.w=34; r118.h=41;
        *(arms1+2)=r118;
        SDL_Rect c118;
        c118.x = 587*ratio/10+biajolo+41+100; c118.y=154*ratio/10-biabala+80+35+115; c118.w=32; c118.h=29;
        *(counter1+2)=c118;
       
       
       
        SDL_Rect r122;
        r122.x =660*ratio/10+biajolo+41+45; r122.y=47*ratio/10-biabala+60-10; r122.w=34; r122.h=41;
        *(arms1+3)=r122;
        SDL_Rect c122;
        c122.x = 660*ratio/10+biajolo+41+45; c122.y=47*ratio/10-biabala+80+20; c122.w=32; c122.h=29;
        *(counter1+3)=c122;
        
        
        
        SDL_Rect r123;
        r123.x =818*ratio/10+biajolo+31+10; r123.y=33*ratio/10-biabala+60+10; r123.w=34; r123.h=41;
        *(arms1+4)=r123;
        SDL_Rect c123;
        c123.x = 818*ratio/10+biajolo+31+10; c123.y=33*ratio/10-biabala+80+35; c123.w=32; c123.h=29;
        *(counter1+4)=c123;
        
        
        
        
        
        
        
       
        SDL_Rect r124;
        r124.x =779*ratio/10+biajolo+41+50; r124.y=140*ratio/10-biabala+60-10; r124.w=34; r124.h=41;
        *(arms1+5)=r124;
        SDL_Rect c124;
        c124.x = 779*ratio/10+biajolo+41+50; c124.y=140*ratio/10-biabala+80+20; c124.w=32; c124.h=29;
        *(counter1+5)=c124;
        
        
        
        
        SDL_Rect r125;
        r125.x = 747*ratio/10+biajolo+41+130; r125.y=213*ratio/10-biabala+60+20; r125.w=34; r125.h=41;
        *(arms1+6)=r125;
        SDL_Rect c125;
        c125.x = 747*ratio/10+biajolo+41+130; c125.y=213*ratio/10-biabala+80+45; c125.w=32; c125.h=29;
        *(counter1+6)=c125;
        
        
        
        
        
        SDL_Rect r126;
        r126.x =867*ratio/10+biajolo+41+50; r126.y=20*ratio/10-biabala+60+50; r126.w=34; r126.h=41;
        *(arms1+7)=r126;
        SDL_Rect c126;
        c126.x = 867*ratio/10+biajolo+41+50; c126.y=20*ratio/10-biabala+80+75; c126.w=32; c126.h=29;
        *(counter1+7)=c126;
        
        
        
        
         SDL_Rect r127;
        r127.x =958*ratio/10+biajolo+41+10; r127.y=102*ratio/10-biabala+60+10; r127.w=34; r127.h=41;
        *(arms1+8)=r127;
        SDL_Rect c127;
        c127.x =958*ratio/10+biajolo+41+10; c127.y=102*ratio/10-biabala+80+35; c127.w=32; c127.h=29;
        *(counter1+8)=c127;

     
        TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        if(font == NULL){printf("%s\n",SDL_GetError());}
        for(int i=0;i<9;++i)
        { 
                
                (paigah2+i)->sarbaz = (struct Sarbaz*)malloc(sizeof(struct Sarbaz));
                (paigah2+i)->arm = (struct Arm*)malloc(sizeof(struct Arm));
                (paigah2+i)->arm->position = *(arms1+i);
                
                (paigah2+i)->sarbaz->position = *(counter1+i);
                (paigah2+i)->shomare_dastoor=(int *)malloc(sizeof(int)*2); 
                if( (paigah2+i)->shomare_dastoor == NULL){}
            
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
           *randd=rand()%3;  if(*randd == 1){(paigah2)->user=1;(paigah2+2)->user=2; (paigah2+8)->user=3; } 
          else if(*(randd)== 2){(paigah2)->user=2;(paigah2+6)->user=1; (paigah2+7)->user=3;} 
           else{(paigah2)->user=2;(paigah2+2)->user=3; (paigah2+8)->user=1;} 
           free(randd);
        for(int i=0;i<9;++i)
        {  
        //        / (paigah2+i)->user=2;
               (paigah2+i)->arm->armt=(SDL_Texture *)malloc(sizeof(SDL_Texture*));
               if((paigah2+i)->user == 0){(paigah2+i)->arm->armt= *(armsT);}
               else if((paigah2+i)->user == 1){(paigah2+i)->arm->armt= *(armsT+1);}
               else if((paigah2+i)->user == 2){(paigah2+i)->arm->armt= *(armsT+2);}
               else{(paigah2+i)->arm->armt= *(armsT+3);}
               
        }
      
        
        
        }
           isset=0;
       if(font == NULL){printf(" %s\n",TTF_GetError());}
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
       
       }
















      (paigah2)->position=t116;
      (paigah2+1)->position=t117;
      (paigah2+2)->position=t118;
      (paigah2+3)->position=t122;
      (paigah2+4)->position=t123;
      (paigah2+5)->position=t124;
      (paigah2+6)->position=t125;
      (paigah2+7)->position=t126;
      (paigah2+8)->position=t127;
       checkarms(paigah2,9);




for(int i=0;i<3;++i)
{
        
        switch ((paigah2+i)->user)
        {
        case 0: 
        (paigah2+i)-> color = *(imagess+15+i);
       // (paigah2+i) -> position =t11; 
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 1: 
        (paigah2+i)-> color = *(imagess+27+15+i);
        //(paigah2+i) -> position =t11; 
      //  SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 2: 
        (paigah2+i)-> color = *(imagess+54+15+i);
       // (paigah2+i) -> position =t11; 
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 3 : 
        (paigah2+i)-> color = *(imagess+81+15+i);
        //(paigah2+i) -> position =t11; 
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
         SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        default:
                break;
        }

}






       
        
        
        int rand_arm=rand()%3+1;
      

      
      
     
    for(int i=3;i<9;++i)
     {
             
           

        switch ((paigah2+i)->user)
        {
        case 0: 
        (paigah2+i)-> color = *(imagess+i+18); 
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 1: 
        (paigah2+i)-> color = *(imagess+i+27+18);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 2: 
        (paigah2+i)-> color = *(imagess+i+54+18);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 3 : 
        (paigah2+i)-> color = *(imagess+81+18+i);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
         SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        default:
                break;
        }
     }
       rand_arm=rand()%3+1;
        
  
    
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
               continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2);
      }
      }
      else{
      if(users[(*(sarbazH+i))->user][1] == 3){
              for(int j=0;j<2;++j)
              {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2); 
              }
           }
           else 
           {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2);     
           }  
      }
      }
       for(int i=0;i<*attack_number;++i)
       {
        
        if((*(sarbazH+i))->is_destroy == 1){ kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava); --i;}
       
       }
       if(renderer1 == NULL){printf("%s",SDL_GetError());}
