        
        
       
                   SDL_RenderClear(renderer1);
             
       SDL_RenderCopy(renderer1,backgroundT,NULL,NULL);
       if(isset)
       {
      fpm=17;
       ratio=13;
        biajolo= -144;
        biabala= 280;
       

        
        t216.x = 176*ratio/10+biajolo; t216.y=262*ratio/10-biabala; t216.w=128*ratio/10; t216.h=174*ratio/10;
        
        SDL_Rect r16;
        r16.x =  176*ratio/10+biajolo+41+30; r16.y=262*ratio/10-biabala+4+74; r16.w=34; r16.h=41;
        *(arms1)=r16;
        
        SDL_Rect c16;
        c16.x =176*ratio/10+biajolo+41+30; c16.y=262*ratio/10-biabala+4+45+74; c16.w=32; c16.h=29;
        *(counter1)=c16;
        
        
        t2110.x = 240*ratio/10+biajolo; t2110.y=354*ratio/10-biabala; t2110.w=190*ratio/10; t2110.h=170*ratio/10;
        
         SDL_Rect r110;
        r110.x =  240*ratio/10+biajolo+41+45; r110.y=354*ratio/10-biabala+4+60; r110.w=34; r110.h=41;
        *(arms1+1)=r110;
        
        SDL_Rect c110;
        c110.x = 240*ratio/10+biajolo+41+45; c110.y=354*ratio/10-biabala+4+45+60; c110.w=32; c110.h=29;
        *(counter1+1)=c110;
        
        
        
        t2111.x = 354*ratio/10+biajolo; t2111.y=275.5*ratio/10-biabala; t2111.w=133*ratio/10; t2111.h=246*ratio/10;
        
        SDL_Rect r111;
        r111.x = 354*ratio/10+biajolo+41+15; r111.y=275.5*ratio/10-biabala+4+90; r111.w=34; r111.h=41;
        *(arms1+2)=r111;
        
        SDL_Rect c111;
        c111.x = 354*ratio/10+biajolo+41+15; c111.y=275.5*ratio/10-biabala+4+45+90; c111.w=32; c111.h=29;
        *(counter1+2)=c111;
        
        
        
        
      
        t2115.x = 461*ratio/10+biajolo; t2115.y=329*ratio/10-biabala; t2115.w=183*ratio/10; t2115.h=163*ratio/10;
        
        SDL_Rect r115;
        r115.x =461*ratio/10+biajolo+41+45; r115.y=329*ratio/10-biabala+4+60; r115.w=34; r115.h=41;
        *(arms1+3)=r115;
        
        SDL_Rect c115;
        c115.x = 461*ratio/10+biajolo+41+45; c115.y=329*ratio/10-biabala+4+45+60; c115.w=32; c115.h=29;
        *(counter1+3)=c115;
        
       
        t2119.x = 616*ratio/10+biajolo; t2119.y=336*ratio/10-biabala+5; t2119.w=255*ratio/10; t2119.h=103*ratio/10;
        
        SDL_Rect r119;
        r119.x =  616*ratio/10+biajolo+41+95; r119.y=336*ratio/10-biabala+4+45; r119.w=34; r119.h=41;
        *(arms1+4)=r119;
        
        SDL_Rect c119;
        c119.x = 616*ratio/10+biajolo+41+95; c119.y=336*ratio/10-biabala+4+45+45; c119.w=32; c119.h=29;
        *(counter1+4)=c119;
        
        
        
        
        
        
       
        t2120.x = 627*ratio/10+biajolo; t2120.y=410*ratio/10-biabala; t2120.w=141*ratio/10; t2120.h=93*ratio/10;
        
        SDL_Rect r120;
        r120.x =  627*ratio/10+biajolo+41+25; r120.y=410*ratio/10-biabala+4+30; r120.w=34; r120.h=41;
        *(arms1+5)=r120;
        
        SDL_Rect c120;
        c120.x = 627*ratio/10+biajolo+41+25; c120.y=410*ratio/10-biabala+4+45+30; c120.w=32; c120.h=29;
        *(counter1+5)=c120;
        
        
        t2121.x = 751*ratio/10+biajolo; t2121.y=407*ratio/10-biabala; t2121.w=122*ratio/10; t2121.h=97*ratio/10;
        
        SDL_Rect r121;
        r121.x =  751*ratio/10+biajolo+41+15; r121.y=407*ratio/10-biabala+4+39; r121.w=34; r121.h=41;
        *(arms1+6)=r121;
        
        SDL_Rect c121;
        c121.x =751*ratio/10+biajolo+41+15; c121.y=407*ratio/10-biabala+4+45+39; c121.w=32; c121.h=29;
        *(counter1+6)=c121;









       
 
        printf("bazi started\n");
        TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        if(font == NULL){printf("%s\n",SDL_GetError());}
        for(int i=0;i<7;++i)
        { 
                printf("arms\n");
                (paigah2+i)->sarbaz = (struct Sarbaz*)malloc(sizeof(struct Sarbaz));
                (paigah2+i)->arm = (struct Arm*)malloc(sizeof(struct Arm));
                (paigah2+i)->arm->position = *(arms1+i);
                printf("Positions\n");
                (paigah2+i)->sarbaz->position = *(counter1+i);
                (paigah2+i)->shomare_dastoor=(int *)malloc(sizeof(int)*2); 
                if( (paigah2+i)->shomare_dastoor == NULL){printf("nonnnnnnnnnnnn\n");}

        }
       printf("hello\n");
      tedadeharif=3;
       if(tedadeharif == 1)
       {
        
        for(int i=0;i<7;++i)
        {
                (paigah2+i)->user = 0;
                
        }
           int *randd=(int *)malloc(sizeof(int));
           *randd=rand()%3;  if(*randd == 1){(paigah2)->user=1;} else if(*(randd)== 2){(paigah2+1)->user=1;} else{(paigah2+3)->user=1;} free(randd);
           int *rand1=(int *)malloc(sizeof(int));
           *rand1=rand()%3;  if(*rand1 == 1){(paigah2+6)->user=2;} else{(paigah2+5)->user=2;} free(rand1);
        for(int i=0;i<7;++i)
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
        

        for(int i=0;i<7;++i)
        {
                (paigah2+i)->user = 0;
                
        }
           int *randd=(int *)malloc(sizeof(int));
           *randd=rand()%3; if(*randd == 1){(paigah2)->user=1;(paigah2+6)->user=2; (paigah2+3)->user=3; } 
          else if(*(randd)== 2){(paigah2)->user=1;(paigah2+5)->user=3; (paigah2+6)->user=3;} 
           else{(paigah2)->user=2;(paigah2+6)->user=3; (paigah2+3)->user=1;} 
           free(randd);
        for(int i=0;i<7;++i)
        {      (paigah2+i)->arm->armt=(SDL_Texture *)malloc(sizeof(SDL_Texture*));
               if((paigah2+i)->user == 0){(paigah2+i)->arm->armt= *(armsT);}
               else if((paigah2+i)->user == 1){(paigah2+i)->arm->armt= *(armsT+1);}
               else if((paigah2+i)->user == 2){(paigah2+i)->arm->armt= *(armsT+2);}
               else{(paigah2+i)->arm->armt= *(armsT+3);}
               
        }
        
        
        }
           isset=0;
       if(font == NULL){printf("bia paeen saremon dard geref %s\n",TTF_GetError());}
        for(int i=0;i<7;++i)
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
        
        while(j != 7)
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

       (paigah2)->position=t216;
      (paigah2+1)->position=t2110;
      (paigah2+2)->position=t2111;
      (paigah2+3)->position=t2115;
      (paigah2+4)->position=t2119;
      (paigah2+5)->position=t2120;
      (paigah2+6)->position=t2121;
       checkarms(paigah2,7);
        //////////////////tedade harifan//////////////////////////////////////////////////// 
        
         ///////////////////////////////////////////////////////////////////////////////////
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
     for(int i=1;i<3;++i)
     {
         switch ((paigah2+i)->user)
        {
        case 0: 
        (paigah2+i)-> color = *(imagess+i+8);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 1: 
        (paigah2+i)-> color = *(imagess+i+27+8);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 2: 
        (paigah2+i)-> color = *(imagess+i+54+8);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 3 : 
        (paigah2+i)-> color = *(imagess+81+8+i);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
         SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        default:
                break;
        }
     }
     switch ((paigah2+3)->user)
        {
        case 0: 
        (paigah2+3)-> color = *(imagess+14);
        SDL_RenderCopy(renderer1,(paigah2+3)-> color,NULL,&((paigah2+3)->position));
        SDL_RenderCopy(renderer1,(paigah2+3)->sarbaz->tedad,NULL,&((paigah2+3)->sarbaz->position));
        break;
        case 1: 
        (paigah2+3)-> color = *(imagess+27+14);
        SDL_RenderCopy(renderer1,(paigah2+3)-> color,NULL,&((paigah2+3)->position));
        SDL_RenderCopy(renderer1,(paigah2+3)->arm->armt,NULL,&((paigah2+3)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2+3)->sarbaz->tedad,NULL,&((paigah2+3)->sarbaz->position));
        break;
        case 2: 
        (paigah2+3)-> color = *(imagess+54+14);
        SDL_RenderCopy(renderer1,(paigah2+3)-> color,NULL,&((paigah2+3)->position));
        SDL_RenderCopy(renderer1,(paigah2+3)->arm->armt,NULL,&((paigah2+3)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2+3))->sarbaz->tedad,NULL,&((paigah2+3)->sarbaz->position));
        break;
        case 3 : 
        (paigah2+4)-> color = *(imagess+81+14);
        SDL_RenderCopy(renderer1,(paigah2+3)-> color,NULL,&((paigah2+3)->position));
         SDL_RenderCopy(renderer1,(paigah2+3)->arm->armt,NULL,&((paigah2+3)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2+3))->sarbaz->tedad,NULL,&((paigah2+3)->sarbaz->position));
        default:
                break;
        }
          
      for(int i=4;i<7;++i)
     {
         switch ((paigah2+i)->user)
        {
        case 0: 
        (paigah2+i)-> color = *(imagess+i+14);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 1: 
        (paigah2+i)-> color = *(imagess+i+27+14);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 2: 
        (paigah2+i)-> color = *(imagess+i+54+14);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
        SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
        SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        break;
        case 3 : 
        (paigah2+i)-> color = *(imagess+81+14+i);
        SDL_RenderCopy(renderer1,(paigah2+i)-> color,NULL,&((paigah2+i)->position));
         SDL_RenderCopy(renderer1,(paigah2+i)->arm->armt,NULL,&((paigah2+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigah2+i))->sarbaz->tedad,NULL,&((paigah2+i)->sarbaz->position));
        default:
                break;
        }
     }
        
       








       
        
        
        
        
        int rand_arm=rand()%3+1;
      

      
      
    
        rand_arm=rand()%3+1;
        
  
     if(counter_Time %30 == 0)
     {
     int *i=(int *)malloc(sizeof(int));
     *i=0;
      while(*i != 7)
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
                 continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigah2);
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
   SDL_RenderPresent(renderer1);
     