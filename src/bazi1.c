        struct arm
        {
            SDL_Rect position;
        };
        struct paigah{
        SDL_Rect position;
        int user;
        SDL_Texture *color;
        struct arm arm;
        };
        

        struct paigah* paigah=( struct paigah*)malloc(sizeof(struct paigah)*8);
        int ratio=13;
        int biajolo=229;
        int biabala=30;

        SDL_Rect t11;
        t11.x = 72.5*ratio/10+biajolo; t11.y=36*ratio/10-biabala; t11.w=111*ratio/10; t11.h=69*ratio/10;
        SDL_Rect t12;
        t12.x = 57*ratio/10+biajolo-1; t12.y=96*ratio/10-biabala-1; t12.w=130*ratio/10; t12.h=94*ratio/10;
        SDL_Rect t13;
        t13.x = 54*ratio/10+biajolo; t13.y=165*ratio/10-biabala; t13.w=139*ratio/10; t13.h=238*ratio/10;
        SDL_Rect t14;
        t14.x = 175*ratio/10+biajolo; t14.y=31*ratio/10-biabala; t14.w=87*ratio/10; t14.h=152*ratio/10;
        SDL_Rect t15;
        t15.x = 156*ratio/10+biajolo; t15.y=175*ratio/10-biabala; t15.w=94*ratio/10; t15.h=155*ratio/10;
        SDL_Rect t16;
        t16.x = 176*ratio/10+biajolo; t16.y=262*ratio/10-biabala; t16.w=128*ratio/10; t16.h=174*ratio/10;
        SDL_Rect t17;
        t17.x = 219*ratio/10+biajolo; t17.y=46*ratio/10-biabala; t17.w=140*ratio/10; t17.h=106*ratio/10;
        SDL_Rect t18;
        t18.x = 246*ratio/10+biajolo; t18.y=142*ratio/10-biabala; t18.w=158*ratio/10; t18.h=131*ratio/10;

        
        for(int i=0;i<8;++i)
        {
                if(i % 3 == 0){(paigah+i )->user = 2;}
                else if(i % 3 == 1){(paigah+i) -> user = 1;}
                else {(paigah+i) -> user = 3;}
        }
        
        
        
        switch (paigah->user)
        {
        case 0: 
        paigah-> color = *(imagess);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        break;
        case 1: 
        paigah-> color = *(imagess+27);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        break;
        case 2: 
        paigah-> color = *(imagess+54);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        break;
        case 3 : 
        paigah-> color = *(imagess+81);
        paigah -> position =t11; 
        SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
        default:
                break;
        }
        switch ((paigah+1)->user)
        {
        case 0: 
        (paigah+1) -> color = *(imagess+1);
        (paigah+1) -> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        break;
        case 1: 
        (paigah+1)-> color = *(imagess+27+1);
        (paigah+1)-> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        break;
        case 2: 
        (paigah+1)-> color = *(imagess+54+1);
        (paigah+1) -> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        break;
        case 3 : 
        (paigah+1)-> color = *(imagess+81+1);
        (paigah+1) -> position =t12; 
        SDL_RenderCopy(renderer1,(paigah+1)-> color,NULL,&((paigah+1)->position));
        default:
                break;
        }
        switch ((paigah+2)->user)
        {
        case 0: 
        (paigah+2)-> color = *(imagess+2);
        (paigah+2) -> position =t13; 
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position));
        break;
        case 1: 
        (paigah+2)-> color = *(imagess+2+27);
        (paigah+2) -> position =t13; 
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position));
        break;
        case 2: 
        (paigah+2)-> color = *(imagess+2+54);
        (paigah+2) -> position =t13; 
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position));
        break;
        case 3 : 
        (paigah+2)-> color = *(imagess+2+81);
        (paigah+2) -> position =t13; 
        SDL_RenderCopy(renderer1,(paigah+2)-> color,NULL,&((paigah+2)->position));
        default:
                break;
        }
        switch ((paigah+3)->user)
        {
        case 0: 
        (paigah+3)-> color = *(imagess+3);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        break;
        case 1: 
        (paigah+3)-> color = *(imagess+3+27);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        break;
        case 2: 
        (paigah+3)-> color = *(imagess+3+54);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        break;
        case 3 : 
        (paigah+3)-> color = *(imagess+3+81);
        (paigah+3) -> position =t14; 
        SDL_RenderCopy(renderer1,(paigah+3)-> color,NULL,&((paigah+3)->position));
        default:
                break;
        }
        switch ((paigah+4)->user)
        {
        case 0: 
        (paigah+4)-> color = *(imagess+4);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        break;
        case 1: 
        (paigah+4)-> color = *(imagess+4+27);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        break;
        case 2: 
        (paigah+4)-> color = *(imagess+4+54);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        break;
        case 3 : 
        (paigah+4)-> color = *(imagess+4+81);
        (paigah+4) -> position =t15; 
        SDL_RenderCopy(renderer1,(paigah+4)-> color,NULL,&((paigah+4)->position));
        default:
                break;
        }
        switch ((paigah+5)->user)
        {
        case 0: 
        (paigah+5)-> color = *(imagess+5);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        break;
        case 1: 
        (paigah+5)-> color = *(imagess+5+27);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        break;
        case 2: 
        (paigah+5)-> color = *(imagess+5+54);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        break;
        case 3 : 
        (paigah+5)-> color = *(imagess+5+81);
        (paigah+5)-> position =t16; 
        SDL_RenderCopy(renderer1,(paigah+5)-> color,NULL,&((paigah+5)->position));
        default:
                break;
        }
        switch ((paigah+6)->user)
        {
        case 0: 
        (paigah+6)-> color = *(imagess+6);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        break;
        case 1: 
        (paigah+6)-> color = *(imagess+6+27);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        break;
        case 2: 
        (paigah+6)-> color = *(imagess+6+54);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        break;
        case 3 : 
         (paigah+6)-> color = *(imagess+6+81);
        (paigah+6) -> position =t17; 
        SDL_RenderCopy(renderer1,(paigah+6)-> color,NULL,&((paigah+6)->position));
        default:
                break;
        }
        switch ((paigah+7)->user)
        {
        case 0: 
        (paigah+7) -> color = *(imagess+7);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        break;
        case 1: 
        (paigah+7) -> color = *(imagess+7+27);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        break;
        case 2: 
        (paigah+7) -> color = *(imagess+7+54);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        break;
        case 3 : 
        (paigah+7) -> color = *(imagess+7+81);
        (paigah+7) -> position =t18; 
        SDL_RenderCopy(renderer1,(paigah+7)-> color,NULL,&((paigah+7)->position));
        default:
                break;
        }


        /*SDL_RenderCopy(renderer1,te1,NULL,&t11);
        SDL_RenderCopy(renderer1,te2,NULL,&t12);
        SDL_RenderCopy(renderer1,te3,NULL,&t13);
        SDL_RenderCopy(renderer1,te4,NULL,&t14);
        SDL_RenderCopy(renderer1,te5,NULL,&t15);
        SDL_RenderCopy(renderer1,te6,NULL,&t16);
        SDL_RenderCopy(renderer1,te7,NULL,&t17);
        SDL_RenderCopy(renderer1,te8,NULL,&t18);*/
        SDL_RenderPresent(renderer1);