        
        
       
       
       
       
       if(isset)
       {
       
       if(tedadeharif == 1)
       {
        
        for(int i=0;i<8;++i)
        {
                (paigah+i)->user = 0;
                
        }
           //int *users=(int *)malloc(sizeof(int)*3);  *users=0; *(users+1)=1; *(users+2)=2;  
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
           isset=0;
       }
       
       }

        
        
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
        int biabala=30;
     
        SDL_Rect *arms=(SDL_Rect *)malloc(sizeof(SDL_Rect)*8);
        SDL_Rect t11;
        t11.x = 72.5*ratio/10+biajolo; t11.y=36*ratio/10-biabala; t11.w=111*ratio/10; t11.h=69*ratio/10;
        SDL_Rect r11;
        r11.x = 72.5*ratio/10+biajolo+41; r11.y=36*ratio/10-biabala+4; r11.w=34; r11.h=41;
        *(arms)=r11;
        SDL_Rect t12;
        t12.x = 57*ratio/10+biajolo-1; t12.y=96*ratio/10-biabala-1; t12.w=130*ratio/10; t12.h=94*ratio/10;
        SDL_Rect r12;
        r12.x = 57*ratio/10+biajolo-1+76; r12.y=96*ratio/10-biabala+12; r12.w=34; r12.h=41;
        *(arms+1)=r12;
        SDL_Rect t13;
        t13.x = 54*ratio/10+biajolo; t13.y=165*ratio/10-biabala; t13.w=139*ratio/10; t13.h=238*ratio/10;
        SDL_Rect r13;
        r13.x = 54*ratio/10+biajolo+49; r13.y=165*ratio/10-biabala+64; r13.w=34; r13.h=41;
        *(arms+2)=r13;
        SDL_Rect t14;
        t14.x = 175*ratio/10+biajolo; t14.y=31*ratio/10-biabala; t14.w=87*ratio/10; t14.h=152*ratio/10;
        SDL_Rect r14;
        r14.x = 175*ratio/10+biajolo+10; r14.y=31*ratio/10-biabala+73; r14.w=34; r14.h=41;
        *(arms+3)=r14;
        SDL_Rect t15;
        t15.x = 156*ratio/10+biajolo; t15.y=175*ratio/10-biabala; t15.w=94*ratio/10; t15.h=155*ratio/10;
        SDL_Rect r15;
        r15.x = 156*ratio/10+biajolo+45; r15.y=175*ratio/10-biabala+34; r15.w=34; r15.h=41;
        *(arms+4)=r15;
        SDL_Rect t16;
        t16.x = 176*ratio/10+biajolo; t16.y=262*ratio/10-biabala; t16.w=128*ratio/10; t16.h=174*ratio/10;
        SDL_Rect r16;
        r16.x = 176*ratio/10+biajolo+58; r16.y=262*ratio/10-biabala+68; r16.w=34; r16.h=41;
        *(arms+5)=r16;
        SDL_Rect t17;
        t17.x = 219*ratio/10+biajolo; t17.y=46*ratio/10-biabala; t17.w=140*ratio/10; t17.h=106*ratio/10;
        SDL_Rect r17;
        r17.x = 219*ratio/10+biajolo+72; r17.y=46*ratio/10-biabala+36; r17.w=34; r17.h=41;
        *(arms+6)=r17;
        SDL_Rect t18;
        t18.x = 246*ratio/10+biajolo; t18.y=142*ratio/10-biabala; t18.w=158*ratio/10; t18.h=131*ratio/10;
        SDL_Rect r18;
        r18.x = 246*ratio/10+biajolo+71; r18.y=142*ratio/10-biabala+57; r18.w=34; r18.h=41;
        *(arms+7)=r18;*/
        
       // minussoldier(((paigah+2)),4,renderer1);
        
        
        
        
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
      
       //SDL_RenderCopy(renderer1,message,NULL,&c11);

        /*SDL_RenderCopy(renderer1,te1,NULL,&t11);
        SDL_RenderCopy(renderer1,te2,NULL,&t12);
        SDL_RenderCopy(renderer1,te3,NULL,&t13);
        SDL_RenderCopy(renderer1,te4,NULL,&t14);
        SDL_RenderCopy(renderer1,te5,NULL,&t15);
        SDL_RenderCopy(renderer1,te6,NULL,&t16);
        SDL_RenderCopy(renderer1,te7,NULL,&t17);
        SDL_RenderCopy(renderer1,te8,NULL,&t18);*/
        //printf("%p\n",(paigah+2)->sarbaz->tedad);
        //if((paigah+2)->sarbaz->tedad == NULL){printf("noooooooooo\n");}
//        if((paigah+2)->sarbaz->position == &c13){printf("qqqqqq\n");}
      //  SDL_RenderCopy(renderer1,(paigah+2)->sarbaz->tedad,NULL,&((paigah+2)->sarbaz->position));
        
        
        rendersoldiers(head_sarbazRuHava);
        continuetomove(head_sarbazRuHava);
        
        SDL_RenderPresent(renderer1);
        
      