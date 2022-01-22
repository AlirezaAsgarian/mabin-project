//Be name khoda
#include<stdio.h>
#include <SDL.h>       
#include<stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include<stdlib.h>
#include<time.h>
enum window{menu,select_naghse,tasadof,bazi1,bazi2,bazi3,bazi4};
int cmp(const void *a,const void *b)
{

int x =	(rand()%3) ;
if(x > 1){return 1;}
else{return -1;}
}
int main(int argc, char ** argv)
{
    bool quit = false;
    SDL_Event event;
    SDL_Init(SDL_INIT_EVERYTHING);
    srand(time(NULL));
    int pointsOfMap[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int tedad=rand()%6+6;
    qsort(pointsOfMap,12,sizeof(int),cmp);
    SDL_Window * window = SDL_CreateWindow("SDL2 Displaying Image",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1080, 554, 0);
    SDL_Renderer *renderer1 = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Renderer *renderer2 = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
   
     #include</home/alireza/state.io/src/naghshe1.c>
     SDL_Rect bakhsh1; bakhsh1.x=0; bakhsh1.y=0; bakhsh1.w=270; bakhsh1.h=185;
     SDL_Rect bakhsh2; bakhsh2.x=270; bakhsh2.y=0; bakhsh2.w=270; bakhsh2.h=185;
     SDL_Rect bakhsh3; bakhsh3.x=540; bakhsh3.y=0; bakhsh3.w=270; bakhsh3.h=185;
     SDL_Rect bakhsh4; bakhsh4.x=810; bakhsh4.y=0; bakhsh4.w=270; bakhsh4.h=185;
     SDL_Rect bakhsh5; bakhsh5.x=0; bakhsh5.y=185; bakhsh5.w=270; bakhsh5.h=185;
     SDL_Rect bakhsh6; bakhsh6.x=270; bakhsh6.y=185; bakhsh6.w=270; bakhsh6.h=185;
     SDL_Rect bakhsh7; bakhsh7.x=540; bakhsh7.y=185; bakhsh7.w=270; bakhsh7.h=185;
     SDL_Rect bakhsh8; bakhsh8.x=810; bakhsh8.y=185; bakhsh8.w=270; bakhsh8.h=185;
     SDL_Rect bakhsh9; bakhsh9.x=0;   bakhsh9.y=370; bakhsh9.w=270; bakhsh9.h=184;
     SDL_Rect bakhsh10; bakhsh10.x=270; bakhsh10.y=370; bakhsh10.w=270; bakhsh10.h=184;
     SDL_Rect bakhsh11; bakhsh11.x=540; bakhsh11.y=370; bakhsh11.w=270; bakhsh11.h=184;
     SDL_Rect bakhsh12; bakhsh12.x=810; bakhsh12.y=370; bakhsh12.w=270; bakhsh12.h=184;
     SDL_Rect bakhsh[12]={bakhsh1,bakhsh2,bakhsh3,bakhsh4,bakhsh5,bakhsh6,bakhsh7,bakhsh8,bakhsh9,bakhsh10,bakhsh11,bakhsh12};
     SDL_SetRenderDrawColor(renderer2,255,0,0,255);
     

 int fpm= 60;
 int isset=1;
 int tedadeharif= rand()%2+1;
 /*TTF_Init();
  TTF_Font *font = TTF_OpenFont("LiberationSerif-Regular.ttf",20);
  SDL_Color color = {0,255,0,255};
  SDL_Surface *text = TTF_RenderText_Solid(font,"hello world",color);
  SDL_Texture *message = SDL_CreateTextureFromSurface(renderer1,text);*/
   SDL_bool done = true;
int xm, ym;
Uint32 buttons;

SDL_Rect button;
button.x=0; button.y=0; button.w=50; button.h=50;
 //SDL_RenderFillRect(renderer2,&button);

int iswindow= select_naghse+8;
    while (!quit)
    {
      buttons = SDL_GetMouseState(&xm, &ym);
      while(SDL_PollEvent(&event))
      {
        switch (event.type)
        {
        case SDL_QUIT:
            quit = true;
            break;
            case SDL_MOUSEBUTTONDOWN :
         #include </home/alireza/state.io/src/mouse settings.c>
            break;
        }
      }

        SDL_RenderClear(renderer1);
      
        
      
       
        if(iswindow == -1){
          #include</home/alireza/state.io/src/naghshe11.c> 
          SDL_RenderPresent(renderer1);}
        else if(iswindow == -2 ) { 

        for(int i=0;i<tedad;++i)
        {
        SDL_RenderCopy(renderer1,*(distinct+i),NULL,&bakhsh[pointsOfMap[i]]);
        }
        SDL_RenderPresent(renderer1);
        }
       else if(iswindow == bazi1+20)
        {
          #include</home/alireza/state.io/src/bazi1.c>
        }
        else if(iswindow == bazi2+20)
        {
          #include</home/alireza/state.io/src/bazi2.c>
        }
        else if(iswindow == bazi3+20)
        {
          #include</home/alireza/state.io/src/bazi3.c>
        }
        else if(iswindow == bazi4+20)
        {
          #include</home/alireza/state.io/src/bazi4.c>
        }
        else if(iswindow == select_naghse+8)
        {
            #include</home/alireza/state.io/src/select_naghse.c>
        }
        else 
        {
          SDL_RenderClear(renderer2); 
          SDL_RenderPresent(renderer2);

        }
        printf("iswindow = %d \n",iswindow);
        SDL_Delay(1000/fpm);

    }
    	
    SDL_DestroyTexture(tex);
    SDL_DestroyTexture(te1);
    SDL_DestroyTexture(te2);
    SDL_DestroyTexture(te3);
    SDL_DestroyTexture(te4);
    SDL_DestroyTexture(te5);
    SDL_DestroyTexture(te6);
    SDL_DestroyTexture(te7);
    SDL_DestroyTexture(te8);
    SDL_DestroyTexture(te9);
    SDL_DestroyTexture(te10);
    SDL_DestroyTexture(te11);
    SDL_DestroyTexture(te12);
    SDL_DestroyTexture(te13);
    SDL_DestroyTexture(te14);
    SDL_DestroyTexture(te15);
    SDL_DestroyTexture(te16);
    SDL_DestroyTexture(te17);
    SDL_DestroyTexture(te18);
    SDL_DestroyTexture(te19);
    SDL_DestroyTexture(te20);
    SDL_DestroyTexture(te21);
    SDL_DestroyTexture(te22);
    SDL_DestroyTexture(te23);
    SDL_DestroyTexture(te24);
    SDL_DestroyTexture(te25);
    SDL_DestroyTexture(te26);
    SDL_DestroyTexture(te27);
    

    
    
    SDL_Quit();
 
    return 0;
}

