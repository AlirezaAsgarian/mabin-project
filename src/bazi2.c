int ratio=11;
int biajolo=68;
int biabala=40;

        t16.x = 176*ratio/10+biajolo; t16.y=262*ratio/10-biabala; t16.w=128*ratio/10; t16.h=174*ratio/10;
        t18.x = 246*ratio/10+biajolo; t18.y=142*ratio/10-biabala; t18.w=158*ratio/10; t18.h=131*ratio/10;
        SDL_Rect t19;
        t19.x = 295*ratio/10+biajolo; t19.y=187*ratio/10-biabala; t19.w=166*ratio/10; t19.h=183*ratio/10;
        SDL_Rect t110;
        t110.x = 240*ratio/10+biajolo; t110.y=354*ratio/10-biabala; t110.w=190*ratio/10; t110.h=170*ratio/10;
        SDL_Rect t111;
        t111.x = 354*ratio/10+biajolo; t111.y=275.5*ratio/10-biabala; t111.w=133*ratio/10; t111.h=246*ratio/10;
        SDL_Rect t112;
        t112.x = 329*ratio/10+biajolo; t112.y=70*ratio/10-biabala; t112.w=151*ratio/10; t112.h=131*ratio/10;
        SDL_Rect t113;
        t113.x = 444*ratio/10+biajolo; t113.y=54*ratio/10-biabala; t113.w=136*ratio/10; t113.h=180*ratio/10;
        SDL_Rect t114;
        t114.x = 440*ratio/10+biajolo; t114.y=175*ratio/10-biabala; t114.w=177*ratio/10; t114.h=179*ratio/10;
        SDL_Rect t115;
        t115.x = 461*ratio/10+biajolo; t115.y=329*ratio/10-biabala; t115.w=183*ratio/10; t115.h=163*ratio/10;
        SDL_RenderCopy(renderer1,te6,NULL,&t16);
        SDL_RenderCopy(renderer1,te8,NULL,&t18);
        SDL_RenderCopy(renderer1,te9,NULL,&t19);
        SDL_RenderCopy(renderer1,te10,NULL,&t110);
        SDL_RenderCopy(renderer1,te11,NULL,&t111);
        SDL_RenderCopy(renderer1,te12,NULL,&t112);
        SDL_RenderCopy(renderer1,te13,NULL,&t113);
        SDL_RenderCopy(renderer1,te14,NULL,&t114);
        SDL_RenderCopy(renderer1,te15,NULL,&t115);
        SDL_RenderPresent(renderer1);