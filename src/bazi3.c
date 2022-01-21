int ratio=14;
int biajolo=-585;
int biabala=5;



        t116.x = 547*ratio/10+biajolo; t116.y=39*ratio/10-biabala; t116.w=136*ratio/10; t116.h=148*ratio/10;
        SDL_Rect t117;
        t117.x = 587*ratio/10+biajolo; t117.y=154*ratio/10-biabala; t117.w=210*ratio/10; t117.h=126*ratio/10;
        SDL_Rect t118;
        t118.x = 603*ratio/10+biajolo; t118.y=254*ratio/10-biabala; t118.w=216*ratio/10; t118.h=128*ratio/10;
        SDL_Rect t122;
        t122.x = 660*ratio/10+biajolo; t122.y=47*ratio/10-biabala; t122.w=197*ratio/10; t122.h=115*ratio/10;
        SDL_Rect t123;
        t123.x = 818*ratio/10+biajolo; t123.y=33*ratio/10-biabala; t123.w=94*ratio/10; t123.h=108*ratio/10;
        SDL_Rect t124;
        t124.x = 779*ratio/10+biajolo; t124.y=140*ratio/10-biabala; t124.w=187*ratio/10; t124.h=103*ratio/10;
        SDL_Rect t125;
        t125.x = 747*ratio/10+biajolo; t125.y=213*ratio/10-biabala; t125.w=275*ratio/10; t125.h=182*ratio/10;
        SDL_Rect t126;
        t126.x = 867*ratio/10+biajolo; t126.y=20*ratio/10-biabala; t126.w=119*ratio/10; t126.h=166*ratio/10;
        SDL_Rect t127;
        t127.x = 958*ratio/10+biajolo; t127.y=102*ratio/10-biabala; t127.w=103*ratio/10; t127.h=173*ratio/10;
        SDL_RenderCopy(renderer1,te16,NULL,&t116);
        SDL_RenderCopy(renderer1,te17,NULL,&t117);
        SDL_RenderCopy(renderer1,te18,NULL,&t118);
        SDL_RenderCopy(renderer1,te22,NULL,&t122);
        SDL_RenderCopy(renderer1,te23,NULL,&t123);
        SDL_RenderCopy(renderer1,te24,NULL,&t124);
        SDL_RenderCopy(renderer1,te25,NULL,&t125);
        SDL_RenderCopy(renderer1,te26,NULL,&t126);
        SDL_RenderCopy(renderer1,te27,NULL,&t127);
        SDL_RenderPresent(renderer1);