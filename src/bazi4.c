int ratio=13;
int biajolo= -144;
int biabala= 280;

        SDL_Rect t16;
        t16.x = 176*ratio/10+biajolo; t16.y=262*ratio/10-biabala; t16.w=128*ratio/10; t16.h=174*ratio/10;
        SDL_Rect t110;
        t110.x = 240*ratio/10+biajolo; t110.y=354*ratio/10-biabala; t110.w=190*ratio/10; t110.h=170*ratio/10;
        SDL_Rect t111;
        t111.x = 354*ratio/10+biajolo; t111.y=275.5*ratio/10-biabala; t111.w=133*ratio/10; t111.h=246*ratio/10;
        SDL_Rect t115;
        t115.x = 461*ratio/10+biajolo; t115.y=329*ratio/10-biabala; t115.w=183*ratio/10; t115.h=163*ratio/10;
        SDL_Rect t119;
        t119.x = 616*ratio/10+biajolo; t119.y=336*ratio/10-biabala; t119.w=255*ratio/10; t119.h=103*ratio/10;
        SDL_Rect t120;
        t120.x = 627*ratio/10+biajolo; t120.y=410*ratio/10-biabala; t120.w=141*ratio/10; t120.h=93*ratio/10;
        SDL_Rect t121;
        t121.x = 751*ratio/10+biajolo; t121.y=407*ratio/10-biabala; t121.w=122*ratio/10; t121.h=97*ratio/10;




        SDL_RenderCopy(renderer1,te6,NULL,&t16);
        SDL_RenderCopy(renderer1,te10,NULL,&t110);
        SDL_RenderCopy(renderer1,te11,NULL,&t111);
        SDL_RenderCopy(renderer1,te15,NULL,&t115);
        SDL_RenderCopy(renderer1,te19,NULL,&t119);
        SDL_RenderCopy(renderer1,te20,NULL,&t120);
        SDL_RenderCopy(renderer1,te21,NULL,&t121);
        SDL_RenderPresent(renderer1);