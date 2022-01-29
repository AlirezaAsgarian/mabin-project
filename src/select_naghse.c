

 SDL_RenderClear(renderer1);

    SDL_Surface *n1 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/نقشه 1.png");
    SDL_Surface *n2 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/نقشه 2.png");
    SDL_Surface *n3 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/نقشه 3.png");
    SDL_Surface *n4 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/نقشه 4.png");
    SDL_Surface *b1 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/b1.jpeg");
    SDL_Surface *b2 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/b2.jpeg");
    SDL_Surface *b3 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/b3.jpeg");
    SDL_Surface *b4 = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/b4.jpeg");
    SDL_Surface *naghshe=(SDL_Surface*)malloc(sizeof(SDL_Surface)*4);
    SDL_Surface *bu=(SDL_Surface*)malloc(sizeof(SDL_Surface)*4);
    *(naghshe)=*n1; *(naghshe+1)=*n2; *(naghshe+2)=*n3; *(naghshe+3)=*n4;
   //printf("heeeeeeeeeeeeeeeeeeeeeeaaaaaaaay\n");
    *(bu)=*b1; (*(bu+1))=*b2;  (*(bu+2))=*b3; (*(bu+3))=*b4;
    SDL_Texture **whichn =(SDL_Texture **)malloc(4*sizeof(SDL_Texture*));
     for(int i=0;i<4;++i)
     {
             *(whichn+i) = (SDL_Texture *)malloc(sizeof(SDL_Texture*));
             *(whichn+i)= SDL_CreateTextureFromSurface(renderer1,&naghshe[i]);
             if(*(whichn+i) == NULL){printf("can't %s",SDL_GetError());}
     }
     SDL_Texture **buT =(SDL_Texture **)malloc(4*sizeof(SDL_Texture*));
     for(int i=0;i<4;++i)
     {
             *(buT+i) = (SDL_Texture *)malloc(sizeof(SDL_Texture*));
             *(buT+i)= SDL_CreateTextureFromSurface(renderer1,(bu+i));
             if((bu+i) == NULL){printf("can't %s",SDL_GetError());}
     }
        SDL_FreeSurface(n1);
        SDL_FreeSurface(n2);
        SDL_FreeSurface(n3);
        SDL_FreeSurface(n4);
        SDL_FreeSurface(b1);
        SDL_FreeSurface(b2);
        SDL_FreeSurface(b3);
        SDL_FreeSurface(b4);
        SDL_Rect dis1;
        dis1.x=0; dis1.y=0; dis1.w =1080; dis1.h=554;
        SDL_Rect b1r;
        b1r.x=208; b1r.y=262; b1r.w =50; b1r.h=50;
        SDL_Rect b2r;
        b2r.x=497; b2r.y=219; b2r.w =50; b2r.h=50;
        SDL_Rect b3r;
        b3r.x=852; b3r.y=288; b3r.w =50; b3r.h=50;
        SDL_Rect b4r;
        b4r.x=541; b4r.y=431; b4r.w =50; b4r.h=50;

           
          
        printf("x=%d y=%d\n",xm,ym);

        if(xm>211 && xm<258 && ym>264 && ym<310)
        {
                   
          SDL_RenderCopy(renderer1,*(whichn),NULL,&dis1);

           
        } 
        else if(xm>499 && xm<546 && ym>200 && ym<268)
        {
            SDL_RenderCopy(renderer1,*(whichn+1),NULL,&dis1);

        }              
        else if(xm>852 && xm<902 && ym>288 && ym<338)
        {


        SDL_RenderCopy(renderer1,*(whichn+2),NULL,&dis1);



        }
          else if(xm>541 && xm<591 && ym>431 && ym<481)
          {

           SDL_RenderCopy(renderer1,*(whichn+3),NULL,&dis1);

          }
          else 
          {
          // SDL_Texture *defaultT = SDL_CreateTextureFromSurface(renderer1,image);
            SDL_RenderCopy(renderer1,tex,NULL,&dis1);
          }
           SDL_RenderCopy(renderer1,*(buT),NULL,&b1r);
           SDL_RenderCopy(renderer1,*(buT+1),NULL,&b2r);
           SDL_RenderCopy(renderer1,*(buT+2),NULL,&b3r);
           SDL_RenderCopy(renderer1,*(buT+3),NULL,&b4r);
           
          SDL_RenderPresent(renderer1);
        printf("hello\n");
        for(int i=0;i<4;++i)
       {
    SDL_DestroyTexture(*(buT+i));
    SDL_DestroyTexture(*(whichn+i));
        }
    
    SDL_RenderPresent(renderer1);
     printf("yes\n");