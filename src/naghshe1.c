

   int is_destination=0;
   int location=0;
   //load parts of naghshe
    SDL_Surface *image = IMG_Load("/home/alireza/state.io/src/انتخاب نقشه/nagshe2.png");
    SDL_Surface *t1 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/white2.png");
    SDL_Surface *t2 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/white2.png");
    SDL_Surface *t3 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/white2.png");
    SDL_Surface *t4 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/white2.png");
    SDL_Surface *t5 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/white2.png");
    SDL_Surface *t6 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/white2.png");
    SDL_Surface *t7 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/white2.png");
    SDL_Surface *t8 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/white2.png");
    SDL_Surface *t9 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/white2.png");
    SDL_Surface *t10 = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/white2.png");
    SDL_Surface *t11x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/white2.png");
    SDL_Surface *t12x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/white2.png");
    SDL_Surface *t13x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/white2.png");
    SDL_Surface *t14x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/white2.png");
    SDL_Surface *t15x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/white2.png");
    SDL_Surface *t16x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/white2.png");
    SDL_Surface *t17x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/white2.png");
    SDL_Surface *t18x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/white2.png");
    SDL_Surface *t19x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/white2.png");
    SDL_Surface *t20x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/white2.png");
    SDL_Surface *t21x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/white2.png");
    SDL_Surface *t22x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/white2.png");
    SDL_Surface *t23x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/white2.png");
    SDL_Surface *t24x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/white2.png");
    SDL_Surface *t25x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/white2.png");
    SDL_Surface *t26x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/white2.png");
    SDL_Surface *t27x = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/white2.png");
    SDL_Surface *t1y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/yel.png");
    SDL_Surface *t2y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/yel.png");
    SDL_Surface *t3y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/yel.png");
    SDL_Surface *t4y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/yel.png");
    SDL_Surface *t5y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/yel.png");
    SDL_Surface *t6y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/yel.png");
    SDL_Surface *t7y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/yel.png");
    SDL_Surface *t8y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/yel.png");
    SDL_Surface *t9y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/yel.png");
    SDL_Surface *t10y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/yel.png");
    SDL_Surface *t11xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/yel.png");
    SDL_Surface *t12xy= IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/yel.png");
    SDL_Surface *t13xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/yel.png");
    SDL_Surface *t14xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/yel.png");
    SDL_Surface *t15xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/yel.png");
    SDL_Surface *t16xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/yel.png");
    SDL_Surface *t17xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/yel.png");
    SDL_Surface *t18xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/yel.png");
    SDL_Surface *t19xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/yel.png");
    SDL_Surface *t20xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/yel.png");
    SDL_Surface *t21xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/yel.png");
    SDL_Surface *t22xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/yel.png");
    SDL_Surface *t23xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/yel.png");
    SDL_Surface *t24xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/yel.png");
    SDL_Surface *t25xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/yel.png");
    SDL_Surface *t26xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/yel.png");
    SDL_Surface *t27xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/yel.png");
    SDL_Surface *t1r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/red.png");
    SDL_Surface *t2r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/red.png");
    SDL_Surface *t3r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/red.png");
    SDL_Surface *t4r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/red.png");
    SDL_Surface *t5r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/red.png");
    SDL_Surface *t6r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/red.png");
    SDL_Surface *t7r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/red.png");
    SDL_Surface *t8r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/red.png");
    SDL_Surface *t9r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/red.png");
    SDL_Surface *t10r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/red.png");
    SDL_Surface *t11xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/red.png");
    SDL_Surface *t12xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/red.png");
    SDL_Surface *t13xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/red.png");
    SDL_Surface *t14xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/red.png");
    SDL_Surface *t15xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/red.png");
    SDL_Surface *t16xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/red.png");
    SDL_Surface *t17xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/red.png");
    SDL_Surface *t18xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/red.png");
    SDL_Surface *t19xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/red.png");
    SDL_Surface *t20xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/red.png");
    SDL_Surface *t21xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/red.png");
    SDL_Surface *t22xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/red.png");
    SDL_Surface *t23xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/red.png");
    SDL_Surface *t24xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/red.png");
    SDL_Surface *t25xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/red.png");
    SDL_Surface *t26xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/red.png");
    SDL_Surface *t27xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/red.png");
    SDL_Surface *t1b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/blue.png");
    SDL_Surface *t2b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/blue.png");
    SDL_Surface *t3b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/blue.png");
    SDL_Surface *t4b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/blue.png");
    SDL_Surface *t5b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/blue.png");
    SDL_Surface *t6b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/blue.png");
    SDL_Surface *t7b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/blue.png");
    SDL_Surface *t8b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/blue.png");
    SDL_Surface *t9b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/blue.png");
    SDL_Surface *t10b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/blue.png");
    SDL_Surface *t11xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/blue.png");
    SDL_Surface *t12xb= IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/blue.png");
    SDL_Surface *t13xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/blue.png");
    SDL_Surface *t14xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/blue.png");
    SDL_Surface *t15xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/blue.png");
    SDL_Surface *t16xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/blue.png");
    SDL_Surface *t17xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/blue.png");
    SDL_Surface *t18xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/blue.png");
    SDL_Surface *t19xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/blue.png");
    SDL_Surface *t20xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/blue.png");
    SDL_Surface *t21xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/blue.png");
    SDL_Surface *t22xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/blue.png");
    SDL_Surface *t23xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/blue.png");
    SDL_Surface *t24xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/blue.png");
    SDL_Surface *t25xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/blue.png");
    SDL_Surface *t26xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/blue.png"); 
    SDL_Surface *t27xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/blue.png");
    //arms ////////////////////////////////////////////////////////////////////////////////////////////////////////
    SDL_Surface *r1b = IMG_Load("/home/alireza/state.io/src/project_photo/Repositories/icons-castle-blue.png");
    SDL_Surface *r1r = IMG_Load("/home/alireza/state.io/src/project_photo/Repositories/icons-castle-red.png");
    SDL_Surface *r2r = IMG_Load("/home/alireza/state.io/src/project_photo/Repositories/icons-skeleton-red.png");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    SDL_Surface *S1= IMG_Load("/home/alireza/state.io/src/project_photo/Soldiers/arrow icon_red.png");
    SDL_Surface **images =(SDL_Surface **)malloc(108*sizeof(SDL_Surface*));
            *(images)=t1;
            *(images+1)=t2;
            *(images+2)=t3;
            *(images+3)=t4;
            *(images+4)=t5;
            *(images+5)=t6;
            *(images+6)=t7;
            *(images+7)=t8;
            *(images+8)=t9;
            *(images+9)=t10;
            *(images+10)=t11x;
            *(images+11)=t12x;
            *(images+12)=t13x;
            *(images+13)=t14x;
            *(images+14)=t15x;
            *(images+15)=t16x;
            *(images+16)=t17x;
            *(images+17)=t18x;
            *(images+18)=t19x;
            *(images+19)=t20x;
            *(images+20)=t21x;
            *(images+21)=t22x;
            *(images+22)=t23x;
            *(images+23)=t24x;
            *(images+24)=t25x;
            *(images+25)=t26x;
            *(images+26)=t27x;
            *(images+27)=t1y;
            *(images+28)=t2y;
            *(images+29)=t3y;
            *(images+30)=t4y;
            *(images+31)=t5y;
            *(images+32)=t6y;
            *(images+33)=t7y;
            *(images+34)=t8y;
            *(images+35)=t9y;
            *(images+36)=t10y;
            *(images+37)=t11xy;
            *(images+38)=t12xy;
            *(images+39)=t13xy;
            *(images+40)=t14xy;
            *(images+41)=t15xy;
            *(images+42)=t16xy;
            *(images+43)=t17xy;
            *(images+44)=t18xy;
            *(images+45)=t19xy;
            *(images+46)=t20xy;
            *(images+47)=t21xy;
            *(images+48)=t22xy;
            *(images+49)=t23xy;
            *(images+50)=t24xy;
            *(images+51)=t25xy;
            *(images+52)=t26xy;
            *(images+53)=t27xy;
            *(images+54)=t1r;
            *(images+55)=t2r;
            *(images+56)=t3r;
            *(images+57)=t4r;
            *(images+58)=t5r;
            *(images+59)=t6r;
            *(images+60)=t7r;
            *(images+61)=t8r;
            *(images+62)=t9r;
            *(images+63)=t10r;
            *(images+64)=t11xr;
            *(images+65)=t12xr;
            *(images+66)=t13xr;
            *(images+67)=t14xr;
            *(images+68)=t15xr;
            *(images+69)=t16xr;
            *(images+70)=t17xr;
            *(images+71)=t18xr;
            *(images+72)=t19xr;
            *(images+73)=t20xr;
            *(images+74)=t21xr;
            *(images+75)=t22xr;
            *(images+76)=t23xr;
            *(images+77)=t24xr;
            *(images+78)=t25xr;
            *(images+79)=t26xr;
            *(images+80)=t27xr;
            *(images+81)=t1b;
            *(images+82)=t2b;
            *(images+83)=t3b;
            *(images+84)=t4b;
            *(images+85)=t5b;
            *(images+86)=t6b;
            *(images+87)=t7b;
            *(images+88)=t8b;
            *(images+89)=t9b;
            *(images+90)=t10b;
            *(images+91)=t11xb;
            *(images+92)=t12xb;
            *(images+93)=t13xb;
            *(images+94)=t14xb;
            *(images+95)=t15xb;
            *(images+96)=t16xb;
            *(images+97)=t17xb;
            *(images+98)=t18xb;
            *(images+99)=t19xb;
            *(images+100)=t20xb;
            *(images+101)=t21xb;
            *(images+102)=t22xb;
            *(images+103)=t23xb;
            *(images+104)=t24xb;
            *(images+105)=t25xb;
            *(images+106)=t26xb;
            *(images+107)=t27xb;
        SDL_Texture *tex = SDL_CreateTextureFromSurface(renderer1,image);
        SDL_Texture *te1 = SDL_CreateTextureFromSurface(renderer1,t1);
        SDL_Texture *te2 = SDL_CreateTextureFromSurface(renderer1,t2);
        SDL_Texture *te3 = SDL_CreateTextureFromSurface(renderer1,t3);
        SDL_Texture *te4 = SDL_CreateTextureFromSurface(renderer1,t4);
        SDL_Texture *te5 = SDL_CreateTextureFromSurface(renderer1,t5);
        SDL_Texture *te6 = SDL_CreateTextureFromSurface(renderer1,t6);
        SDL_Texture *te7 = SDL_CreateTextureFromSurface(renderer1,t7);
        SDL_Texture *te8 = SDL_CreateTextureFromSurface(renderer1,t8);
        SDL_Texture *te9 = SDL_CreateTextureFromSurface(renderer1,t9);
        SDL_Texture *te10 = SDL_CreateTextureFromSurface(renderer1,t10);
        SDL_Texture *te11 = SDL_CreateTextureFromSurface(renderer1,t11x);
        SDL_Texture *te12 = SDL_CreateTextureFromSurface(renderer1,t12x);
        SDL_Texture *te13 = SDL_CreateTextureFromSurface(renderer1,t13x);
        SDL_Texture *te14 = SDL_CreateTextureFromSurface(renderer1,t14x);
        SDL_Texture *te15 = SDL_CreateTextureFromSurface(renderer1,t15x);
        SDL_Texture *te16 = SDL_CreateTextureFromSurface(renderer1,t16x);
        SDL_Texture *te17 = SDL_CreateTextureFromSurface(renderer1,t17x);
        SDL_Texture *te18 = SDL_CreateTextureFromSurface(renderer1,t18x);
        SDL_Texture *te19 = SDL_CreateTextureFromSurface(renderer1,t19x);
        SDL_Texture *te20 = SDL_CreateTextureFromSurface(renderer1,t20x);
        SDL_Texture *te21 = SDL_CreateTextureFromSurface(renderer1,t21x);
        SDL_Texture *te22 = SDL_CreateTextureFromSurface(renderer1,t22x);
        SDL_Texture *te23 = SDL_CreateTextureFromSurface(renderer1,t23x);
        SDL_Texture *te24 = SDL_CreateTextureFromSurface(renderer1,t24x);
        SDL_Texture *te25 = SDL_CreateTextureFromSurface(renderer1,t25x);
        SDL_Texture *te26 = SDL_CreateTextureFromSurface(renderer1,t26x);
        SDL_Texture *te27 = SDL_CreateTextureFromSurface(renderer1,t27x);
        SDL_Texture *Tr1r = SDL_CreateTextureFromSurface(renderer1,r1r);
        SDL_Texture *Tr1b = SDL_CreateTextureFromSurface(renderer1,r1b);
        SDL_Texture *Tr2r = SDL_CreateTextureFromSurface(renderer1,r2r);
        SDL_Texture **armsT =(SDL_Texture **)malloc(10*sizeof(SDL_Texture*));
        *(armsT)=NULL; *(armsT+1)=Tr1r; *(armsT+2)=Tr1b; *(armsT+3)=Tr2r;
        SDL_Texture **distinct =(SDL_Texture **)malloc(10*sizeof(SDL_Texture*));
        SDL_Texture **imagess =(SDL_Texture **)malloc(108*sizeof(SDL_Texture*));
        for(int i=0;i<108;++i)
        {
        *(imagess+i) = (SDL_Texture *)malloc(sizeof(SDL_Texture*));
        *(imagess+i)= SDL_CreateTextureFromSurface(renderer1,*(images+i));
        if(*(imagess+i) == NULL){printf("can't %s",SDL_GetError());}
        }
     for(int i=0;i<tedad1;++i)
     {
       int x=rand()%28;
       printf("x=%d\n",x);
             *(distinct+i) = (SDL_Texture *)malloc(sizeof(SDL_Texture*));
             *(distinct+i)= SDL_CreateTextureFromSurface(renderer1,*(images+x));
             if(*(distinct+i) == NULL){printf("can't %s",SDL_GetError());}
     }
        
        SDL_FreeSurface(t1);
        SDL_FreeSurface(t2);
        SDL_FreeSurface(t3);
        SDL_FreeSurface(t4);
        SDL_FreeSurface(t5);
        SDL_FreeSurface(t6);
        SDL_FreeSurface(t7);
        SDL_FreeSurface(t8);
        SDL_FreeSurface(t9);
        SDL_FreeSurface(t10);
        SDL_FreeSurface(t11x);
        SDL_FreeSurface(t12x);
        SDL_FreeSurface(t13x);
        SDL_FreeSurface(t14x);
        SDL_FreeSurface(t15x);
        SDL_FreeSurface(t16x);
        SDL_FreeSurface(t17x);
        SDL_FreeSurface(t18x);
        SDL_FreeSurface(t19x);
        SDL_FreeSurface(t20x);
        SDL_FreeSurface(t21x);
        SDL_FreeSurface(t22x);
        SDL_FreeSurface(t23x);
        SDL_FreeSurface(t24x);
        SDL_FreeSurface(t25x);
        SDL_FreeSurface(t26x);
        SDL_FreeSurface(t27x);
        SDL_FreeSurface(image);
       /* int ratio=13;
        int biajolo=229;
        int biabala=30;*/
        SDL_Rect dis;
        dis.x=0; dis.y=0; dis.w =1080; dis.h=554; 
        /*SDL_Rect t11;
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
        t18.x = 246*ratio/10+biajolo; t18.y=142*ratio/10-biabala; t18.w=158*ratio/10; t18.h=131*ratio/10;*/
        SDL_Rect t116;
        //bazi1
        struct Arm
        {
            SDL_Rect position;
            SDL_Texture *armt;
        };
        struct  Sarbaz
        {
            SDL_Rect position;
            int tedadeshun;
            SDL_Texture *tedad;
        };
        struct paigah{
        SDL_Rect position;
        int user;
        SDL_Texture *color;
        struct Arm *arm;
        struct Sarbaz *sarbaz;
        };
        struct paigah* paigah=( struct paigah*)malloc(sizeof(struct paigah)*8);
        int ratio=13;
        int ratio1=4;
        int biajolo=229;
        int biabala=30;
     
        SDL_Rect *arms=(SDL_Rect *)malloc(sizeof(SDL_Rect)*8);
        SDL_Rect *counter=(SDL_Rect *)malloc(sizeof(SDL_Rect)*8);
        SDL_Rect *position_paigah=(SDL_Rect *)malloc(sizeof(SDL_Rect *)*8);
        ////////// define rects //////////////////////////////////////////////////////////////////////
        SDL_Rect t11;
        t11.x = 72.5*ratio/10+biajolo; t11.y=36*ratio/10-biabala; t11.w=111*ratio/10; t11.h=69*ratio/10;
        *(position_paigah)=t11;
        SDL_Rect r11;
        r11.x = 72.5*ratio/10+biajolo+41; r11.y=36*ratio/10-biabala+4; r11.w=34; r11.h=41;
        *(arms)=r11;
        SDL_Rect c11;
        c11.x = 72.5*ratio/10+biajolo+41; c11.y=36*ratio/10-biabala+4+45; c11.w=32; c11.h=29;
        *(counter)=c11;
        SDL_Rect t12;
        t12.x = 57*ratio/10+biajolo-1; t12.y=96*ratio/10-biabala-1; t12.w=130*ratio/10; t12.h=94*ratio/10;
        *(position_paigah+1)=t12;
        SDL_Rect r12;
        r12.x = 57*ratio/10+biajolo-1+76; r12.y=96*ratio/10-biabala+12; r12.w=34; r12.h=41;
        *(arms+1)=r12;
        SDL_Rect c12;   
        c12.x = 57*ratio/10+biajolo-1+76; c12.y=96*ratio/10-biabala+12+45; c12.w=32; c12.h=29;    
       *(counter+1)=c12;
        SDL_Rect t13;
        t13.x = 54*ratio/10+biajolo; t13.y=165*ratio/10-biabala; t13.w=139*ratio/10; t13.h=238*ratio/10;
        *(position_paigah+2)=t13;
        SDL_Rect r13;
        r13.x = 54*ratio/10+biajolo+49; r13.y=165*ratio/10-biabala+64; r13.w=34; r13.h=41;
        *(arms+2)=r13;
        SDL_Rect c13;
        c13.x = 54*ratio/10+biajolo+49; c13.y=165*ratio/10-biabala+64+45; c13.w=32; c13.h=29;
        *(counter+2)=c13;
        SDL_Rect t14;
        t14.x = 175*ratio/10+biajolo; t14.y=31*ratio/10-biabala; t14.w=87*ratio/10; t14.h=152*ratio/10;
        *(position_paigah+3)=t14;
        SDL_Rect r14;
        r14.x = 175*ratio/10+biajolo+10; r14.y=31*ratio/10-biabala+73; r14.w=34; r14.h=41;
        *(arms+3)=r14;
        SDL_Rect c14;
        c14.x = 175*ratio/10+biajolo+10; c14.y=31*ratio/10-biabala+73+45; c14.w=32; c14.h=29;
        *(counter+3)=c14;
        SDL_Rect t15;
        t15.x = 156*ratio/10+biajolo; t15.y=175*ratio/10-biabala; t15.w=94*ratio/10; t15.h=155*ratio/10;
        *(position_paigah+4)=t15;
        SDL_Rect r15;
        r15.x = 156*ratio/10+biajolo+45; r15.y=175*ratio/10-biabala+34; r15.w=34; r15.h=41;
        *(arms+4)=r15;
        SDL_Rect c15;
        c15.x = 156*ratio/10+biajolo+45; c15.y=175*ratio/10-biabala+34+45; c15.w=32; c15.h=29;
        *(counter+4)=c15;
        SDL_Rect t16;
        t16.x = 176*ratio/10+biajolo; t16.y=262*ratio/10-biabala; t16.w=128*ratio/10; t16.h=174*ratio/10;
        *(position_paigah+5)=t16;
        SDL_Rect r16;
        r16.x = 176*ratio/10+biajolo+58; r16.y=262*ratio/10-biabala+68; r16.w=34; r16.h=41;
        *(arms+5)=r16;
        SDL_Rect c16;
        c16.x = 176*ratio/10+biajolo+58; c16.y=262*ratio/10-biabala+68+45; c16.w=32; c16.h=29;
        *(counter+5)=c16;
        SDL_Rect t17;
        t17.x = 219*ratio/10+biajolo; t17.y=46*ratio/10-biabala; t17.w=140*ratio/10; t17.h=106*ratio/10;
        *(position_paigah+6)=t17;
        SDL_Rect r17;
        r17.x = 219*ratio/10+biajolo+72; r17.y=46*ratio/10-biabala+36; r17.w=34; r17.h=41;
        *(arms+6)=r17;
        SDL_Rect c17;
        c17.x = 219*ratio/10+biajolo+72; c17.y=46*ratio/10-biabala+36+45; c17.w=32; c17.h=29;
        *(counter+6)=c17;
        SDL_Rect t18;
        t18.x = 246*ratio/10+biajolo; t18.y=142*ratio/10-biabala; t18.w=158*ratio/10; t18.h=131*ratio/10;
         *(position_paigah+7)=t18;
        SDL_Rect r18;
        r18.x = 246*ratio/10+biajolo+69; r18.y=142*ratio/10-biabala+57; r18.w=34; r18.h=41;
        *(arms+7)=r18;
        SDL_Rect c18;
        c18.x = 246*ratio/10+biajolo+71; c18.y=142*ratio/10-biabala+57+45; c18.w=32; c18.h=29;
        *(counter+7)=c18;
        ////////////////////////////////////////////////////////////////////////////////////////////
        struct sarbazRuHava
        {
          double positionLx;
          double positionLy;
          double positionDx;
          double positionDy;
          double positionArmDx;
          double positionArmDy;
          int kamkardan_az_maghsad; 
          int dest;
          int loc;
          SDL_Rect *position;
          int jahateharecat;
          int user;
          int speed;
          double teta;
          SDL_Texture *arm;
          int ison;
          int tedadeshun;
        };
        int sarbazH_size=400;
        struct sarbazRuHava* sarbazH = (struct sarbazRuHava*)malloc(sizeof(struct sarbazRuHava)*sarbazH_size);
        int *tedad=(int *)malloc(sizeof(int)*100);
        int *head_tedad=(int *)malloc(sizeof(int)*2);
        *head_tedad=1;
        *(tedad+ *head_tedad-1)=0;
        int is_move=0;
       void  addSarbazRuHava(int tedad1)
        {
          double deltay; 
          double deltax;
            for(int i= *(tedad+ *head_tedad-2);i<*(tedad+*head_tedad-1);++i)
            {
              // printf("i=%d\n",i);
               deltay=(sarbazH+i)->positionDy - (sarbazH+i)->positionLy;
               deltax=(sarbazH+i)->positionDx - (sarbazH+i)->positionLx;
              // printf("(sarbazH+i)->positionLx=%f (sarbazH+i)->positionLy=%f (sarbazH+i)->positionDx =%f (sarbazH+i)->positionDy=%f\n",(sarbazH+i)->positionLx,(sarbazH+i)->positionLy,(sarbazH+i)->positionDx,(sarbazH+i)->positionDy );

                if(deltay>=0 && deltax>=0)
                {
                    (sarbazH+i)->jahateharecat=1;
                }
                else if(deltay >=0 && deltax<=0)
                {
                   
                    (sarbazH+i)->jahateharecat=2;
                }
                else if(deltay<=0 && deltax<=0)
                {
                     (sarbazH+i)->jahateharecat=3;
                }
                else 
                {
                    (sarbazH+i)->jahateharecat=4;
                }
                double deltaxCopy = (deltax < 0) ? -deltax: deltax;
                double deltayCopy = (deltay < 0) ? -deltay : deltay;
                double tan= (double)(deltayCopy/deltaxCopy);
                (sarbazH+i)->teta= atan(tan);
            //    printf("%lf\n",tan);
                (sarbazH+i)->position=(SDL_Rect *)malloc(sizeof(SDL_Rect*));(sarbazH+i)->position->x=((sarbazH+i)->positionLx); (sarbazH+i)->position->y= ((sarbazH+i)->positionLy);
                (sarbazH+i)->position->w=10; (sarbazH+i)->position->h=10;
                if(i % 3 == 1){
                  switch ((sarbazH+i)->jahateharecat)
                 {
                 case 1:
                 (sarbazH+i)->position->x -=(10*sin( (sarbazH+i)->teta));
                 (sarbazH+i)->position->y +=(10*cos( (sarbazH+i)->teta));
                     break;
                 case 2 :
                 (sarbazH+i)->position->x +=10*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y +=10*cos( (sarbazH+i)->teta);
                 break;
                 case 3 : 
                 (sarbazH+i)->position->x +=10*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y -=10*cos( (sarbazH+i)->teta);
                 break;
                 case 4 :
                 (sarbazH+i)->position->x -=10*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y -=10*cos( (sarbazH+i)->teta);
                 default:
                     break;
                 }
                  }
                if(i % 3 == 2){
                  switch ((sarbazH+i)->jahateharecat)
                 {
                 case 1:
                 (sarbazH+i)->position->x +=(10*sin( (sarbazH+i)->teta));
                 (sarbazH+i)->position->y -=(10*cos( (sarbazH+i)->teta));
                     break;
                 case 2 :
                 (sarbazH+i)->position->x -=10*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y -=10*cos( (sarbazH+i)->teta);
                 break;
                 case 3 :
                 (sarbazH+i)->position->x -=10*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y +=10*cos( (sarbazH+i)->teta);
                 break;
                 case 4 :
                 (sarbazH+i)->position->x +=10*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y +=10*cos( (sarbazH+i)->teta);
                 default:
                     break;
                 }
                  }
                (sarbazH+i)->arm = (SDL_Texture *)malloc(sizeof(SDL_Texture*)*1);
                (sarbazH+i)->arm = SDL_CreateTextureFromSurface(renderer1,S1);
                if((sarbazH+i)->arm == NULL){printf("%s",SDL_GetError());}
                (sarbazH+i)->ison= 2;
                
        }
        }

        int *head_sarbazRuHava=(int *)malloc(sizeof(int));
        *head_sarbazRuHava=0;
        void rendersoldiers(int *head)
        {
            int i=*(tedad + *head_tedad-2);
            //<printf("balebale\n");
             static  int counter=1;
            while(1)
            { 
           
             if((sarbazH+i)){
               if(!(sarbazH+i)->arm){printf("%s",SDL_GetError());}
              SDL_RenderCopy(renderer1,(sarbazH+i)->arm,NULL,(sarbazH+i)->position);  
           //  printf("counter=%d i=%d\n",counter,i);
             ++i;
             if((sarbazH+i)->ison != 2){break;}
             if(i >= *head){
             //printf("i=%d *headRuHava=%d\n",i,*head);
                 ++ *head;
                 if(*head % 3 == 0){break;}
                 else {}
                 }   
             }
              else{break;}
          
            
        }
       
        ++counter;
        }
      void addsoldier(struct paigah* paigah1,int add,SDL_Renderer *renderer)
        {
        TTF_Font *font1 = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        (paigah1)->sarbaz->tedadeshun+=add;
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah1)->sarbaz->tedadeshun);
        SDL_Color color = {0,255,0,255};
        SDL_Surface *text = TTF_RenderText_Solid(font1,c,color);
       // printf("Yes\n");
        if(text == NULL){printf("%s\n",TTF_GetError());}
        (paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text);
        free(text); free(c); TTF_CloseFont(font1);
        }        
        void minussoldier(struct paigah* paigah1,int add,SDL_Renderer *renderer,int i)
        {
        //printf("paigah=%p\n",paigah1);
        if((paigah1)->sarbaz->tedadeshun>0)
        {
        TTF_Font *font1 = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        (paigah1)->sarbaz->tedadeshun-=add;
        printf("tedad=%d\n",(paigah1)->sarbaz->tedadeshun);
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah1)->sarbaz->tedadeshun);
      printf("(sarbazH+i)->user=%d\n",(sarbazH+i)->user);
        SDL_Color color = {0,255,0,255};
      
        SDL_Surface *text = TTF_RenderText_Solid(font1,c,color);
       
        if(text == NULL){printf("%s\n",TTF_GetError());}
        (paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text);
        free(text); free(c); TTF_CloseFont(font1);
        }
        else{
         TTF_Font *font1 = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
         (paigah1)->user=(sarbazH+i)->user;
         (paigah1)->arm->armt= *(armsT+(sarbazH+i)->user);
         
        (paigah1)->sarbaz->tedadeshun=1;
        printf("tedad=%d\n",(paigah1)->sarbaz->tedadeshun);
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah1)->sarbaz->tedadeshun);
      
        SDL_Color color = {0,255,0,255};
      
        SDL_Surface *text = TTF_RenderText_Solid(font1,c,color);
       
        if(text == NULL){printf("%s\n",TTF_GetError());}
        (paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text);
        free(text); free(c); TTF_CloseFont(font1);
        }
        }        
      void filltheblanksarbaz(int i)
      {
        int j;
        printf("(sarbazH+i)->dest)=%d    (paigah+ (sarbazH+i)->dest)->user=%d  (sarbazH+i)->user=%d\n",(sarbazH+i)->dest,(paigah+ (sarbazH+i)->dest)->user,(sarbazH+i)->user);
          if((sarbazH+i)->user == (paigah+ (sarbazH+i)->dest)->user)
          {
            addsoldier(((paigah+ (sarbazH+i)->dest)),1,renderer1);
          }
          else
          {
             minussoldier(((paigah+ (sarbazH+i)->dest)),1,renderer1,i);
          }


        for( j=i;j< *head_sarbazRuHava-1;++j)
        {
        // printf("j=%d\n",j);
        *(sarbazH+j)=*(sarbazH+j+1);
        }
       SDL_DestroyTexture((sarbazH+j-1)->arm);   /*free((sarbazH+j-1)->position);*/  (sarbazH+j-1)->position ==NULL; 
       //    memcpy((sarbazH+j-1),NULL,sizeof(struct sarbazRuHava));
        (sarbazH+j-1)->ison=0;
        if(*(tedad+ *head_tedad-1)>0){--*(tedad+ *head_tedad-1);}
        if(*head_sarbazRuHava>0){--*head_sarbazRuHava;}

             


    //   printf("*head_sarbazRuHava=%d *(tedad+ *head_tedad-1)=%d\n",*head_sarbazRuHava,*(tedad+ *head_tedad-1));
      }
        void continuetomove(int *head)
        {
             int i=*(tedad + *head_tedad-2);
           int *indexofFrees=(int *)malloc(sizeof(int)*200);
           *(indexofFrees)=-1;
           ++indexofFrees;
            while(1)
            {  
              if( (sarbazH+i)->kamkardan_az_maghsad==1){minussoldier((paigah+ (sarbazH+i)->loc),1,renderer1,i); (sarbazH+i)->kamkardan_az_maghsad=0;}

               if(((sarbazH+i)->ison == 2))
               {
                 switch ((sarbazH+i)->jahateharecat)
                 {
                 case 1:
                 (sarbazH+i)->position->x +=((double)((40*cos( (sarbazH+i)->teta))/2)-(double)((40*cos( (sarbazH+i)->teta))/2)/2);
                 (sarbazH+i)->position->y +=((double)((40*sin( (sarbazH+i)->teta))/2)-(double)((40*sin( (sarbazH+i)->teta))/2)/2);
                  break;
                 case 2 :
                 (sarbazH+i)->position->x -=((double)((40*cos( (sarbazH+i)->teta))/2)-(double)((40*cos( (sarbazH+i)->teta))/2)/2);
                 (sarbazH+i)->position->y +=((double)((40*sin( (sarbazH+i)->teta))/2)-((40*sin( (sarbazH+i)->teta))/2)/2);;
                 break;
                 case 3 :
                 (sarbazH+i)->position->x -=((double)((40*cos( (sarbazH+i)->teta))/2)-((double)(40*cos( (sarbazH+i)->teta))/2)/2);
                 (sarbazH+i)->position->y -=((double)((40*sin( (sarbazH+i)->teta))/2)-((double)(40*sin( (sarbazH+i)->teta))/2)/2);;
                 break;
                 case 4 :
                 (sarbazH+i)->position->x +=((double)((40*cos( (sarbazH+i)->teta))/2)-((double)(40*cos( (sarbazH+i)->teta))/2)/2);
                 (sarbazH+i)->position->y -=((double)((40*sin( (sarbazH+i)->teta))/2)-((double)(40*sin( (sarbazH+i)->teta))/2)/2);
                 default:
                     break;
                 }     
               }
                 if(((sarbazH+i)->ison == 2) &&  (sarbazH+i)->position->y > (sarbazH+i)->positionArmDy-10 &&   (sarbazH+i)->position->y < (sarbazH+i)->positionArmDy+41 &&  (sarbazH+i)->position->x > (sarbazH+i)->positionArmDx-10 && (sarbazH+i)->position->x < (sarbazH+i)->positionArmDx+34)
                  {*indexofFrees=i; ++indexofFrees;}
                  ++i;
                
                  if(i  >= *head){break;} 
             }

           if(*head_sarbazRuHava != 0){
            --indexofFrees;
           while (*(indexofFrees) != -1)
           {
             filltheblanksarbaz(*indexofFrees);
             --indexofFrees;
           }
           free(indexofFrees);
           
           }
        }
        

       

        TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        if(font == NULL){printf("bia paeen saremon dard geref %s\n",TTF_GetError());}
        for(int i=0;i<8;++i)
        {
        (paigah+i)->sarbaz = (struct Sarbaz*)malloc(sizeof(struct Sarbaz));
        (paigah+i)->sarbaz->tedadeshun=50;
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah+i)->sarbaz->tedadeshun);
        SDL_Color color = {0,255,0,255};
        SDL_Surface *text = TTF_RenderText_Solid(font,c,color);
       
        (paigah+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text);
       
        free(text);
        free(c);
        }
        TTF_CloseFont(font);
      ///submit arm and sarbaz positions of paigah///////////////////////////////////
        for(int i=0;i<8;++i)
        { 
                (paigah+i)->arm = (struct Arm*)malloc(sizeof(struct Arm));
                (paigah+i)->arm->position = *(arms+i);
                (paigah+i)->sarbaz->position = *(counter+i);

        }
      ///////////////////////////////////////////////////////////////////////////////  
        
      ////////////////////add location or destination fo soldiers /////////////////////////////////////////
        void addlocation(int location,struct paigah* paigah)
       {

            if(*(tedad+ *head_tedad-1) >= (sarbazH_size-60)){ sarbazH_size+=200; sarbazH=(struct sarbazRuHava*)realloc(sarbazH,sarbazH_size); if(sarbazH+*(tedad+*head_tedad-1)+1 == NULL)printf("%s",SDL_GetError());}
           
           
           for(int i=*(tedad+ *head_tedad-1);i<(paigah+location)->sarbaz->tedadeshun+*(tedad+ *head_tedad-1);++i)
           {
             if(location==0)
              {
                       (sarbazH+i)->positionLx=(double)(((paigah+location)->arm->position.x)-10);
                       (sarbazH+i)->positionLy=(double)(((paigah+location)->arm->position.y)-10);
                      // (sarbazH+i)->positionDx= -1;

               }
               
                      
                       (sarbazH+i)->positionLx=(double)((double)((paigah+location)->arm->position.x)+(double)(((paigah+location)->arm->position.w)/2));
                       (sarbazH+i)->positionLy=(double)((double)((paigah+location)->arm->position.y)+(double)(((paigah+location)->arm->position.h)/2));
                       //(sarbazH+i)->positionDx= -1;
                         (sarbazH+i)->kamkardan_az_maghsad=0;
                        (sarbazH+i)->user=(paigah+location)->user;
                        (sarbazH+i)->loc=location;
             //  printf(" primierly (sarbazH+i)->positionLy=%f  (sarbazH+i)->positionLx=%f\n", (sarbazH+i)->positionLy,(sarbazH+i)->positionLx);
           }
            
          
             

       }
        void add_destination(int destination,struct paigah* paigah)
       {

            printf("*head sarbazRuHava=%d\n",*(head_sarbazRuHava));
           for(int i=*(tedad+ *head_tedad-1);i<(paigah+destination)->sarbaz->tedadeshun+ *(tedad+ *head_tedad-1);++i)
           {
               if(destination == 5 && (sarbazH+i)->positionLx==(double)((double)((paigah)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                // printf("salamaleikom");
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x)+17);
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
               else if(destination == 0 && (sarbazH+i)->positionLx==(double)((double)((paigah+7)->arm->position.x)+(double)(((paigah+7)->arm->position.w)/2)))
               {
                //        printf("salamaleikom2");
                        (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+8);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
              else if(destination == 7 && (sarbazH+i)->positionLx==(double)((double)((paigah)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                        //printf("salamaleikom3");
                        (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+8);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;


               }
                //       printf("added dest\n");
                      //  printf("i1=%d\n",i);
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(((double)((paigah+destination)->arm->position.x))+(double)(((paigah+destination)->arm->position.w)/2));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y))+(double)(((paigah+destination)->arm->position.h)/2);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       //printf(" primierly (sarbazH+i)->positionDy=%f  (sarbazH+i)->positionDx=%f\n", (sarbazH+i)->positionDy,(sarbazH+i)->positionDx);

           }
               *(tedad+ *head_tedad)=*(tedad+ *head_tedad-1)+((paigah+location)->sarbaz->tedadeshun);
               ++ *head_tedad;
                //printf(" \n*(tedad+ *head_tedad-1)=%d\n",*(tedad+ *head_tedad-1));
       }
        //////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////submit positions for paigah////////////////////////////////////////////////////
        for(int i=0;i<8;++i)
        {
            (paigah+i)->position.x=(position_paigah+i)->x;
            (paigah+i)->position.y=(position_paigah+i)->y;
            
          //  printf("xpostion=%d yposition=%d \n",(paigah+i)->position.x=(position_paigah+i)->x,(paigah+i)->position.y=(position_paigah+i)->y);
        }
        (armsT);