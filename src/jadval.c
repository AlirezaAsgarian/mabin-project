



 for (int i = 0; i < *head_player-1; i++)     
      {
    for (int j = 0; j < *head_player-i-1; j++)
    { 
        if ((player+j)->id > (player+j+1)->id) 
            {struct players temp1;
            temp1=*(player+j);
            *(player+j)=*(player+j+1);
            *(player+j+1)=temp1;
            }
    }
      }

SDL_RenderClear(renderer1);
int counter=0;
for(int i=*head_player-1 ; i>=*head_player-6;--i)
{
    SDL_Texture *addads=(SDL_Texture*)malloc(sizeof(SDL_Texture*));
    SDL_Texture *names=(SDL_Texture*)malloc(sizeof(SDL_Texture*));
                if(i<0){break;}
                TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Regular.ttf",10);
                SDL_Color color = { 255, 0, 255};
                SDL_Surface *text_temp=(SDL_Surface*)malloc(sizeof(SDL_Surface));
                SDL_Surface *text_temp2=(SDL_Surface*)malloc(sizeof(SDL_Surface));
                text_temp = TTF_RenderText_Solid( font,(player+i)->name , color );
                char *c=(char *)malloc(sizeof(char)*10);
                sprintf(c,"%d",(player+i)->id);
                text_temp2 = TTF_RenderText_Solid(font,c,color);
                SDL_Rect *rect=(SDL_Rect *)malloc(sizeof(SDL_Rect));     rect->y=counter*35+45; rect->x=210; rect->w=strlen((player+i)->name)*8; rect->h=22;
                SDL_Rect *rect1=(SDL_Rect *)malloc(sizeof(SDL_Rect));    rect1->y=counter*35+45; rect1->x=775; rect1->w=strlen(c)*8; rect1->h=22;
                names=SDL_CreateTextureFromSurface(renderer1,text_temp);
                addads=SDL_CreateTextureFromSurface(renderer1,text_temp2);
                SDL_RenderCopy(renderer1,names,NULL,rect);
                SDL_RenderCopy(renderer1,addads,NULL,rect1);
                ++counter;
                free(text_temp); SDL_DestroyTexture(addads);
                free(text_temp2); SDL_DestroyTexture(names); 
                free(font);
}

SDL_RenderPresent(renderer1);