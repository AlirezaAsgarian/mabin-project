int cmp(const void *a,const void *b)
{

int x =	(rand()%3) ;
if(x > 1){return 1;}
else{return -1;}
}
   int is_kond=0;
   int iswindow= user_name;
   char text[32];
   text[0]=NULL;
   int head_text=0;
   int counter_Time=0;
   int isset=1;
    
   
    bool quit = false;
    srand(time(NULL));
    int pointsOfMap[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int tedad1=rand()%6+6;
    //tedad1=12;
    qsort(pointsOfMap,12,sizeof(int),cmp);
   int is_destination=0;
   int location=0;
   
   //load parts of naghshe
    SDL_Surface *background = IMG_Load("/home/alireza/state.io/src/shridhar-thorat-1unsplash.png");
    SDL_Surface *random_button = IMG_Load("/home/alireza/state.io/src/button4.png");
    SDL_Surface *jadval1=IMG_Load("/home/alireza/state.io/src/jad1.png");
    SDL_Texture *jadvalT=SDL_CreateTextureFromSurface(renderer1,jadval1);
    SDL_Surface *menu=IMG_Load("/home/alireza/state.io/src/Game/1.jpg");
  ;
    SDL_Texture *menuT=SDL_CreateTextureFromSurface(renderer1,menu);
  
    SDL_Surface *user1_p1=IMG_Load("/home/alireza/state.io/src/potion/green/icons-castle-potion-green.png");
    SDL_Surface *user1_p2=IMG_Load("/home/alireza/state.io/src/potion/purple/icons-castle-potion_purple.png");
    SDL_Surface *user1_p3=IMG_Load("/home/alireza/state.io/src/potion/pink/icons-castle-potion_pink.png");
    SDL_Surface *user1_p4=IMG_Load("/home/alireza/state.io/src/potion/yellow/icons-castle-potion_yellow.png");
    SDL_Surface *user2_p1=IMG_Load("/home/alireza/state.io/src/potion/green/repo1_potion_green.png");
    SDL_Surface *user2_p2=IMG_Load("/home/alireza/state.io/src/potion/purple/repo1_potion_purple.png");
    SDL_Surface *user2_p3=IMG_Load("/home/alireza/state.io/src/potion/pink/repo1_potion_pink.png");
    SDL_Surface *user2_p4=IMG_Load("/home/alireza/state.io/src/potion/yellow/repo1_potion_yellow.png");
    SDL_Surface *user3_p1=IMG_Load("/home/alireza/state.io/src/potion/green/repo2_potion_green.png");
    SDL_Surface *user3_p2=IMG_Load("/home/alireza/state.io/src/potion/purple/repo2_potion_purple.png");
    SDL_Surface *user3_p3=IMG_Load("/home/alireza/state.io/src/potion/pink/repo2_potion_pink.png");
    SDL_Surface *user3_p4=IMG_Load("/home/alireza/state.io/src/potion/yellow/repo2._potion_yellowpng.png");
    SDL_Texture *user1_p1T=SDL_CreateTextureFromSurface(renderer1,user1_p1);
    SDL_Texture *user1_p2T=SDL_CreateTextureFromSurface(renderer1,user1_p2);
    SDL_Texture *user1_p3T=SDL_CreateTextureFromSurface(renderer1,user1_p3);
    SDL_Texture *user1_p4T=SDL_CreateTextureFromSurface(renderer1,user1_p4);
    SDL_Texture *user2_p1T=SDL_CreateTextureFromSurface(renderer1,user2_p1);
    SDL_Texture *user2_p2T=SDL_CreateTextureFromSurface(renderer1,user2_p2);
    SDL_Texture *user2_p3T=SDL_CreateTextureFromSurface(renderer1,user2_p3);
    SDL_Texture *user2_p4T=SDL_CreateTextureFromSurface(renderer1,user2_p4);
    SDL_Texture *user3_p1T=SDL_CreateTextureFromSurface(renderer1,user3_p1);
    SDL_Texture *user3_p2T=SDL_CreateTextureFromSurface(renderer1,user3_p2);
    SDL_Texture *user3_p3T=SDL_CreateTextureFromSurface(renderer1,user3_p3);
    SDL_Texture *user3_p4T=SDL_CreateTextureFromSurface(renderer1,user3_p4);
    SDL_Texture **usersT1=(SDL_Texture**)malloc(sizeof(SDL_Texture*)*4); *(usersT1)=user1_p1T; *(usersT1+1)=user1_p2T; *(usersT1+2)=user1_p3T; *(usersT1+3)=user1_p4T;
    SDL_Texture **usersT2=(SDL_Texture**)malloc(sizeof(SDL_Texture*)*4); *(usersT2)=user2_p1T; *(usersT2+1)=user2_p2T; *(usersT2+2)=user2_p3T; *(usersT2+3)=user2_p4T;
    SDL_Texture **usersT3=(SDL_Texture**)malloc(sizeof(SDL_Texture*)*4); *(usersT3)=user3_p1T; *(usersT3+1)=user3_p2T; *(usersT3+2)=user3_p3T; *(usersT3+3)=user3_p4T;
    SDL_Surface *username=IMG_Load("/home/alireza/state.io/src/Game/intro.png");
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
    SDL_Surface *t1y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/red.png");
    SDL_Surface *t2y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/red.png");
    SDL_Surface *t3y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/red.png");
    SDL_Surface *t4y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/red.png");
    SDL_Surface *t5y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/red.png");
    SDL_Surface *t6y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/red.png");
    SDL_Surface *t7y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/red.png");
    SDL_Surface *t8y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/red.png");
    SDL_Surface *t9y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/red.png");
    SDL_Surface *t10y = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/red.png");
    SDL_Surface *t11xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/red.png");
    SDL_Surface *t12xy= IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/red.png");
    SDL_Surface *t13xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/red.png");
    SDL_Surface *t14xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/red.png");
    SDL_Surface *t15xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/red.png");
    SDL_Surface *t16xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/red.png");
    SDL_Surface *t17xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/red.png");
    SDL_Surface *t18xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/red.png");
    SDL_Surface *t19xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/red.png");
    SDL_Surface *t20xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/red.png");
    SDL_Surface *t21xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/red.png");
    SDL_Surface *t22xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/red.png");
    SDL_Surface *t23xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/red.png");
    SDL_Surface *t24xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/red.png");
    SDL_Surface *t25xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/red.png");
    SDL_Surface *t26xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/red.png");
    SDL_Surface *t27xy = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/red.png");
    SDL_Surface *t1r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/bl.png");
    SDL_Surface *t2r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/bl.png");
    SDL_Surface *t3r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/bl.png");
    SDL_Surface *t4r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/bl.png");
    SDL_Surface *t5r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/bl.png");
    SDL_Surface *t6r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/bl.png");
    SDL_Surface *t7r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/bl.png");
    SDL_Surface *t8r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/bl.png");
    SDL_Surface *t9r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/bl.png");
    SDL_Surface *t10r = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/bl.png");
    SDL_Surface *t11xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/bl.png");
    SDL_Surface *t12xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/bl.png");
    SDL_Surface *t13xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/bl.png");
    SDL_Surface *t14xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/bl.png");
    SDL_Surface *t15xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/bl.png");
    SDL_Surface *t16xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/bl.png");
    SDL_Surface *t17xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/bl.png");
    SDL_Surface *t18xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/bl.png");
    SDL_Surface *t19xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/bl.png");
    SDL_Surface *t20xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/bl.png");
    SDL_Surface *t21xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/bl.png");
    SDL_Surface *t22xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/bl.png");
    SDL_Surface *t23xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/bl.png");
    SDL_Surface *t24xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/bl.png");
    SDL_Surface *t25xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/bl.png");
    SDL_Surface *t26xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/bl.png");
    SDL_Surface *t27xr = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/bl.png");
    SDL_Surface *t1b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 1/br.png");
    SDL_Surface *t2b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 2/br.png");
    SDL_Surface *t3b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 3/br.png");
    SDL_Surface *t4b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 4/br.png");
    SDL_Surface *t5b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 5/br.png");
    SDL_Surface *t6b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 6/br.png");
    SDL_Surface *t7b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 7/br.png");
    SDL_Surface *t8b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 8/br.png");
    SDL_Surface *t9b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 9/br.png");
    SDL_Surface *t10b = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 10/br.png");
    SDL_Surface *t11xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 11/br.png");
    SDL_Surface *t12xb= IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 12/br.png");
    SDL_Surface *t13xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 13/br.png");
    SDL_Surface *t14xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 14/br.png");
    SDL_Surface *t15xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 15/br.png");
    SDL_Surface *t16xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 16/br.png");
    SDL_Surface *t17xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 17/br.png");
    SDL_Surface *t18xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 18/br.png");
    SDL_Surface *t19xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 19/br.png");
    SDL_Surface *t20xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 20/br.png");
    SDL_Surface *t21xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 21/br.png");
    SDL_Surface *t22xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 22/br.png");
    SDL_Surface *t23xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 23/br.png");
    SDL_Surface *t24xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 24/br.png");
    SDL_Surface *t25xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 25/br.png");
    SDL_Surface *t26xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 26/br.png"); 
    SDL_Surface *t27xb = IMG_Load("/home/alireza/state.io/src/نقشه ها/نقشه 1/تکه 27/br.png");
    //arms ////////////////////////////////////////////////////////////////////////////////////////////////////////
    SDL_Surface *r1b = IMG_Load("/home/alireza/state.io/src/projet_photos/Repositories/circle/repo1.png");
    SDL_Surface *r1r = IMG_Load("/home/alireza/state.io/src/project_photo/Repositories/icons-castle-red.png");
    SDL_Surface *r2r = IMG_Load("/home/alireza/state.io/src/projet_photos/Soldiers/repo2.png");
    SDL_Surface *p1=IMG_Load("/home/alireza/state.io/src/potion/green.png");
    SDL_Surface *p2=IMG_Load("/home/alireza/state.io/src/potion/purple.png");
    SDL_Surface *p3=IMG_Load("/home/alireza/state.io/src/potion/pink.png");
    SDL_Surface *p4=IMG_Load("/home/alireza/state.io/src/potion/yellow_brown.png");
    SDL_Texture *p1T = SDL_CreateTextureFromSurface(renderer1,p1);
    SDL_Texture *p2T = SDL_CreateTextureFromSurface(renderer1,p2);
    SDL_Texture *p3T = SDL_CreateTextureFromSurface(renderer1,p3);
    SDL_Texture *p4T = SDL_CreateTextureFromSurface(renderer1,p4);
    SDL_Texture *backgroundT= SDL_CreateTextureFromSurface(renderer1,background);
    
    SDL_Texture *usernameT = SDL_CreateTextureFromSurface(renderer1,username);
    SDL_Rect username_rect;
    username_rect.x=335; username_rect.y=320; username_rect.h=42; username_rect.w=0;
    SDL_Texture* text_texture;
    SDL_Surface* text1;
    struct potion{
      int user;
      int kodum_potion;
      SDL_Texture *arm;
      SDL_Rect position;
      int is_destroy;
      int counter_time;
    };
    struct players{
      char name[100];
      int id;
    };
    int kodum_player;
    struct players* player=( struct players*)malloc(sizeof( struct players)*90);
    int *head_player=(int *)malloc(sizeof(int));
    *head_player=3;
    struct players* player_asli=( struct players*)malloc(sizeof(struct players));
    struct potion* potion_base=(struct potion*)malloc(sizeof(struct potion)*4);
    (potion_base)->arm=(SDL_Texture *)malloc(sizeof(SDL_Texture*)); (potion_base)->arm=p1T; (potion_base)->kodum_potion=0; (potion_base)->is_destroy= 0;
    (potion_base+1)->arm=(SDL_Texture *)malloc(sizeof(SDL_Texture*)); (potion_base+1)->arm=p2T; (potion_base+1)->kodum_potion=0; (potion_base+1)->is_destroy= 0;
    (potion_base+2)->arm=(SDL_Texture *)malloc(sizeof(SDL_Texture*)); (potion_base+2)->arm=p3T; (potion_base+2)->kodum_potion=0; (potion_base+2)->is_destroy= 0; 
    (potion_base+3)->arm=(SDL_Texture *)malloc(sizeof(SDL_Texture*)); (potion_base+3)->arm=p4T; (potion_base+3)->kodum_potion=0; (potion_base+3)->is_destroy= 0; 
    struct potion *potions =(struct potion*)malloc(sizeof(struct potion)*1000);
    int *head_potion=(int *)malloc(sizeof(int));
    *head_potion=0;
    int users[4][2]={0,0,0,0,0,0,0,0};
    int users_time_potion[4]={0,0,0,0};
    void check_times_users_potion()
    {
      for(int i=0;i<4;++i)
      {
          if(users[i][0] != 0)
          {
            if(users_time_potion[i] > 400 ){users[i][0]=0; users[i][1]=0; users_time_potion[i]=0;}
            else{++users_time_potion[i];}
          }
      }
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    SDL_Surface *S1= IMG_Load("/home/alireza/state.io/src/project_photo/Soldiers/arrow icon_red.png");
    SDL_Surface *S2= IMG_Load("/home/alireza/state.io/src/projet_photos/Repositories/circle/soldier1.png");
    SDL_Surface *S3= IMG_Load("/home/alireza/state.io/src/projet_photos/Soldiers/soldier2.png");
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
        SDL_Texture *random_buttonT = SDL_CreateTextureFromSurface(renderer1,random_button);
        SDL_Rect random_button_p; random_button_p.x=405; random_button_p.y=0; random_button_p.w=270; random_button_p.h=60;
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
        
        SDL_Texture **imagess =(SDL_Texture **)malloc(108*sizeof(SDL_Texture*));
        for(int i=0;i<108;++i)
        {
        *(imagess+i) = (SDL_Texture *)malloc(sizeof(SDL_Texture*));
        *(imagess+i)= SDL_CreateTextureFromSurface(renderer1,*(images+i));
        if(*(imagess+i) == NULL){printf("can't %s",SDL_GetError());}
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
        SDL_Rect dis;
        dis.x=0; dis.y=0; dis.w =1080; dis.h=554; 
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
            int tedadeshunCopy;
            int tedad_credit;
            SDL_Texture *tedad;
        };
        struct paigah{
        SDL_Rect position;
        SDL_Texture *color;
        struct Arm *arm;
        struct Sarbaz *sarbaz;
        int user;
        int *shomare_dastoor;
        int toolesh;
        int is_exist;
        int pixels[80000][2];
        int head_pixel;
        int hamsaye[];
        };
        struct TeamH
        {
          int tedadekol;
          int shomare_paigah_ba_bishtarin_tedad;
          int *shomare_paigah_ha;
          bool is_attack;
          int hadaf;
        };
        struct TeamH *teamh;
        struct TeamH *user_team;
        struct paigah* paigah=( struct paigah*)malloc(sizeof(struct paigah)*8);
        struct paigah* paigahss=( struct paigah*)malloc(sizeof(struct paigah)*12);
        struct paigah* paigah2=( struct paigah*)malloc(sizeof(struct paigah)*9);
        int ratio=13;
        int ratio1=4;
        int biajolo=229;
        int biabala=30;
        SDL_Rect *arms=(SDL_Rect *)malloc(sizeof(SDL_Rect)*12);
        SDL_Rect *counter=(SDL_Rect *)malloc(sizeof(SDL_Rect)*12);
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
        //////////////////////define structers which is needed///////////////////////////////////// 
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
          int is_kond;
          int tedadeshun;
          int is_destroy;
        };

        void add_potion3(struct paigah* paigah1,int tedad_sarbazkhune,int x,int y,int xm,int ym)
        {
        
           (potions+*head_potion)->position.x=x+rand()%xm; (potions+*head_potion)->position.y=y+rand()%ym; (potions+*head_potion)->position.w=50; (potions+*head_potion)->position.h=50;
           (potions+*head_potion)->counter_time=0;  (potions+*head_potion)->arm=(potion_base+2)->arm; (potions+*head_potion)->user=0;  (potions+*head_potion)->kodum_potion=3;
           ++*head_potion;
        }
        void add_potion4(struct paigah* paigah1,int tedad_sarbazkhune,int x,int y,int xm,int ym)
        {
       
           (potions+*head_potion)->position.x=x+rand()%xm; (potions+*head_potion)->position.y=y+rand()%ym; (potions+*head_potion)->position.w=50; (potions+*head_potion)->position.h=50;
           (potions+*head_potion)->counter_time=0;  (potions+*head_potion)->arm=(potion_base+3)->arm; (potions+*head_potion)->user=0;  (potions+*head_potion)->kodum_potion=4;
           ++*head_potion;   
        }
        void add_potion2(struct paigah* paigah1,int tedad_sarbazkhune,int x,int y,int xm,int ym)
        {
         
           (potions+*head_potion)->position.x=x+(rand()%xm); (potions+*head_potion)->position.y=y+(rand()%ym); (potions+*head_potion)->position.w=50; (potions+*head_potion)->position.h=50;
           (potions+*head_potion)->counter_time=0;  (potions+*head_potion)->arm=(potion_base+1)->arm; (potions+*head_potion)->user=0;  (potions+*head_potion)->kodum_potion=2;
           ++*head_potion;
        }
        void add_potion1(struct paigah* paigah1,int tedad_sarbazkhune,int x,int y,int xm,int ym)
        {
         
           (potions+*head_potion)->position.x=x+rand()%xm; (potions+*head_potion)->position.y=y+rand()%ym;        (potions+*head_potion)->position.w=50; (potions+*head_potion)->position.h=50;
           (potions+*head_potion)->counter_time=0;  (potions+*head_potion)->arm=(potion_base+-0)->arm; (potions+*head_potion)->user=0;  (potions+*head_potion)->kodum_potion=1;
           ++*head_potion;
        }
        void render_potion()
        {
          for(int i=0;i<*head_potion;++i)
          {
            SDL_RenderCopy(renderer1,(potions+i)->arm,NULL,&(potions+i)->position);
          }
        }
        void checkarms(struct paigah* paigah,int tedad)
        {

          for(int i=0;i<tedad;++i)
          {

             if(users[(paigah+i)->user][0]== 1){
                 switch ((paigah+i)->user)
                 {
                 case 1:
                   (paigah+i)->arm->armt=*(usersT1+users[(paigah+i)->user][1]-1);
                   break;
                 case 2:
                    (paigah+i)->arm->armt=*(usersT2+users[(paigah+i)->user][1]-1);
                 break;
                 case 3:
                    (paigah+i)->arm->armt=*(usersT3+users[(paigah+i)->user][1]-1);
                 default:
                   break;
                 }

             }
             
          }
        }
       void fillTheBlankPotion(int i,int is_add_new,int user,int kodum_potion_ro_migi)
       {

         int j;
         if(is_add_new)
         {
            users[user][1]=kodum_potion_ro_migi;
            users[user][0]=1;

         }
        

         for( j=i;j<*head_potion;++j)
         {
           *(potions+j)=*(potions+j+1);
         }
         SDL_DestroyTexture((potions+j)->arm);
          --*head_potion;
       }
        void check_potion_time()
        {
          for(int i=0;i<*head_potion;++i)
          {
             
             if((potions+i)->counter_time>200){fillTheBlankPotion(i,0,0,0);}
             else {++(potions+i)->counter_time;}
             

          }
        }
        int sarbazH_size=400;
        struct sarbazRuHava** sarbazH = (struct sarbazRuHava**)malloc(sizeof(struct sarbazRuHava*)*sarbazH_size);
        struct sarbazRuHava** sarbazH_Harif = (struct sarbazRuHava**)malloc(sizeof(struct sarbazRuHava*)*sarbazH_size);
        int *attack_number=(int *)malloc(sizeof(int));
        *attack_number=0;
        int *attack_number_Harif=(int *)malloc(sizeof(int));
        *attack_number_Harif=0;
        int *tedad=(int *)malloc(sizeof(int)*100);
        
        int is_move=0;
       void  addSarbazRuHava(int tedad1,struct sarbazRuHava* sarbazH)
        {
          double deltay; 
          double deltax;
            for(int i= 0;i<tedad1;++i)
            {
              
               deltay=(sarbazH+i)->positionDy - (sarbazH+i)->positionLy;
               deltax=(sarbazH+i)->positionDx - (sarbazH+i)->positionLx;

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
                (sarbazH+i)->position=(SDL_Rect *)malloc(sizeof(SDL_Rect*)); (sarbazH+i)->position->x=((sarbazH+i)->positionLx); (sarbazH+i)->position->y= ((sarbazH+i)->positionLy);
                (sarbazH+i)->position->w=10; (sarbazH+i)->position->h=10;
                int p=5;
                if(i % 3 == 1){
                  switch ((sarbazH+i)->jahateharecat)
                 {
                 case 1:
                 (sarbazH+i)->position->x -=(p*sin( (sarbazH+i)->teta));
                 (sarbazH+i)->position->y +=(p*cos( (sarbazH+i)->teta));
                     break;
                 case 2 :
                 (sarbazH+i)->position->x +=p*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y +=p*cos( (sarbazH+i)->teta);
                 break;
                 case 3 : 
                 (sarbazH+i)->position->x +=p*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y -=p*cos( (sarbazH+i)->teta);
                 break;
                 case 4 :
                 (sarbazH+i)->position->x -=p*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y -=p*cos( (sarbazH+i)->teta);
                 default:
                     break;
                 }
                  }
                if(i % 3 == 2){
                  switch ((sarbazH+i)->jahateharecat)
                 {
                 case 1:
                 (sarbazH+i)->position->x +=(p*sin( (sarbazH+i)->teta));
                 (sarbazH+i)->position->y -=(p*cos( (sarbazH+i)->teta));
                     break;
                 case 2 :
                 (sarbazH+i)->position->x -=p*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y -=p*cos( (sarbazH+i)->teta);
                 break;
                 case 3 :
                 (sarbazH+i)->position->x -=p*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y +=p*cos( (sarbazH+i)->teta);
                 break;
                 case 4 :
                 (sarbazH+i)->position->x +=p*sin( (sarbazH+i)->teta);
                 (sarbazH+i)->position->y +=p*cos( (sarbazH+i)->teta);
                 default:
                     break;
                 }
                  }
                (sarbazH+i)->arm = (SDL_Texture *)malloc(sizeof(SDL_Texture*)*1);
               if((sarbazH+i)->user==1) (sarbazH+i)->arm = SDL_CreateTextureFromSurface(renderer1,S1);
               if((sarbazH+i)->user==2) (sarbazH+i)->arm = SDL_CreateTextureFromSurface(renderer1,S2);
               if((sarbazH+i)->user==3) (sarbazH+i)->arm = SDL_CreateTextureFromSurface(renderer1,S3);
                if((sarbazH+i)->arm == NULL){printf("%s",SDL_GetError());}
                (sarbazH+i)->ison= 2;
                
        }
        }

        int *head_sarbazRuHava=(int *)malloc(sizeof(int)*400);
        int *head_sarbazRuHava_Harif=(int *)malloc(sizeof(int)*400);
        
        for(int i=0;i<400;++i)
        {
        *(head_sarbazRuHava+i)=0;
        *(head_sarbazRuHava_Harif+i)=0;
        *(sarbazH+i)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava)*200);
        *(sarbazH_Harif+i)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava)*200);
        (*(sarbazH_Harif+i))->position=NULL;
        (*(sarbazH_Harif+i))->is_destroy= -1;
        (*(sarbazH+i))->is_destroy= -1;
        for(int j=0;j<200;++j)
        {
          (*(sarbazH+i)+j)->kamkardan_az_maghsad= -2;
          (*(sarbazH_Harif+i)+j)->kamkardan_az_maghsad= -2;
        }
        (*(sarbazH+i))->tedadeshun=0;
        (*(sarbazH_Harif+i))->tedadeshun=0;
        (*(sarbazH+i))->is_kond=0;
        (*(sarbazH_Harif+i))->is_kond=0;
        }
        void rendersoldiers(int *head,struct sarbazRuHava *sarbazH1)
        {
            int i=0;
             static  int counter=1;
            while(1)
            { 
             if(1){
  
       
              SDL_RenderCopy(renderer1,(sarbazH1+i)->arm,NULL,(sarbazH1+i)->position);
             ++i;
             if((sarbazH1+i)->ison != 2){break;}
             if(i >= *head){
                 ++ *head;
                 if(*head % 3 == 0){break;}
                 else {}
                 }   
             }
              else{break;}
        }
       
        ++counter;
        }
        void rendersoldiers_sabet(int *head,struct sarbazRuHava *sarbazH1)
        {
            int i=0;
             static  int counter=1;
            while(1)
            { 
             if(1){
  
              SDL_RenderCopy(renderer1,(sarbazH1+i)->arm,NULL,(sarbazH1+i)->position);
             ++i;
             if((sarbazH1+i)->ison != 2){break;}
             if(i >= *head){
                 break;
                 }   
             }
              else{break;}
        }
       
        ++counter;
        }
      void kamkardaneSarbazH(int i,int *attack_number1,struct sarbazRuHava **sarbazH,int *head_sarbazRuHava1)
      {
        int j;
           for(j=i;j<*attack_number1;++j)
           {
             
           memcpy((sarbazH+j),(sarbazH+j+1),sizeof(struct sarbazRuHava*)*200);
             *(head_sarbazRuHava1+j)=*(head_sarbazRuHava1+j+1);
            
           }
       
         --*attack_number1;
        
      }
      void addsoldier(struct paigah* paigah1,int add,SDL_Renderer *renderer)
        {
        TTF_Font *font1 = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        (paigah1)->sarbaz->tedadeshun+=add;
        (paigah1)->sarbaz->tedad_credit+=add;
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah1)->sarbaz->tedadeshun);
        SDL_Color color = {0,0,0,255};
        SDL_Color color1={255,255,255,255};
        SDL_Surface *text = TTF_RenderText_Solid(font1,c,color);
        SDL_Surface *text1 = TTF_RenderText_Solid(font1,c,color1);
         SDL_DestroyTexture((paigah1)->sarbaz->tedad);
        if(text == NULL){printf("%s\n",TTF_GetError());}
       if(paigah1->user != 1){ (paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text);}
       else {(paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text1);}
        free(text1);   free(text); free(c); TTF_CloseFont(font1);
        } 
      void mordane_sarbaz_rahi_be_sooie_maghsad(struct sarbazRuHava *sarbazH_mabda)
      {
         for(int i=(sarbazH_mabda)->tedadeshun;i>(sarbazH_mabda)->tedadeshun-1;--i)
        {
          if((sarbazH_mabda+i)->kamkardan_az_maghsad == -1){(sarbazH_mabda+i)->ison = 0;}
          else {break;}
        }

      }
     
        void minussoldier(struct paigah* paigah1,int add,SDL_Renderer *renderer,int i,struct sarbazRuHava *sarbazH)
        {
        static int counter=1;
        if((paigah1)->sarbaz->tedadeshun>0)
        {
        TTF_Font *font1 = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        (paigah1)->sarbaz->tedadeshun-=add;     
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah1)->sarbaz->tedadeshun);
        SDL_Color color = {0,0,0,255};
        SDL_Color color1={255,255,255,255};
        SDL_Surface *text = TTF_RenderText_Solid(font1,c,color);
        SDL_Surface *text1 = TTF_RenderText_Solid(font1,c,color1);
         SDL_DestroyTexture((paigah1)->sarbaz->tedad);
        if(text == NULL){printf("%s\n",TTF_GetError());}
       if(paigah1->user != 1){ (paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text);}
       else {(paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text1);}
        free(text1);   free(text); free(c); TTF_CloseFont(font1);
        }
        else{
        TTF_Font *font1 = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        (paigah1)->user=(sarbazH+i)->user;
        (paigah1)->arm->armt= *(armsT+(sarbazH+i)->user);
        (paigah1)->sarbaz->tedadeshun=1;
        (paigah1)->sarbaz->tedad_credit=1;
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigah1)->sarbaz->tedadeshun);
        SDL_Color color = {0,0,0,255};
        SDL_Color color1={255,255,255,255};
        SDL_Surface *text = TTF_RenderText_Solid(font1,c,color);
        SDL_Surface *text1 = TTF_RenderText_Solid(font1,c,color1);
         SDL_DestroyTexture((paigah1)->sarbaz->tedad);
        if(text == NULL){printf("%s\n",TTF_GetError());}
       if(paigah1->user != 1){ (paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text);}
       else {(paigah1)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer,text1);}
        free(text1);   free(text); free(c); TTF_CloseFont(font1);
        }
       
        ++counter;
        }    
      
      void filltheblanksarbaz(int i, int *head,struct sarbazRuHava *sarbazH1,int index,struct sarbazRuHava **a,int *attack_number,int *head_sarbazRuHava,struct paigah* paigah1,int is_minus)
      {
    
        int flag=0;
        if(is_minus)
        {
          if((sarbazH1+i)->user == (paigah1+ (sarbazH1+i)->dest)->user || users[(paigah1+ (sarbazH1+i)->dest)->user][1] == 2)
          {
            addsoldier(((paigah1+ (sarbazH1+i)->dest)),1,renderer1);
          }
          else
          {
            int *temp=(int *)malloc(sizeof(int));
            *temp=(paigah1+ (sarbazH1+i)->dest)->shomare_dastoor[0];
            
           
           minussoldier(((paigah1+ (sarbazH1+i)->dest)),1,renderer1,i,sarbazH1);
        if((paigah1+ (sarbazH1+i)->dest)->shomare_dastoor[0] != -1)   mordane_sarbaz_rahi_be_sooie_maghsad(*(a+*temp));
           (paigah1+ (sarbazH1+i)->dest)->shomare_dastoor[0]=-1;
           free(temp);
          }
        }
         int j;
        int tedad1=(sarbazH1)->tedadeshun;
        
        for( j=i;j<tedad1;++j)
        {
        if(j == (sarbazH1)->tedadeshun-1){SDL_DestroyTexture((sarbazH1+j)->arm); (sarbazH1+j)->position ==NULL; /*(sarbazH+j)->loc= -1;*/  (sarbazH1+j)->ison=0; break;}
        *(sarbazH1+j) = *(sarbazH1+j+1);   
        }
       if(*head>0){--*head; flag=1;}
               if((sarbazH1)->tedadeshun <= 0 && *head==0 && flag){
               

        for(int i=0;i<(sarbazH1)->tedadeshun+1;++i)
        {
          --(sarbazH1+i)->tedadeshun;
          (sarbazH1+i)->is_destroy=1;
        }
               }
               else 
               {
        for(int i=0;i<(sarbazH1)->tedadeshun+1;++i)
        {
          if(is_minus == 0){}
          --(sarbazH1+i)->tedadeshun; if((sarbazH1+i)->tedadeshun == 0 && is_minus==0){printf("hhhhhhhhhhhhhhhhhhhhh");kamkardaneSarbazH(index,attack_number,a, head_sarbazRuHava);    }
        }
               }
        
      }
       void destroy_sarbaz_beine_rah(struct sarbazRuHava **sarbazH,int *attack_number,int *head_sarbaz_ru_hava,struct sarbazRuHava **sarbazH_Harif,int *attack_number_Harif,int *head_sarbaz_ru_hava_Harif,struct paigah* paigah1)
      {
      int indexofFrees[200][2];
      int head_index=0;
      indexofFrees[0][0]=-1;  indexofFrees[0][1]=-1;
      ++head_index;
      int indexofFrees1[200][2];
      int head_index1=0;
      indexofFrees1[0][0]=-1;  indexofFrees1[0][1]=-1;
      ++head_index1;
        for(int k=0;k<*attack_number;++k)
        {
        if((*(sarbazH+k)+0)->position != NULL){
         for(int z=0;z<*(head_sarbaz_ru_hava+k);++z)
         {
          
        for(int i=0;i<*attack_number_Harif;++i)
        {
           if((*(sarbazH_Harif+i)+0)->position != NULL){
         int p=12;
         
             for(int j=0;j<*(head_sarbaz_ru_hava_Harif+i);++j)
             {
                if(abs((*(sarbazH_Harif+i)+j)->position->x-(*(sarbazH+k)+z)->position->x) <= p && abs((*(sarbazH_Harif+i)+j)->position->y-(*(sarbazH+k)+z)->position->y) <= p)
                {
                   indexofFrees[head_index][0]=j; indexofFrees[head_index][1]=i; ++head_index;
                   indexofFrees1[head_index1][0]=z; indexofFrees1[head_index1][1]=k; ++head_index1;
                

                }
                 else{}
             }
        }
           }
         }
        }

         for(int i=1;i<head_index;++i)
        {
          filltheblanksarbaz(indexofFrees[i][0],head_sarbaz_ru_hava_Harif+indexofFrees[i][1],(*(sarbazH_Harif+indexofFrees[i][1])),indexofFrees[i][1],sarbazH_Harif,attack_number_Harif,head_sarbaz_ru_hava_Harif,paigah1,0);
        }
        for(int i=1;i<head_index1;++i)
        {
          filltheblanksarbaz(indexofFrees1[i][0],head_sarbaz_ru_hava+indexofFrees1[i][1],(*(sarbazH+indexofFrees1[i][1])),indexofFrees1[i][1],sarbazH,attack_number,head_sarbaz_ru_hava,paigah1,0);
        }
        head_index=1;
        }
         for(int k=0;k<*attack_number_Harif;++k)
        {
         if((*(sarbazH_Harif+k)+0)->position != NULL){
         for(int z=0;z<*(head_sarbaz_ru_hava_Harif+k);++z)
         {
        for(int i=0;i<*attack_number_Harif;++i)
        {
             if(k == i){continue;}
             if((*(sarbazH_Harif+i)+0)->position != NULL)
             {
             if(*(head_sarbaz_ru_hava_Harif+i) == 0){continue;}
           
         int p=5;
         
             for(int j=0;j<*(head_sarbaz_ru_hava_Harif+i);++j)
             {
                if(abs((*(sarbazH_Harif+i)+j)->position->x-(*(sarbazH_Harif+k)+z)->position->x) <= p && abs((*(sarbazH_Harif+i)+j)->position->y-(*(sarbazH_Harif+k)+z)->position->y) <= p && (*(sarbazH_Harif+i)+j)->user != (*(sarbazH_Harif+k)+z)->user )
                {
                   indexofFrees[head_index][0]=j; indexofFrees[head_index][1]=i; ++head_index;
                }
                 else{}
             }
             }
             else{ break;}
        }
         }
         }
         else {break;}
         for(int i=1;i<head_index;++i)
        {
         (potions+i)->counter_time=0;
          filltheblanksarbaz(indexofFrees[i][0],head_sarbaz_ru_hava_Harif+indexofFrees[i][1],(*(sarbazH_Harif+indexofFrees[i][1])),indexofFrees[i][1],sarbazH_Harif,attack_number_Harif,head_sarbaz_ru_hava_Harif,paigah1,0);
        }
        }
        
      
         
      }            
     void check_sarbaz_potion(struct sarbazRuHava **sarbazH,int *attack_number,int *head_sarbaz_ru_hava,struct sarbazRuHava **sarbazH_Harif,int *attack_number_Harif,int *head_sarbaz_ru_hava_Harif,struct paigah* paigah1,int *head_potion,struct potion* potions)
     {

       for(int i=0;i<*head_potion;++i)
       {
           for(int k=0;k<*attack_number_Harif;++k)
        {
         if((*(sarbazH_Harif+k)+0)->position != NULL){
            int p=30;
         for(int z=0;z<*(head_sarbaz_ru_hava_Harif+k);++z)
         {
            
            if(abs((potions+i)->position.x-(*(sarbazH_Harif+k)+z)->position->x) <= p && abs((potions+i)->position.y-(*(sarbazH_Harif+k)+z)->position->y) <= p && users[(*(sarbazH_Harif+k)+z)->user][0] == 0)
                {
                  
                   (potions+i)->counter_time=0; 
                   (potions+i)->user=(*(sarbazH_Harif+k)+z)->user;
                   fillTheBlankPotion(i,1,(*(sarbazH_Harif+k)+z)->user,(potions+i)->kodum_potion);
                   return;
                   
                
                }
                
         }
        }
        }
        for(int k=0;k<*attack_number;++k)
        {
           int p=30;
        if((*(sarbazH+k)+0)->position != NULL){
         for(int z=0;z<*(head_sarbaz_ru_hava+k);++z)
         {
           if(abs((potions+i)->position.x-(*(sarbazH+k)+z)->position->x) <= p && abs((potions+i)->position.y-(*(sarbazH+k)+z)->position->y) <= p && users[(*(sarbazH+k)+z)->user][0] == 0 )
                {
                  
                   (potions+i)->user=(*(sarbazH_Harif+k)+z)->user;
                   fillTheBlankPotion(i,1,(*(sarbazH+k)+z)->user,(potions+i)->kodum_potion);
                   return;
                  
                 
                }
                
       }
         }
        }


       }





     }
        void continuetomove(int *head,struct sarbazRuHava *sarbazH,int index,struct sarbazRuHava **a,int *attack_number,int *head_sarbazRuHava,struct paigah* paigah1)
        {
           int i=0;
           int *indexofFrees=(int *)malloc(sizeof(int)*200);
           *(indexofFrees)=-1;
           ++indexofFrees;
            while(1)
            {  
              static int counter=0;
              if( (sarbazH+i)->kamkardan_az_maghsad==1){minussoldier((paigah1+ (sarbazH+i)->loc),1,renderer1,i,sarbazH);  ++counter; (sarbazH+i)->kamkardan_az_maghsad=0;}
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
             --indexofFrees;
           while (*(indexofFrees) != -1)
           {
             filltheblanksarbaz(*indexofFrees,head,sarbazH,index,a,attack_number,head_sarbazRuHava,paigah1,1);
             --indexofFrees;
           }
           free(indexofFrees);
        }
         void continuetomove2(int *head,struct sarbazRuHava *sarbazH,int index,struct sarbazRuHava **a,int *attack_number,int *head_sarbazRuHava,struct paigah* paigah1)
        {
           int i=0;
           int *indexofFrees=(int *)malloc(sizeof(int)*200);
           *(indexofFrees)=-1;
           ++indexofFrees;
            while(1)
            {  
              static int counter=0;
              if( (sarbazH+i)->kamkardan_az_maghsad==1){minussoldier((paigah1+ (sarbazH+i)->loc),1,renderer1,i,sarbazH);  ++counter; (sarbazH+i)->kamkardan_az_maghsad=0;}
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
                 if(((sarbazH+i)->ison == 2) &&  (sarbazH+i)->position->y > (sarbazH+i)->positionArmDy-20 &&   (sarbazH+i)->position->y < (sarbazH+i)->positionArmDy+41+20 &&  (sarbazH+i)->position->x > (sarbazH+i)->positionArmDx-20 && (sarbazH+i)->position->x < (sarbazH+i)->positionArmDx+34+20)
                  {*indexofFrees=i; ++indexofFrees;}
                  ++i;
                
                  if(i  >= *head){break;}
                   
             }
             --indexofFrees;
           while (*(indexofFrees) != -1)
           {
             filltheblanksarbaz(*indexofFrees,head,sarbazH,index,a,attack_number,head_sarbazRuHava,paigah1,1);
             --indexofFrees;
           }
           free(indexofFrees);
        }
        
 void continuetomove1(int *head,struct sarbazRuHava *sarbazH,int index,struct sarbazRuHava **a,int *attack_number,int *head_sarbazRuHava,struct paigah* paigah1)
        {
           int i=0;
           double deltay; 
           double deltax;
           deltay=(sarbazH+i)->positionDy - (sarbazH+i)->positionLy;
           deltax=(sarbazH+i)->positionDx - (sarbazH+i)->positionLx;
           double distance=sqrt(deltax*deltax+ deltay* deltay);
           int *indexofFrees=(int *)malloc(sizeof(int)*200);
           *(indexofFrees)=-1;
           ++indexofFrees;
        
            while(1)
            {  
              static int counter=0;
              if( (sarbazH+i)->kamkardan_az_maghsad==1){minussoldier((paigah1+ (sarbazH+i)->loc),1,renderer1,i,sarbazH);  ++counter; (sarbazH+i)->kamkardan_az_maghsad=0;}
            int speed=25;
               if(((sarbazH+i)->ison == 2))
               {
                 switch ((sarbazH+i)->jahateharecat)
                 {
                 case 1:
                 (sarbazH+i)->position->x +=((double)((speed*cos( (sarbazH+i)->teta))));
                 (sarbazH+i)->position->y +=((double)((speed*sin( (sarbazH+i)->teta))));
                  break;
                 case 2 :
                 (sarbazH+i)->position->x -=((double)((speed*cos( (sarbazH+i)->teta))));
                 (sarbazH+i)->position->y +=((double)((speed*sin( (sarbazH+i)->teta))));
                 break;
                 case 3 :
                 (sarbazH+i)->position->x -=((double)((speed*cos( (sarbazH+i)->teta))));
                 (sarbazH+i)->position->y -=((double)((speed*sin( (sarbazH+i)->teta))));
                 break;
                 case 4 :
                 (sarbazH+i)->position->x +=((double)((speed*cos( (sarbazH+i)->teta))));
                 (sarbazH+i)->position->y -=((double)((speed*sin( (sarbazH+i)->teta))));
                 default:
                     break;
               }
               }
                 if(((sarbazH+i)->ison == 2) &&  (sarbazH+i)->position->y > (sarbazH+i)->positionArmDy-20 &&   (sarbazH+i)->position->y < (sarbazH+i)->positionArmDy+51 &&  (sarbazH+i)->position->x > (sarbazH+i)->positionArmDx-20 && (sarbazH+i)->position->x < (sarbazH+i)->positionArmDx+44)
                  {*indexofFrees=i; ++indexofFrees;}
                  ++i;
                
                  if(i  >= *head){break;}
                   
             }
             --indexofFrees;
           while (*(indexofFrees) != -1)
           {
             filltheblanksarbaz(*indexofFrees,head,sarbazH,index,a,attack_number,head_sarbazRuHava,paigah1,1);
             --indexofFrees;
           }
           free(indexofFrees);
        }
       


      ///submit arm and sarbaz positions of paigah///////////////////////////////////
    
      ///////////////////////////////////////////////////////////////////////////////  
        
      ////////////////////add location or destination fo soldiers /////////////////////////////////////////
        void addlocation(int location,struct paigah* paigah,struct sarbazRuHava *sarbazH)
       {

          
          if((paigah+location)->sarbaz->tedad_credit != 0){
           for(int i=0;i<(paigah+location)->sarbaz->tedad_credit;++i)
           {
                       (sarbazH+i)->positionLx=(double)((double)((paigah+location)->arm->position.x)+(double)(((paigah+location)->arm->position.w)/2));
                       (sarbazH+i)->positionLy=(double)((double)((paigah+location)->arm->position.y)+(double)(((paigah+location)->arm->position.h)/2));
                       (sarbazH+i)->kamkardan_az_maghsad= -1;
                       (sarbazH+i)->user=(paigah+location)->user;
                       (sarbazH+i)->loc=location;
                       (sarbazH+i)->tedadeshun=(paigah+location)->sarbaz->tedad_credit;
                       (sarbazH+i)->is_destroy= -1;
           }
         (paigah+location)->sarbaz->tedadeshunCopy=(paigah+location)->sarbaz->tedad_credit;
         (paigah+location)->sarbaz->tedad_credit=0;
           }
           else {(sarbazH)->loc=-1;}
       
       }
        void add_destination(int destination,struct paigah* paigah,struct sarbazRuHava *sarbazH)
       {
       

       
        (paigah+destination)->shomare_dastoor[0]=destination;
           for(int i=0;i<(paigah+(sarbazH)->loc)->sarbaz->tedadeshunCopy;++i)
           {
               if(destination == 5 && (sarbazH+i)->positionLx==(double)((double)((paigah)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                
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
                        (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+12);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
              else if(destination == 7 && (sarbazH+i)->positionLx==(double)((double)((paigah)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+8);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
             else if(destination == 6 && (sarbazH+i)->positionLx==(double)((double)((paigah+2)->arm->position.x)+(double)(((paigah+2)->arm->position.w)/2)))
             {
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x)+80);
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
             }
             else if(destination == 3 && (sarbazH+i)->positionLx==(double)((double)((paigah+2)->arm->position.x)+(double)(((paigah+2)->arm->position.w)/2)))
             { 
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x)+40);
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
             }
             else if(destination == 5 && (sarbazH+i)->positionLx==(double)((double)((paigah+6)->arm->position.x)+(double)(((paigah+2)->arm->position.w)/2)))
             { 
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x)+40);
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
             }
             else {
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(((double)((paigah+destination)->arm->position.x))+(double)(((paigah+destination)->arm->position.w)/2));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y))+(double)(((paigah+destination)->arm->position.h)/2);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
             }
             
           } 
        
       }
        void add_destination1(int destination,struct paigah* paigah,struct sarbazRuHava *sarbazH)
       {
       

        (paigah+destination)->shomare_dastoor[0]=destination;
     for(int i=0;i<(paigah+(sarbazH)->loc)->sarbaz->tedadeshunCopy;++i)
             {
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(((double)((paigah+destination)->arm->position.x))+(double)(((paigah+destination)->arm->position.w)/2));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y))+(double)(((paigah+destination)->arm->position.h)/2);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
             }
           
        
       }
      void add_destintion2(int destination,struct paigah* paigah,struct sarbazRuHava *sarbazH)
       {
              

        (paigah+destination)->shomare_dastoor[0]=destination;
     for(int i=0;i<(paigah+(sarbazH)->loc)->sarbaz->tedadeshunCopy;++i)
             {
                if(destination == 6 && (sarbazH+i)->positionLx==(double)((double)((paigah)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+80);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
       
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(((double)((paigah+destination)->arm->position.x))+(double)(((paigah+destination)->arm->position.w)/2));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y))+(double)(((paigah+destination)->arm->position.h)/2);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
             }
           
        
       }
       void add_destination3(int destination,struct paigah* paigah,struct sarbazRuHava *sarbazH)
       {
        //printf("sarbazH->loc=%d\n",(sarbazH)->loc);
              

        (paigah+destination)->shomare_dastoor[0]=destination;
     for(int i=0;i<(paigah+(sarbazH)->loc)->sarbaz->tedadeshunCopy;++i)
             {
                if(destination == 0 && (sarbazH+i)->positionLx==(double)((double)((paigah+4)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+80);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
              if(destination == 0 && (sarbazH+i)->positionLx==(double)((double)((paigah+6)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+80);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
               if(destination == 5 && (sarbazH+i)->positionLx==(double)((double)((paigah+1)->arm->position.x)+(double)(((paigah)->arm->position.w)/2)))
               {
                
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(double)(((paigah+destination)->arm->position.x));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y)+30);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
                       continue;
               }
               
       
                       (sarbazH+i)->positionArmDx=(double)((paigah+destination)->arm->position.x);
                       (sarbazH+i)->positionArmDy=(double)(((paigah+destination)->arm->position.y));
                       (sarbazH+i)->positionDx=(((double)((paigah+destination)->arm->position.x))+(double)(((paigah+destination)->arm->position.w)/2));
                       (sarbazH+i)->positionDy=(double)(((paigah+destination)->arm->position.y))+(double)(((paigah+destination)->arm->position.h)/2);
                       (sarbazH+i)->dest=destination;
                       (sarbazH+i)->kamkardan_az_maghsad=1;
             }
           
        
       }
       
        //////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////submit positions for paigah////////////////////////////////////////////////////

        for(int i=0;i<8;++i)
        {
            (paigah+i)->position.x=(position_paigah+i)->x;
            (paigah+i)->position.y=(position_paigah+i)->y;
            
        }
      int arr[1080][554]={0};
      int arr1[1080][554]={0};
      int arr_marz[40000][2]={0};
      int head_marz=0;
      int paigahs[tedad1];
      int edgesX[4][5]={0};
      int  edgesY[4][5]={0};
      int yaly[3][5]={0}; 
      int yalx[4][4]={0};
      int is_dfs[4][5]={0};
      int rand_for_potion=554;
      int rand_for_potion_max=557;
      void checkforwin(int tedad,struct paigah* paigah1)
      {
          int counter=0;
          /////////////win/////////////////
          for(int i=0;i<tedad;++i)
          {
          if((paigah1+i)->user>1){counter=1;break;}
          }
          if(counter == 0 && *attack_number_Harif==0){
            (player+kodum_player)->id+=5;
             FILE * fp;
   fp = fopen ("/home/alireza/state.io/src/player.txt","w+");
   if(fp==NULL){printf("maww\n");}
   char *temp_string=(char *)malloc(sizeof(char)*100);
   int *temp_int=(int *)malloc(sizeof(int));
   char *ch=(char *)malloc(sizeof(char));
        fprintf(fp,"%d\n",*head_player);
  
        //*head_player= *temp_int;
        int n=0;
         while(1) {
         fprintf(fp,"%s\n",(player+n)->name);
          fprintf(fp,"%d\n", (player+n)->id);
         //printf("%d %s %d\n",(player+n)->id,(player+n)->name,n);
         ++n;
         if(n==*head_player) { 
          break ;
         }
         }
         fclose(fp);
            
            
            
            printf("you have won and your score increased by 5\n");  iswindow = menu_main; isset=1;}
         ///////////////lost////////////////
         counter=0;
          for(int i=0;i<tedad;++i)
          {
          if((paigah1+i)->user == 1){counter=1;break;}
          }
          if(counter == 0 && *attack_number==0){
            printf("you have lost and your score decreased by 5\n"); (player+kodum_player)->id-=5; iswindow = menu_main; isset=1;
             FILE * fp;
   fp = fopen ("/home/alireza/state.io/src/player.txt","w+");
   if(fp==NULL){printf("maww\n");}
   char *temp_string=(char *)malloc(sizeof(char)*100);
   int *temp_int=(int *)malloc(sizeof(int));
   char *ch=(char *)malloc(sizeof(char));
    fprintf(fp,"%d\n",*head_player);
  // *head_player= *temp_int;
   int n=0;
   while(1) {
     fprintf(fp,"%s\n",(player+n)->name);
     fprintf(fp,"%d\n", (player+n)->id);
     //fprintf(fp,"\n",ch);
     ++n;
      if(n==*head_player) { 
         break ;
      }
   }
   fclose(fp);
            
            
            
            
            
            
            }
        
      }
       ratio=11;
       biajolo=68;
       biabala=40;
     
        SDL_Rect *counter1=(SDL_Rect *)malloc(sizeof(SDL_Rect)*12);
        SDL_Rect *arms1=(SDL_Rect *)malloc(sizeof(SDL_Rect)*12);      
        
        SDL_Rect r161;
        r161.x = 176*ratio/10+biajolo+41+10; r161.y=262*ratio/10-biabala+60+10; r161.w=34; r161.h=41;
        *(arms1)=r161;
        SDL_Rect c161;
        c161.x = 176*ratio/10+biajolo+41+10; c161.y=262*ratio/10-biabala+80+35; c161.w=32; c161.h=29;
        *(counter1)=c161;
        
        
        SDL_Rect r181;
        r181.x = 246*ratio/10+biajolo+41+15; r181.y=142*ratio/10-biabala+4+18+5; r181.w=34; r181.h=41;
        *(arms1+1)=r181;
        SDL_Rect c181;
        c181.x = 246*ratio/10+biajolo+41+15; c181.y=142*ratio/10-biabala+4+55+18; c181.w=32; c181.h=29;
        *(counter1+1)=c181;
        
        SDL_Rect t19;
        t19.x = 295*ratio/10+biajolo; t19.y=187*ratio/10-biabala; t19.w=166*ratio/10; t19.h=183*ratio/10;
        (paigah2+2)->position=t19;
        SDL_Rect r191;
        r191.x = 295*ratio/10+biajolo+41+25; r191.y=187*ratio/10-biabala+60+20; r191.w=34; r191.h=41;
        *(arms1+2)=r191;
        SDL_Rect c191;
        c191.x = 295*ratio/10+biajolo+41+25; c191.y=187*ratio/10-biabala+60+45+20; c191.w=32; c191.h=29;
        *(counter1+2)=c191;
        
        SDL_Rect t110;
        t110.x = 240*ratio/10+biajolo; t110.y=354*ratio/10-biabala; t110.w=190*ratio/10; t110.h=170*ratio/10;
        (paigah2+3)->position=t110;
         SDL_Rect r110;
        r110.x =  240*ratio/10+biajolo+41+35; r110.y=354*ratio/10-biabala+4+25; r110.w=34; r110.h=41;
        *(arms1+3)=r110;
        SDL_Rect c110;
        c110.x = 240*ratio/10+biajolo+41+35; c110.y=354*ratio/10-biabala+4+45+25; c110.w=32; c110.h=29;
        *(counter1+3)=c110;
        
        
        
        
        
        
        SDL_Rect t111;
        t111.x = 354*ratio/10+biajolo; t111.y=275.5*ratio/10-biabala; t111.w=133*ratio/10; t111.h=246*ratio/10;
        (paigah2+4)->position=t111;
         SDL_Rect r111;
        r111.x =  354*ratio/10+biajolo+41+9; r111.y=275.5*ratio/10-biabala+4+90; r111.w=34; r111.h=41;
        *(arms1+4)=r111;
        SDL_Rect c111;
        c111.x = 354*ratio/10+biajolo+41+9; c111.y=275.5*ratio/10-biabala+4+45+90; c111.w=32; c111.h=29;
        *(counter1+4)=c111;

        SDL_Rect t112;
        t112.x = 329*ratio/10+biajolo; t112.y=70*ratio/10-biabala; t112.w=151*ratio/10; t112.h=131*ratio/10;
        (paigah2+5)->position=t112;
        SDL_Rect r112;
        r112.x =  329*ratio/10+biajolo+41+35+10; r112.y=70*ratio/10-biabala+4+35; r112.w=34; r112.h=41;
        *(arms1+5)=r112;
        SDL_Rect c112;
        c112.x = 329*ratio/10+biajolo+41+35+10; c112.y=70*ratio/10-biabala+4+45+35; c112.w=32; c112.h=29;
        *(counter1+5)=c112;

        SDL_Rect t113;
        t113.x = 444*ratio/10+biajolo; t113.y=54*ratio/10-biabala; t113.w=136*ratio/10; t113.h=180*ratio/10;
        (paigah2+6)->position=t113;
        SDL_Rect r113;
        r113.x =  444*ratio/10+biajolo+41+30; r113.y=54*ratio/10-biabala+4+50; r113.w=34; r113.h=41;
        *(arms1+6)=r113;
        SDL_Rect c113;
        c113.x = 444*ratio/10+biajolo+41+30; c113.y=54*ratio/10-biabala+4+45+50; c113.w=32; c113.h=29;
        *(counter1+6)=c113;
        
        
        SDL_Rect t114;
        t114.x = 440*ratio/10+biajolo; t114.y=175*ratio/10-biabala; t114.w=177*ratio/10; t114.h=179*ratio/10;
        (paigah2+7)->position=t114;
        SDL_Rect r114;
        r114.x =  440*ratio/10+biajolo+41+45; r114.y=175*ratio/10-biabala+4+60; r114.w=34; r114.h=41;
        *(arms1+7)=r114;
        SDL_Rect c114;
        c114.x = 440*ratio/10+biajolo+41+45; c114.y=175*ratio/10-biabala+4+45+60; c114.w=32; c114.h=29;
        *(counter1+7)=c114;
        
        SDL_Rect t115;
        t115.x = 461*ratio/10+biajolo; t115.y=329*ratio/10-biabala; t115.w=183*ratio/10; t115.h=163*ratio/10;
        (paigah2+8)->position=t115;
        SDL_Rect r115;
        r115.x = 461*ratio/10+biajolo+41+35; r115.y=329*ratio/10-biabala+4+40; r115.w=34; r115.h=41;
        *(arms1+8)=r115;
        SDL_Rect c115;
        c115.x = 461*ratio/10+biajolo+41+35; c115.y=329*ratio/10-biabala+4+45+40; c115.w=32; c115.h=29;
        *(counter1+8)=c115;
        int count4=1;
        





        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
         ratio=14;
         biajolo=-585;
         biabala=5;
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






























/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
int distance(int x,int x1)
{
  int distance= (x-x1);
  distance= distance>0 ? distance : -distance;
  return distance;
}
 void dfs4(int x,int y,int ym,int lenx)
{
  static int counter=0;
 
 arr1[x][y]=1; arr[x][y]=1;
   if((x)<lenx)
   {
     int is_x=1;
     int is_y=1;
     if(y>ym)
    {
      while(is_y || is_x)
      {
        if(y>ym){--y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else {arr[x][y]=1;is_y=0;}
        if(x<lenx){++x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1; SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1; arr[x][y]=1;is_x=0;}
      }
    }
    else if(ym == y)
    {
       while(is_x)
      {
        if(x<lenx){++x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1; arr[x][y]=1;is_x=0;}
      }
    }
    else
    {
       while(is_y || is_x)
      {
        if(y<ym){++y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else { arr1[x][y]=1;arr[x][y]=1;is_y=0;}
        if(x<lenx){++x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1; SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1;arr[x][y]=1;is_x=0;}
      }
    }
 arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1;  arr[x][y]=1;
     count4=0;
     return;
   }
   else{
      arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;
 SDL_RenderDrawPoint(renderer1,x,y);    
int rand1=rand()%3+1;
int flag=1;
int temp=0;
while (count4)
{
  if(temp == 3){
    if((x-1)>= 0 ) {arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; dfs4(x-1,y,ym,lenx);}
  else if((y +1)<=554) {arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; dfs4(x,y+1,ym,lenx);}
  else {arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; dfs4(x,y-1,ym,lenx);}
  
  }
 
switch (rand1)
{
case 1:
if(  (distance(y+1,ym))>=0  && (distance(y+1,ym))<20  && arr[x][y+1]==0){++counter; dfs4(x,y+1,ym,lenx);}
else {rand1=2;}
  break;
case 2:
if((y-1)>=0 &&(distance(y-1,ym))>=0 && (distance(y-1,ym))<20 && arr[x][y-1]==0){ ++counter; dfs4(x,y-1,ym,lenx);}
else {rand1=3;}
break;
case 3: 
if((x-1)>=0 && (distance(y,ym))>=0 && (distance(y,ym))<20 && arr[x-1][y]==0){ ++counter; dfs4(x-1,y,ym,lenx);}
else {rand1=1;}
break;
default:
flag=0;
  break;
}
++temp;
   }
}
arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;  arr1[x][y]=1; arr[x][y]=1;
return;
}


SDL_Rect t216;
SDL_Rect t2110;
SDL_Rect t2111;
SDL_Rect t2115;
SDL_Rect t2119;
SDL_Rect t2120;
SDL_Rect t2121;   
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
     int fpm= 24;

 
 int tedadeharif= rand()%2+1;

  int *counter_temp=(int *)malloc(sizeof(int));
  *counter_temp=0;
  
int xm, ym;
Uint32 buttons;

SDL_Rect button;
button.x=0; button.y=0; button.w=50; button.h=50;


   SDL_Event e;