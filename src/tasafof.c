
void range_pixel(int x,int y)
{
  SDL_RenderDrawPoint(renderer1,x,y);
}
void print_edge(int edge[][554])
{
  for(int i=0;i<350;++i)
  {
    for(int j=0;j<554;++j)
    {
      printf("%d ",edge[i][j]);
    }
    printf("\n");
  }
}
int is_visited[1080][540]={0};
void draw_paigah1(int user,int x,int y,int xlow,int xhigh,int ylow,int yhigh,int i)
{
   static int counter=0;
    ++counter;
   if(arr[x][y] == 1 ){return ;}
   arr[x][y]=1;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][0]=x;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][1]=y;
   ++(paigahss+i)->head_pixel;
   
   SDL_RenderDrawPoint(renderer1,x,y);  
  
   draw_paigah1(user,x,y+1,xlow,xhigh,ylow,yhigh,i);
   draw_paigah1(user,x+1,y,xlow,xhigh,ylow,yhigh,i);
   
}
void draw_paigah2(int user,int x,int y,int xlow,int xhigh,int ylow,int yhigh,int i)
{
   static int counter=0;
    ++counter;
   if(arr[x][y] == 1  ){return ;}
   arr[x][y]=1;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][0]=x;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][1]=y;
   ++(paigahss+i)->head_pixel;
   SDL_RenderDrawPoint(renderer1,x,y);  
  
   draw_paigah2(user,x,y+1,xlow,xhigh,ylow,yhigh,i);
   draw_paigah2(user,x-1,y,xlow,xhigh,ylow,yhigh,i);
   
}
void draw_paigah3(int user,int x,int y,int xlow,int xhigh,int ylow,int yhigh,int i)
{
   static int counter=0;
    ++counter;
   if(arr[x][y] == 1  ){return ;}
   arr[x][y]=1;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][0]=x;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][1]=y;
   ++(paigahss+i)->head_pixel;
   SDL_RenderDrawPoint(renderer1,x,y);  
  
   draw_paigah3(user,x,y-1,xlow,xhigh,ylow,yhigh,i);
   draw_paigah3(user,x-1,y,xlow,xhigh,ylow,yhigh,i);
   
}
void draw_paigah4(int user,int x,int y,int xlow,int xhigh,int ylow,int yhigh,int i)
{
   static int counter=0;
    ++counter;
   if(arr[x][y] == 1  ){return ;}
   arr[x][y]=1;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][0]=x;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][1]=y;
   ++(paigahss+i)->head_pixel;
   SDL_RenderDrawPoint(renderer1,x,y);  
  
   draw_paigah4(user,x,y-1,xlow,xhigh,ylow,yhigh,i);
   draw_paigah4(user,x+1,y,xlow,xhigh,ylow,yhigh,i);
   
}

if(isset)
{
  //#include "destroy.c"
fpm=17;

int temp=0;
for(int i=0;i<3;++i)
{
  for(int j=0;j<4;++j)
  {
    edgesX[i][j]= bakhsh[temp].x+30;
    edgesY[i][j]= bakhsh[temp].y+20;
   ++temp;
  }
} 
edgesX[0][4]=1080-30; edgesX[1][4]=edgesX[0][4]; edgesX[2][4]=edgesX[1][4]; edgesX[3][4]=edgesX[2][4]; edgesY[0][4]=bakhsh[3].y+20; edgesY[1][4]=bakhsh[7].y+20; edgesY[2][4]=bakhsh[11].y+20; edgesY[3][4]=554-20;
edgesY[3][0]= 540-20; edgesY[3][1]=edgesY[3][0]; edgesY[3][2]=edgesY[3][1]; edgesY[3][3]=edgesY[3][2]; edgesY[3][4]=edgesY[3][3]; edgesX[3][0]=bakhsh[8].x+20; edgesX[3][1]=bakhsh[9].x+20; edgesX[3][2]=bakhsh[10].x+20; edgesX[3][3]=bakhsh[11].x+20; 
for(int i=0;i<4;++i)
{
  for(int j=0;j<5;++j)
  {
  }
}

int positionx=30; 
int positiony=30;
int positionDx=400;
int positionDy=400;
SDL_SetRenderDrawColor(renderer1, 255, 0, 0, 255);
int Lx=215; 
int Ly=215;
int x1;
int y1;
int count1=1;
int count2=2;
int count3=1;

void dfs1(int x,int y,int xm,int leny)
{
  static int counter=0;

 arr1[x][y]=1; arr[x][y]=1;
   if (y>leny)
   {
 
     int is_x=1;
     int is_y=1;
    if(x>xm)
    {
      while(is_y || is_x)
      {
        if(x>xm){--x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else { arr1[x][y]=1;arr[x][y]=1;is_x=0;}
        if(y>leny){--y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;  arr1[x][y]=1; arr[x][y]=1; SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1;arr[x][y]=1;is_y=0;}
      }
    }
    else if(xm == x)
    {
       while(is_y)
      {
        if(y>leny){--y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1;arr[x][y]=1;is_y=0;}
      }
    }
    else
    {
       while(is_y || is_x)
      {
        if(x<xm){++x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;  arr1[x][y]=1;arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else { arr1[x][y]=1;arr[x][y]=1;is_x=0;}
        if(y>leny){--y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1;arr[x][y]=1;is_y=0;}
      }
    }
    arr1[x][y]=1; arr[x][y]=1;
     count1=0;
     return;
   }
   else{
 arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;
 SDL_RenderDrawPoint(renderer1,x,y);    
int rand1=rand()%3+1;
int flag=1;
int temp=0;
while (count1)
{
  if(temp == 3){dfs1(x,y+1,xm,leny);}
switch (rand1)
{
case 1:
if(distance(x,xm)>=0 && distance(x,xm)<20 && arr[x][y+1]==0){ ++counter; dfs1(x,y+1,xm,leny);}
else {rand1=2;}
  break;
case 2:
if(distance(x+1,xm)>=0 && distance(x+1,xm)<20 && arr[x+1][y]==0){++counter; dfs1(x+1,y,xm,leny);}
else {rand1=3;}
break;
case 3: 
if(distance(x-1,xm)>=0 && distance(x-1,xm)<20 && arr[x-1][y]==0){++counter; dfs1(x-1,y,xm,leny);}
else {rand1=1;}
default:
flag=0;
  break;
}
++temp;
   }
}
return;
}
int y2;
int x2;
void dfs2(int x,int y,int ym,int lenx)
{
  static int counter=0;
  
 
  arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;
   if((x)>lenx)
   {
     int is_x=1;
     int is_y=1;
     if(y>ym)
    {
      while(is_y || is_x)
      {
        if(y>ym){--y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else { arr1[x][y]=1;arr[x][y]=1;is_y=0;}
        if(x>lenx){--x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1;arr[x][y]=1; SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1;arr[x][y]=1;is_x=0;}
      }
    }
    else if(ym == y)
    {
       while(is_x)
      {
        if(x>lenx){--x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{is_x=0;}
      }
    }
    else
    {
       while(is_y || is_x)
      {
        if(y<ym){++y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else {is_y=0;}
        if(x>lenx){--x; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{arr_marz[head_marz][0]=x; arr1[x][y]=1; arr_marz[head_marz][1]=y; ++head_marz;arr[x][y]=1;is_x=0;}
      }
    }
     count2=0;
  arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1;  arr[x][y]=1;
     return;
   }
   else{
  arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;
 SDL_RenderDrawPoint(renderer1,x,y);    
int rand1=rand()%3+1;
int flag=1;
int temp=0;
while (count2)
{
 
 if(temp == 3){arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;dfs2(x+1,y,ym,lenx);}
switch (rand1)
{
case 1:
if(  (distance(y+1,ym))>=0  && (distance(y+1,ym))<20  && arr[x][y+1]==0){ ++counter; dfs2(x,y+1,ym,lenx);}
else {rand1=2;}
  break;
case 2:
if((distance(y,ym))>=0 && (distance(y,ym))<20 && arr[x+1][y]==0){++counter; dfs2(x+1,y,ym,lenx);}
else {rand1=3;}
break;
case 3: 
if((distance(y-1,ym))>=0 && (distance(y-1,ym))<20 && arr[x][y-1]==0){++counter; dfs2(x,y-1,ym,lenx);}
else {rand1=1;}
break;
default:
flag=0;
  break;
}
++temp;
   }
}

return;
}
void dfs3(int x,int y,int xm,int leny)
{
  static int counter=0;
 
  arr1[x][y]=1;arr[x][y]=1;
   if(y<leny)
   {
    int is_x=1;
    int is_y=1;
    if(x>xm)
    {
      while(is_y || is_x)
      {
        if(x>xm){--x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else { arr1[x][y]=1; arr[x][y]=1;is_x=0;}
        if(y<leny){++y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1; SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1; arr[x][y]=1;is_y=0;}
      }
    }
    else if(xm == x)
    {
       while(is_y)
      {
        if(y<leny){++y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1; arr[x][y]=1;is_y=0;}
      }
    }
    else
    {
       while(is_y || is_x)
      {
        if(x<xm){++x;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else { arr1[x][y]=1;arr[x][y]=1;is_x=0;}
        if(y<leny){++y;arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;SDL_RenderDrawPoint(renderer1,x,y);}
        else{ arr1[x][y]=1;arr[x][y]=1;is_y=0;}
      }
    
   }
   arr1[x][y]=1; arr[x][y]=1;
    count3=0;
     return;
}
   else{
     arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; 
 SDL_RenderDrawPoint(renderer1,x,y);    
int rand1=rand()%3+1;

int flag=1;
int temp=0;
while (count3)
{
 
if(temp == 3){dfs3(x,y-1,xm,leny);}
switch (rand1)
{
case 1:
if(  (distance(x+1,xm))>=0  && (distance(x+1,xm))<20  && arr[x+1][y]==0){ ++counter; dfs3(x+1,y,xm,leny);}
else {rand1=2;}
  break;
case 2:
if((distance(x,xm))>=0 && (distance(x,xm))<20 && arr[x][y-1]==0){ ++counter; dfs3(x,y-1,xm,leny);}
else {rand1=3;}
break;
case 3: 
if((distance(x-1,xm))>=0 && (distance(x-1,xm))<20 && arr[x-1][y]==0){ ++counter; dfs3(x-1,y,xm,leny);}
else {rand1=1;}
break;
default:
flag=0;
  break;
}
++temp;

   }
}
 arr1[x][y]=1; arr[x][y]=1;
return;
}


 

  for(int i=0;i<tedad1;++i)
  {
   paigahs[i]=pointsOfMap[i];
  }
 TTF_Font *font = TTF_OpenFont("/home/alireza/state.io/src/LiberationSerif-Bold.ttf",20);
        if(font == NULL){printf("%s\n",SDL_GetError());}
        for(int i=0;i<tedad1;++i)
        { 
               
                (arms+i)->w=34; (arms+i)->h=41;
                (arms+i)->x=bakhsh[paigahs[i]-1].x+bakhsh[paigahs[i]-1].w/2-10;
                (arms+i)->y=bakhsh[paigahs[i]-1].y+bakhsh[paigahs[i]-1].h/2-20;
                
                (counter+i)->w=32;
                (counter+i)->h=29;
                (counter+i)->x=(arms+i)->x;
                (counter+i)->y=(arms+i)->y+50;
                
                (paigahss+i)->sarbaz = (struct Sarbaz*)malloc(sizeof(struct Sarbaz));
                (paigahss+i)->arm = (struct Arm*)malloc(sizeof(struct Arm));
               
                
                (paigahss+i)->arm->position = *(arms+i);
                
                (paigahss+i)->sarbaz->position = *(counter+i);
                
                (paigahss+i)->shomare_dastoor=(int *)malloc(sizeof(int)*2); 
                

        }
      // tedadeharif=1;
        if(tedadeharif == 1)
       {
       
        
        for(int i=0;i<tedad1;++i)
        {
                
                (paigahss+i)->user = 0;
                (paigahss+i)->head_pixel=0;
                
        }
         /*for(int i=0;i<tedad1-1;++i)
        {
          (paigahss+i)->user=1;
          (paigahss+i)->head_pixel=0;
        } (paigahss+tedad1-1)->user=2;*/

           int randd2;
           randd2=rand()%3; if(randd2 == 1){(paigahss)->user=1;} else if((randd2)== 2){printf("yes2");(paigahss+1)->user=1;} else{printf("yes3");(paigahss+3)->user=1;} 
           int rand1;
           rand1=rand()%3; if(rand1 == 1){(paigahss+5)->user=2;} else{(paigahss+4)->user=2;} 
        for(int i=0;i<tedad1;++i)
        {
               
               if((paigahss+i)->user == 0){(paigahss+i)->arm->armt= *(armsT);}
               else if((paigahss+i)->user == 1){(paigahss+i)->arm->armt= *(armsT+1);}
               else{(paigahss+i)->arm->armt= *(armsT+2);}
                
        }
       
           isset=0;
       }
       else
       {
        
        for(int i=0;i<tedad1;++i)
        {
                (paigahss+i )->user = 0;
                
                
        }
           int randd;
           randd=rand()%3; if(randd == 1){(paigahss)->user=1;(paigahss+2)->user=2; (paigahss+5)->user=3; } 
           else if((randd)== 2){(paigahss+1)->user=1;(paigahss+3)->user=2; (paigahss+5)->user=3;} 
           else{(paigahss)->user=2;(paigahss+2)->user=3; (paigahss+5)->user=1;} 
        for(int i=0;i<tedad1;++i)
        {              
               if((paigahss+i)->user == 0){(paigahss+i)->arm->armt= *(armsT);}
               else if((paigahss+i)->user == 1){(paigahss+i)->arm->armt= *(armsT+1);}
               else if((paigahss+i)->user == 2){(paigahss+i)->arm->armt= *(armsT+2);}
               else{(paigahss+i)->arm->armt= *(armsT+3);}
               
        }  
        
        }
           isset=0;
        for(int i=0;i<tedad1;++i)
        {
        if((paigahss+i)->user == 0){(paigahss+i)->sarbaz->tedadeshun=40; (paigahss+i)->sarbaz->tedad_credit=40;}
        else{(paigahss+i)->sarbaz->tedadeshun=50; (paigahss+i)->sarbaz->tedad_credit=50;}
        char *c=(char *)malloc(sizeof(char)*10);
        sprintf(c,"%d",(paigahss+i)->sarbaz->tedadeshun);
        SDL_Color color = {0,0,0,255};
        SDL_Color color1={255,255,255,255};
        SDL_Surface *text = TTF_RenderText_Solid(font,c,color);
        SDL_Surface *text1 = TTF_RenderText_Solid(font,c,color1);
        if((paigahss+i)->user != 1){ (paigahss+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text);}
       else {(paigahss+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text1);}
        free(text); free(text1);
        free(c);
        }
       //////////////////tedade harifan/////////////////////////////////////////////////////
        
        int k[10]={0}; 
        int *counter=(int *)malloc(sizeof(int));
        int j=0;
        *counter=0;
        
        while(j != tedad1)
        {
        if(((paigahss+j)->user)>1){k[j]+=1; if(k[j] == 1){++*counter;}}
         ++j;
        }
     
         teamh=(struct TeamH*)malloc((*counter+1)*sizeof(struct TeamH));
         user_team=(struct TeamH*)malloc(1*sizeof(struct TeamH));
         user_team->is_attack=false;
        (teamh+ *counter)->tedadekol= -1; 
        free(counter);
        ////////////////////////////////////////////////////////////////////////////////////
       TTF_CloseFont(font);
       
        

for(int i=0;i<tedad1;++i)
{
 int x;
 int y;
 if(yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4] == 0)
 {
 dfs1(edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]);
 yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4]=1;
 count1=1;
 }
if(yalx[(paigahs[i]-1)/4 +1][(paigahs[i]-1)%4] == 0)
{
 dfs2(edgesX[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1],edgesX[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1]);
 count2=1;

 yalx[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]=1;
}
if(yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1] == 0)
 {
 dfs3(edgesX[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1]);
 yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1]=1;
 count3=1;
 }
if(yalx[(paigahs[i]-1)/4][(paigahs[i]-1)%4] == 0)
{
 dfs4(edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4]);
 count4=1;
 yalx[(paigahs[i]-1)/4][(paigahs[i]-1)%4]=1;
}
         if((paigahss+i)->user == 1){SDL_SetRenderDrawColor(renderer1, 100, 44, 179, 0.3);}
         else if((paigahss+i)->user == 2){SDL_SetRenderDrawColor(renderer1,76, 233, 231, 0.69);}
         else if((paigahss+i)->user == 3){SDL_SetRenderDrawColor(renderer1,86, 238, 88, 0.3);}
         else {SDL_SetRenderDrawColor(renderer1,255, 255,255, 255);}
         draw_paigah1((paigahss+i)->user,(paigahss+i)->sarbaz->position.x,(paigahss+i)->sarbaz->position.y,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],i);
         arr[(paigahss+i)->sarbaz->position.x][(paigahss+i)->sarbaz->position.y]=0;
         draw_paigah2((paigahss+i)->user,(paigahss+i)->sarbaz->position.x,(paigahss+i)->sarbaz->position.y,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],i);
         arr[(paigahss+i)->sarbaz->position.x][(paigahss+i)->sarbaz->position.y]=0;
         draw_paigah3((paigahss+i)->user,(paigahss+i)->sarbaz->position.x,(paigahss+i)->sarbaz->position.y,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],i);
         arr[(paigahss+i)->sarbaz->position.x][(paigahss+i)->sarbaz->position.y]=0;
         draw_paigah4((paigahss+i)->user,(paigahss+i)->sarbaz->position.x+1,(paigahss+i)->sarbaz->position.y-1,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],i);
         SDL_SetRenderDrawColor(renderer1,0, 0, 0, 0);

 
}


      SDL_SetRenderDrawColor(renderer1,0,0,0,0);
 
      
isset=0;

}
     SDL_RenderClear(renderer1);
     SDL_SetRenderDrawColor(renderer1,0, 0, 0, 255);
      for(int i=0;i<head_marz;++i)
      {
        SDL_RenderDrawPoint(renderer1,arr_marz[i][0],arr_marz[i][1]); 
      }

      
      
      for(int i=0;i<tedad1;++i)
      {
         if((paigahss+i)->user == 1){SDL_SetRenderDrawColor(renderer1, 146, 0, 0, 0.8);}
         else if((paigahss+i)->user == 2){SDL_SetRenderDrawColor(renderer1,76, 233, 231, 0.69);}
         else if((paigahss+i)->user == 3){SDL_SetRenderDrawColor(renderer1,255, 220, 44, 0.69);}
         else {SDL_SetRenderDrawColor(renderer1,255, 255,255,255);}
     
         for(int j=0;j<(paigahss+i)->head_pixel;++j)
         {
         SDL_RenderDrawPoint(renderer1,(paigahss+i)->pixels[j][0],(paigahss+i)->pixels[j][1]);
         }
       
      }
       checkarms(paigahss,tedad1);
for(int i=0;i<tedad1;++i)
{
  
       switch ((paigahss+i)->user)
        {
         case 0: 
        
         SDL_RenderCopy(renderer1,(paigahss+i)->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         break;
         case 1: 
        
         SDL_RenderCopy(renderer1,(paigahss+i)->arm->armt,NULL,&((paigahss+i)->arm->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         break;
         case 2: 
       
         SDL_RenderCopy(renderer1,(paigahss+i)->arm->armt,NULL,&((paigahss+i)->arm->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         break;
         case 3 : 
       
         SDL_RenderCopy(renderer1,(paigahss+i)->arm->armt,NULL,&((paigahss+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigahss+i))->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         default:
                break;
        }
}

if(counter_Time %15 == 0)
     {
     int *i=(int *)malloc(sizeof(int));
     *i=0;
    
      while(*i != tedad1)
      {
              
         if((paigahss+ *i)->user == 0)
         {
                 
             ++ *i;
         }
         else 
         {
            if(users[(paigahss+*i)->user][1]==0)
                 {
                 
                 if((paigahss+*i)->sarbaz->tedadeshun < 50)
                 {
                    if(50-(paigahss+*i)->sarbaz->tedadeshun<2)
                    {
                           
                            addsoldier(((paigahss+ *i)),50-(paigahss+ *i)->sarbaz->tedadeshun,renderer1);
                    }
                    else 
                    {
                            
                       addsoldier(((paigahss+ *i)),2,renderer1);       
                    }
                 }
                 }
                 else 
                 {
                         addsoldier(((paigahss+ *i)),2,renderer1);  
                 }
                ++ *i;
         }
      }
      free(i);
      }
      int *flag=(int *)malloc(sizeof(int));
       *flag=0;
       for(int i=0;i<4;++i)
       {
               if(users[i][1]==4){*flag=1; break;}
       } 
   
      render_potion();   
     
        for(int i=0;i<*attack_number;++i)
      {
       
        if(*flag)
      {
         if(users[(*(sarbazH+i))->user][1] != 4)
         {
        if((*(sarbazH+i))->is_kond)
                 {
                 rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
                 continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigahss);
                 (*(sarbazH+i))->is_kond=0;
                 } 
                 else{rendersoldiers_sabet((head_sarbazRuHava+i),*(sarbazH+i)); (*(sarbazH+i))->is_kond=1;}
          }
      else 
      {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigahss);
      }
      }
      else{
      if(users[(*(sarbazH+i))->user][1] == 3){
        for(int j=0;j<2;++j)
              {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigahss); 
              }
           }
           else 
           {
               rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
               continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigahss);     
           }  
      }


        if((*(sarbazH+i))->is_destroy == 1){ kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava); --i;}
       
       }
    
    SDL_SetRenderDrawColor(renderer1,132,236, 138,0.69);
     