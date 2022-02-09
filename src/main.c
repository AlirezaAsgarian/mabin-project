//Be name khoda
#include<stdio.h>
#include <SDL.h>       
#include<stdbool.h>
#include<math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include<SDL_events.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
enum window{menu_main,select_naghse,tasadof,bazi1,bazi2,bazi3,bazi4,user_name,jadval};
int main(int argc, char ** argv)
{
   
    SDL_Init(SDL_INIT_EVERYTHING);
    
     if(TTF_Init() == -1){printf("error");}
   
    SDL_Window * window1 = SDL_CreateWindow("State.io",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1080, 554, 0);
   if(window1 == NULL){printf("%s\n",SDL_GetError()); return 0;}
    SDL_Renderer *renderer1 = SDL_CreateRenderer(window1, -1, SDL_RENDERER_ACCELERATED);
   
    if(renderer1 == NULL){printf("%s\n",SDL_GetError()); return 0;}
 
   
     #include "naghshe1.c"
     //tedad1=12;
    
   while (!quit)  
    {
     SDL_GetMouseState(&xm,&ym);
      while(SDL_PollEvent(&e))
      {
   
             if(e.type== SDL_MOUSEBUTTONDOWN) {
             
               #include "mouse settings.c"
               }
              else if (e.type == SDL_QUIT ){quit = true;}
              else if(e.type == SDL_KEYDOWN && iswindow==user_name){
                if(e.key.keysym.sym != SDLK_BACKSPACE && e.key.keysym.sym != SDLK_RETURN){
                   text[head_text]=e.key.keysym.sym;
                   ++head_text;
                   username_rect.w+=20;                                                   
                }
                else if(e.key.keysym.sym == SDLK_BACKSPACE){
                 text[head_text]=NULL;
                 --head_text;
                 username_rect.w-=20; 
                }
                else {

                  iswindow=menu_main; 
                  #include "file_handling.c"
                }
                TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
                SDL_Color color = { 0, 0, 0 };
                text1 = TTF_RenderText_Solid( font, text, color );
                free(font);
                                                                   
                                                                   }
     
      }
 
      
           

      
       
          
          if(iswindow == user_name)
          {
            text_texture = SDL_CreateTextureFromSurface( renderer1, text1 );
            SDL_RenderClear(renderer1);
            
           
            SDL_RenderCopy(renderer1,usernameT,NULL,NULL);
            SDL_RenderCopy(renderer1,text_texture,NULL,&username_rect);
            SDL_RenderPresent(renderer1);
          }
          if(iswindow == menu_main)
        {

         #include "menu.c"

          }          
          else if(iswindow == jadval)
          {
             #include "jadval.c"
          }
       
        else if(iswindow == bazi1+20)
        {
         #include "bazi1.c"
         #include "harifAI1.c"
        }
        else if(iswindow == bazi2+20)
        {
          #include "bazi2.c"
          #include "bazi2_AI.c"
        }
        else if(iswindow == bazi3+20)
        {

         
          #include "bazi3.c"
          #include "bazi3 AI.c"
        }
        else if(iswindow == bazi4+20)
        {
          #include "bazi4.c"
          #include "bazi4 AI.c"
        }
        else if(iswindow == select_naghse+8)
        {
           #include "select_naghse.c"
            
        }
        if(iswindow== tasadof+40)
        {
         
        #include "tasafof.c"
        #include "tasadof_AI.c"
        }
        else 
        {
      
        }
        ++counter_Time;
        if(counter_Time>60){counter_Time=0;}

        
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

