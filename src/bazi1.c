        
        
       
       
       
       
       if(isset)
       {
       printf("hello\n");
       if(tedadeharif == 1)
       {
        
        for(int i=0;i<8;++i)
        {
                (paigah+i)->user = 0;
                
        }
           int *randd=(int *)malloc(sizeof(int));
           *randd=rand()%3; if(*randd == 1){(paigah)->user=1;} else if(*(randd)== 2){(paigah+1)->user=1;} else{(paigah+3)->user=1;} free(randd);
           int *rand1=(int *)malloc(sizeof(int));
           *rand1=rand()%3; if(*rand1 == 1){(paigah+5)->user=2;} else{(paigah+7)->user=2;} free(rand1);
        for(int i=0;i<8;++i)
        {
                
               if((paigah+i)->user == 0){(paigah+i)->arm->armt= *(armsT);}
               else if((paigah+i)->user == 1){(paigah+i)->arm->armt= *(armsT+1);}
               else{(paigah+i)->arm->armt= *(armsT+2);}
                
        }
           isset=0;
       }
       else
       {
        
        for(int i=0;i<8;++i)
        {
                (paigah+i )->user = 0;
                
        }
           int *randd=(int *)malloc(sizeof(int));
           *randd=rand()%3; if(*randd == 1){(paigah)->user=1;(paigah+2)->user=2; (paigah+7)->user=3; } 
           else if(*(randd)== 2){(paigah+1)->user=1;(paigah+5)->user=2; (paigah+6)->user=3;} 
           else{(paigah)->user=2;(paigah+2)->user=3; (paigah+7)->user=1;} 
           free(randd);
        for(int i=0;i<8;++i)
        {
               if((paigah+i)->user == 0){(paigah+i)->arm->armt= *(armsT);}
               else if((paigah+i)->user == 1){(paigah+i)->arm->armt= *(armsT+1);}
               else if((paigah+i)->user == 2){(paigah+i)->arm->armt= *(armsT+2);}
               else{(paigah+i)->arm->armt= *(armsT+3);}
               
        }
        printf("hello");
        
        
        }
           isset=0;
       if(font == NULL){printf("bia paeen saremon dard geref %s\n",TTF_GetError());}
        for(int i=0;i<8;++i)
        {
        if((paigah+i)->user == 0){(paigah+i)->sarbaz->tedadeshun=40;}
        else{(paigah+i)->sarbaz->tedadeshun=50;}
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah+i)->sarbaz->tedadeshun);
        SDL_Color color = {0,255,0,255};
        SDL_Surface *text = TTF_RenderText_Solid(font,c,color);
        (paigah+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text);
        free(text);
        free(c);
       //////////////////tedade harifan/////////////////////////////////////////////////////
        
        int k[10]={0}; 
        int *counter=(int *)malloc(sizeof(int));
        int j=0;
        *counter=0;
        while(j != 8)
        {
        if(((paigah+j)->user)>1){k[j]+=1; if(k[j] == 1){++*counter;}}
         ++j;
        }
         teamh=(struct TeamH*)malloc((*counter+1)*sizeof(struct TeamH));
        (teamh+ *counter)->tedadekol= -1;
        printf("counter=%d\n",*counter); 
        free(counter);
        ////////////////////////////////////////////////////////////////////////////////////
       }
       TTF_CloseFont(font);
       }
        //////////////////tedade harifan//////////////////////////////////////////////////// 
        /*
        {
        int k[10]={0}; 
        int *counter=(int *)malloc(sizeof(int));
        int j=0;
        *counter=0;
        //printf("paigah+j=%d",(paigah+j)->user);
        while(j != 8)
        {
        if(((paigah+j)->user)>1){k[j]+=1; if(k[j] == 1){++*counter;}}
         ++j;
        }
        struct TeamH *teamh=(struct TeamH*)malloc((*counter)*sizeof(struct TeamH));
        printf("counter=%d\n",*counter); 
        free(counter);
        }
        */ ///////////////////////////////////////////////////////////////////////////////////
       
     
   
          
 
        
        
      /*  for(int i=0;i<8;++i)
        {
               if((paigah+i)->user == 0){(paigah+i)->user = 1;(paigah+i)->arm->armt= *(armsT+1);}
               else if((paigah+i)->user == 1){(paigah+i)->arm->armt= *(armsT+1);}
               else if((paigah+i)->user == 2){(paigah+i)->arm->armt= *(armsT+1);}
               else{(paigah+i)->arm->armt= *(armsT+1);}
                
        }*/
        








       
        
        /*int ratio=13;
        int ratio1=4;
        int biajolo=229;
        int biabala=30;*/
     

       // minussoldier(((paigah+2)),4,renderer1);
         //printf("hello\n"); 
        
        
        
        int rand_arm=rand()%3+1;
        if((paigah+2)->sarbaz->tedad == NULL){printf("%d\n",5555);}
       //render copies
      // printf("paigah->user=%d\n",paigah->user);
       
        switch (paigah->user)
        {
        case 0: 
        paigah-> color = *(imagess);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        SDL_RenderCopy(renderer1,(paigah)->sarbaz->tedad,NULL,&(paigah->sarbaz->position));
        break;
        case 1: 
        paigah-> color = *(imagess+27);
        paigah -> position =t11; 
      //  SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        SDL_RenderCopy(renderer1,paigah->arm->armt,NULL,&(paigah->arm->position));
        SDL_RenderCopy(renderer1,(paigah)->sarbaz->tedad,NULL,&(paigah->sarbaz->position));
        break;
        case 2: 
        paigah-> color = *(imagess+54);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        SDL_RenderCopy(renderer1,paigah->arm->armt,NULL,&(paigah->arm->position));
        SDL_RenderCopy(renderer1,(paigah)->sarbaz->tedad,NULL,&(paigah->sarbaz->position));
        break;
        case 3 : 
        paigah-> color = *(imagess+81);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
         SDL_RenderCopy(renderer1,paigah->arm->armt,NULL,&(paigah->arm->position));
         SDL_RenderCopy(renderer1,(paigah)->sarbaz->tedad,NULL,&(paigah->sarbaz->position));
        default:
                break;
        }
        rand_arm=rand()%3+1;
        switch ((paigah+1)->user)
        {
        case 0: 
        (paigah+1) -> color = *(imagess+1);
        (paigah+1) -> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        SDL_RenderCopy(renderer1,(paigah+1)->sarbaz->tedad,NULL,&((paigah+1)->sarbaz->position));
        break;
        case 1: 
        (paigah+1)-> color = *(imagess+27+1);
        (paigah+1)-> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        SDL_RenderCopy(renderer1,(paigah+1)->arm->armt,NULL,&((paigah+1)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+1)->sarbaz->tedad,NULL,&((paigah+1)->sarbaz->position));
        break;
        case 2: 
        (paigah+1)-> color = *(imagess+54+1);
        (paigah+1) -> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        SDL_RenderCopy(renderer1,(paigah+1)->arm->armt,NULL,&((paigah+1)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+1)->sarbaz->tedad,NULL,&((paigah+1)->sarbaz->position));
        break;
        case 3 : 
        (paigah+1)-> color = *(imagess+81+1);
        (paigah+1) -> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        SDL_RenderCopy(renderer1,(paigah+1)->arm->armt,NULL,&((paigah+1)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+1)->sarbaz->tedad,NULL,&((paigah+1)->sarbaz->position));
        default:
                break;
        }
        rand_arm=rand()%3+1;
        switch ((paigah+2)->user)
        {
        case 0: 
        (paigah+2)-> color = *(imagess+2);
        (paigah+2) -> position =t13; 
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position));
        SDL_RenderCopy(renderer1,(paigah+2)->sarbaz->tedad,NULL,&((paigah+2)->sarbaz->position));
        break;
        case 1: 
        (paigah+2)-> color = *(imagess+2+27);
        (paigah+2) -> position =t13;
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position)); 
        SDL_RenderCopy(renderer1,(paigah+2)->arm->armt,NULL,&((paigah+2)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+2)->sarbaz->tedad,NULL,&((paigah+2)->sarbaz->position));
        break;
        case 2: 
        (paigah+2)-> color = *(imagess+2+54);
        (paigah+2) -> position =t13;
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position)); 
        SDL_RenderCopy(renderer1,(paigah+2)->arm->armt,NULL,&((paigah+2)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+2)->sarbaz->tedad,NULL,&((paigah+2)->sarbaz->position));
        break;
        case 3 : 
        (paigah+2)-> color = *(imagess+2+81);
        (paigah+2) -> position =t13; 
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position));
        SDL_RenderCopy(renderer1,(paigah+2)->arm->armt,NULL,&((paigah+2)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+2)->sarbaz->tedad,NULL,&((paigah+2)->sarbaz->position));
        default:
                break;
        }
        switch ((paigah+3)->user)
        {
        case 0: 
        (paigah+3)-> color = *(imagess+3);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        SDL_RenderCopy(renderer1,(paigah+3)->sarbaz->tedad,NULL,&((paigah+3)->sarbaz->position));
        break;
        case 1: 
        (paigah+3)-> color = *(imagess+3+27);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        SDL_RenderCopy(renderer1,(paigah+3)->arm->armt,NULL,&((paigah+3)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+3)->sarbaz->tedad,NULL,&((paigah+3)->sarbaz->position));
        break;
        case 2: 
        (paigah+3)-> color = *(imagess+3+54);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        SDL_RenderCopy(renderer1,(paigah+3)->arm->armt,NULL,&((paigah+3)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+3)->sarbaz->tedad,NULL,&((paigah+3)->sarbaz->position));
        break;
        case 3 : 
        (paigah+3)-> color = *(imagess+3+81);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        SDL_RenderCopy(renderer1,(paigah+3)->arm->armt,NULL,&((paigah+3)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+3)->sarbaz->tedad,NULL,&((paigah+3)->sarbaz->position));
        default:
                break;
        }
        switch ((paigah+4)->user)
        {
        case 0: 
        (paigah+4)-> color = *(imagess+4);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        SDL_RenderCopy(renderer1,(paigah+4)->sarbaz->tedad,NULL,&((paigah+4)->sarbaz->position));
        break;
        case 1: 
        (paigah+4)-> color = *(imagess+4+27);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        SDL_RenderCopy(renderer1,(paigah+4)->arm->armt,NULL,&((paigah+4)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+4)->sarbaz->tedad,NULL,&((paigah+4)->sarbaz->position));
        break;
        case 2: 
        (paigah+4)-> color = *(imagess+4+54);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        SDL_RenderCopy(renderer1,(paigah+4)->arm->armt,NULL,&((paigah+4)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+4)->sarbaz->tedad,NULL,&((paigah+4)->sarbaz->position));
        break;
        case 3 : 
        (paigah+4)-> color = *(imagess+4+81);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        SDL_RenderCopy(renderer1,(paigah+4)->arm->armt,NULL,&((paigah+4)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+4)->sarbaz->tedad,NULL,&((paigah+4)->sarbaz->position));        
                default:
                break;
        }
        switch ((paigah+5)->user)
        {
        case 0: 
        (paigah+5)-> color = *(imagess+5);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        SDL_RenderCopy(renderer1,(paigah+5)->sarbaz->tedad,NULL,&((paigah+5)->sarbaz->position));
        break;
        case 1: 
        (paigah+5)-> color = *(imagess+5+27);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        SDL_RenderCopy(renderer1,(paigah+5)->arm->armt,NULL,&((paigah+5)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+5)->sarbaz->tedad,NULL,&((paigah+5)->sarbaz->position));
        break;
        case 2: 
        (paigah+5)-> color = *(imagess+5+54);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        SDL_RenderCopy(renderer1,(paigah+5)->arm->armt,NULL,&((paigah+5)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+5)->sarbaz->tedad,NULL,&((paigah+5)->sarbaz->position));
        break;
        case 3 : 
        (paigah+5)-> color = *(imagess+5+81);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        SDL_RenderCopy(renderer1,(paigah+5)->arm->armt,NULL,&((paigah+5)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+5)->sarbaz->tedad,NULL,&((paigah+5)->sarbaz->position));
        default:
                break;
        }
        switch ((paigah+6)->user)
        {
        case 0: 
        (paigah+6)-> color = *(imagess+6);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        SDL_RenderCopy(renderer1,(paigah+6)->sarbaz->tedad,NULL,&((paigah+6)->sarbaz->position));
        break;
        case 1: 
        (paigah+6)-> color = *(imagess+6+27);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        SDL_RenderCopy(renderer1,(paigah+6)->arm->armt,NULL,&((paigah+6)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+6)->sarbaz->tedad,NULL,&((paigah+6)->sarbaz->position));
        break;
        case 2: 
        (paigah+6)-> color = *(imagess+6+54);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        SDL_RenderCopy(renderer1,(paigah+6)->arm->armt,NULL,&((paigah+6)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+6)->sarbaz->tedad,NULL,&((paigah+6)->sarbaz->position));
        break;
        case 3 : 
         (paigah+6)-> color = *(imagess+6+81);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        SDL_RenderCopy(renderer1,(paigah+6)->arm->armt,NULL,&((paigah+6)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+6)->sarbaz->tedad,NULL,&((paigah+6)->sarbaz->position));
        default:
                break;
        }
        switch ((paigah+7)->user)
        {
        case 0: 
        (paigah+7) -> color = *(imagess+7);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        SDL_RenderCopy(renderer1,(paigah+7)->sarbaz->tedad,NULL,&((paigah+7)->sarbaz->position));
        break;
        case 1: 
        (paigah+7) -> color = *(imagess+7+27);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        SDL_RenderCopy(renderer1,(paigah+7)->arm->armt,NULL,&((paigah+7)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+7)->sarbaz->tedad,NULL,&((paigah+7)->sarbaz->position));
        break;
        case 2: 
        (paigah+7) -> color = *(imagess+7+54);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        SDL_RenderCopy(renderer1,(paigah+7)->arm->armt,NULL,&((paigah+7)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+7)->sarbaz->tedad,NULL,&((paigah+7)->sarbaz->position));
        break;
        case 3 : 
        (paigah+7) -> color = *(imagess+7+81);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        SDL_RenderCopy(renderer1,(paigah+7)->arm->armt,NULL,&((paigah+7)->arm->position));
        SDL_RenderCopy(renderer1,(paigah+7)->sarbaz->tedad,NULL,&((paigah+7)->sarbaz->position));
        default:
                break;
        }
     
     if(counter_Time %90 == 0)
     {
     int *i=(int *)malloc(sizeof(int));
     *i=0;
      while(*i != 8)
      {
              
         if((paigah+ *i)->user == 0)
         {
                 
             ++ *i;
         }
         else 
         {
                 
                 if((paigah+*i)->sarbaz->tedadeshun < 50)
                 {
                    if(50-(paigah+*i)->sarbaz->tedadeshun<5)
                    {
                           
                            addsoldier(((paigah+ *i)),50-(paigah+ *i)->sarbaz->tedadeshun,renderer1);
                    }
                    else 
                    {
                            
                       addsoldier(((paigah+ *i)),5,renderer1);       
                    }
                 }
                ++ *i;
         }
      }
      free(i);
      }
    
            
      for(int i=0;i<*attack_number;++i)
      {
        rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
        continuetomove((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number);   
      }
     