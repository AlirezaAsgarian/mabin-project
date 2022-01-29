
//printf("tasadof\n");
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
    //printf("arr=%d\n",arr[x][y]);
   if(arr[x][y] == 1 ){return ;}
 //  printf("x=%d y=%d is xlow=%d xhigh=%d ylow=%d yhigh=%d counter=%d arr=%d user=%d\n",x,y,xlow,xhigh,ylow,yhigh,counter,arr[x][y],user);
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
   //printf("x=%d y=%d is xlow=%d xhigh=%d ylow=%d yhigh=%d counter=%d arr=%d user=%d\n",x,y,xlow,xhigh,ylow,yhigh,counter,arr[x][y],user);
   arr[x][y]=1;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][0]=x;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][1]=y;
   ++(paigahss+i)->head_pixel;
   //if(i==0){printf("%d")}
   SDL_RenderDrawPoint(renderer1,x,y);  
  
   draw_paigah2(user,x,y+1,xlow,xhigh,ylow,yhigh,i);
   draw_paigah2(user,x-1,y,xlow,xhigh,ylow,yhigh,i);
   
}
void draw_paigah3(int user,int x,int y,int xlow,int xhigh,int ylow,int yhigh,int i)
{
   static int counter=0;
    ++counter;
   if(arr[x][y] == 1  ){return ;}
   //printf("x=%d y=%d is xlow=%d xhigh=%d ylow=%d yhigh=%d counter=%d arr=%d user=%d\n",x,y,xlow,xhigh,ylow,yhigh,counter,arr[x][y],user);
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
    //printf("hello\n");
   if(arr[x][y] == 1  ){return ;}
   //printf("x=%d y=%d is xlow=%d xhigh=%d ylow=%d yhigh=%d counter=%d arr=%d user=%d\n",x,y,xlow,xhigh,ylow,yhigh,counter,arr[x][y],user);
   arr[x][y]=1;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][0]=x;
   (paigahss+i)->pixels[(paigahss+i)->head_pixel][1]=y;
   ++(paigahss+i)->head_pixel;
   SDL_RenderDrawPoint(renderer1,x,y);  
  
   draw_paigah4(user,x,y-1,xlow,xhigh,ylow,yhigh,i);
   draw_paigah4(user,x+1,y,xlow,xhigh,ylow,yhigh,i);
   
}
int distance(int x,int x1)
{
  //printf("x=%d y=%d\n",x,y);
  int distance= (x-x1);
  distance= distance>0 ? distance : -distance;
//  printf("distance=%d\n",distance);
  return distance;
}
if(isset)
{
  
//fpm=17;

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
/*for(int i=0;i<4;++i)
{
  for(int j=0;j<5;++j)
  {
    printf("edgeX[%d][%d]=%d edgeY[%d][%d]=%d \n",i,j,edgesX[i][j],i,j,edgesY[i][j]);
  }
}*/
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
int count4=1;
void dfs1(int x,int y,int xm,int leny)
{
  static int counter=0;
 
 // if(counter == 0){count1 =1;}
 // if(y > 100 && y < 200 )printf("y=%d counter=%d\n",y,counter);
 //printf("x=%d y=%d arr[%d][%d]=%d xm=%d leny=%d\n",x,y,x,y,arr[x][y],xm,leny);
 arr1[x][y]=1; arr[x][y]=1;
   if (y>leny)
   {
   //  printf("xm=%d leny=%d\n",xm,leny);
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
    //printf("xm=%d x=%d leny=%d y=%d\n",xm,x,leny,y);
    arr1[x][y]=1; arr[x][y]=1;
     count1=0;
     return;
   }
   else{
 arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;
 SDL_RenderDrawPoint(renderer1,x,y);    
int rand1=rand()%3+1;
//printf("rand=%d\n",rand1);
int flag=1;
int temp=0;
while (count1)
{
  //printf("rand=%d\n",rand1);
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
//printf("distance khodesh=%d\n",distance(x,y));
   }
}
//counter=0;
return;
}
int y2;
int x2;
void dfs2(int x,int y,int ym,int lenx)
{
  static int counter=0;
  
 // if(x > 100 && x < 200 )printf("x2=%d counter2=%d\n",x,counter);
 //printf("x=%d y=%d arr[%d][%d]=%d ym=%d lenx=%d\n",x,y,x,y,arr[x][y],ym,lenx);
  //printf("x=%d y=%d arr[%d][%d]=%d\n",x,y,x,y,arr[x][y]);
  arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1; arr[x][y]=1;
   if((x)>lenx)
   {
     int is_x=1;
     int is_y=1;
  //   printf("ready to flush\n");
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
   // printf("has returned\n");
     count2=0;
  arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; arr1[x][y]=1;  arr[x][y]=1;
   //  printf("x2=%d y2=%d arr[%d][%d]=%d ym2=%d lenx2=%d\n",x,y,x,y,arr[x][y],ym,lenx);
     return;
   }
   else{
  arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;
 SDL_RenderDrawPoint(renderer1,x,y);    
int rand1=rand()%3+1;
//printf("rand=%d\n",rand1);
int flag=1;
int temp=0;
while (count2)
{
  //printf("rand=%d\n",rand1);
 // printf("x=%d y=%d\n",x,y);
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
//printf("distance khodesh=%d\n",distance(x,y));
   }
}

//printf("returned\n");
return;
}
void dfs3(int x,int y,int xm,int leny)
{
  static int counter=0;
  //printf("x=%d y=%d arr[%d][%d]=%d xm=%d leny=%d\n",x,y,x,y,arr[x][y],xm,leny);
 // if(y > 100 && y < 200 )printf("x3=%d counter3=%d\n",x,counter);
  //printf("x=%d y=%d arr[%d][%d]=%d\n",x,y,x,y,arr[x][y]);
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
//printf("rand=%d\n",rand1);
int flag=1;
int temp=0;
while (count3)
{
  //printf("rand=%d\n",rand1);
  //printf("x=%d y=%d\n",x,y);
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
//printf("distance khodesh=%d\n",distance(x,y));
   }
}
 arr1[x][y]=1; arr[x][y]=1;
return;
}
void dfs4(int x,int y,int ym,int lenx)
{
  static int counter=0;
  //printf("x=%d y=%d arr[%d][%d]=%d xm=%d leny=%d\n",x,y,x,y,arr[x][y],ym,lenx);
  //if(x > 100 && x < 200 )printf("x3=%d counter3=%d\n",x,counter);
  //printf("x=%d y=%d arr[%d][%d]=%d\n",x,y,x,y,arr[x][y]);
 arr1[x][y]=1; arr[x][y]=1;
   if((x)<lenx)
   {
     int is_x=1;
     int is_y=1;
  //   printf("ready to flush\n");
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
//printf("rand=%d\n",rand1);
int flag=1;
int temp=0;
while (count4)
{
  if(temp == 3){arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz; dfs4(x-1,y,ym,lenx);}
  //printf("rand=%d\n",rand1);
 // printf("x=%d y=%d\n",x,y);
switch (rand1)
{
case 1:
if(  (distance(y+1,ym))>=0  && (distance(y+1,ym))<20  && arr[x][y+1]==0){++counter; dfs4(x,y+1,ym,lenx);}
else {rand1=2;}
  break;
case 2:
if((distance(y-1,ym))>=0 && (distance(y-1,ym))<20 && arr[x][y-1]==0){ ++counter; dfs4(x,y-1,ym,lenx);}
else {rand1=3;}
break;
case 3: 
if((distance(y,ym))>=0 && (distance(y,ym))<20 && arr[x-1][y]==0){ ++counter; dfs4(x-1,y,ym,lenx);}
else {rand1=1;}
break;
default:
flag=0;
  break;
}
++temp;
//printf("distance khodesh=%d\n",distance(x,y));
   }
}
arr_marz[head_marz][0]=x; arr_marz[head_marz][1]=y; ++head_marz;  arr1[x][y]=1; arr[x][y]=1;
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
                printf("arms\n");
                (arms+i)->w=34; (arms+i)->h=41;
                (arms+i)->x=bakhsh[paigahs[i]-1].x+bakhsh[paigahs[i]-1].w/2-10;
                (arms+i)->y=bakhsh[paigahs[i]-1].y+bakhsh[paigahs[i]-1].h/2-20;
                printf("arms good\n");
                (counter+i)->w=32;
                (counter+i)->h=29;
                (counter+i)->x=(arms+i)->x;
                (counter+i)->y=(arms+i)->y+50;
                printf("counter good\n");
                (paigahss+i)->sarbaz = (struct Sarbaz*)malloc(sizeof(struct Sarbaz));
                (paigahss+i)->arm = (struct Arm*)malloc(sizeof(struct Arm));
                printf("memory allocated\n");
                (paigahss+i)->arm->position = *(arms+i);
                printf("arm submitted\n");
                (paigahss+i)->sarbaz->position = *(counter+i);
                printf("counter submitted\n");
                (paigahss+i)->shomare_dastoor=(int *)malloc(sizeof(int)*2); 
                 printf("shomare dastoor allocated\n");
                
              //  (paigah+i)->shomare_dastoor[0]= -1;

        }
        printf("arms finished\n");
        if(tedadeharif == 1)
       {
        
        for(int i=0;i<tedad1;++i)
        {
                 printf("user %d\n",tedad1);
                (paigahss+i)->user = 0;
                (paigahss+i)->head_pixel=0;
                
        }
           int randd2;
           randd2=rand()%3; if(randd2 == 1){printf("yes"); (paigahss)->user=1;} else if((randd2)== 2){printf("yes2");(paigahss+1)->user=1;} else{printf("yes3");(paigahss+3)->user=1;} 
           int rand1;
           rand1=rand()%3; if(rand1 == 1){(paigahss+5)->user=2;} else{(paigahss+4)->user=2;} 
          printf("rands finished\n");
        for(int i=0;i<tedad1;++i)
        {
                printf("texture started\n");
                //(paigah+i)->arm->armt=(SDL_Texture *)malloc(sizeof(SDL_Texture*)*1);
                printf("texture1\n");
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
                printf("user %d\n",tedad1);
                (paigahss+i )->user = 0;
                
                
        }
           int randd;
           randd=rand()%3; if(randd == 1){(paigahss)->user=1;(paigahss+2)->user=2; (paigahss+5)->user=3; } 
           else if((randd)== 2){(paigahss+1)->user=1;(paigahss+3)->user=2; (paigahss+5)->user=3;} 
           else{(paigahss)->user=2;(paigahss+2)->user=3; (paigahss+5)->user=1;} 
            printf("rands finished\n");
        for(int i=0;i<tedad1;++i)
        {       printf("texture started\n");
               //(paigah+i)->arm->armt=(SDL_Texture *)malloc(sizeof(SDL_Texture*)*1);
                printf("texture2\n");          
               if((paigahss+i)->user == 0){(paigahss+i)->arm->armt= *(armsT);}
               else if((paigahss+i)->user == 1){(paigahss+i)->arm->armt= *(armsT+1);}
               else if((paigahss+i)->user == 2){(paigahss+i)->arm->armt= *(armsT+2);}
               else{(paigahss+i)->arm->armt= *(armsT+3);}
               
        }
       // printf("hello");
        
        
        }
           isset=0;
           {printf("bia paeen saremon dard geref\n");}
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
        //(paigahss+i)->sarbaz->tedad=SDL_CreateTextureFromSurface(renderer1,text);
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
     //    printf("counter=%d \n",*counter);
         teamh=(struct TeamH*)malloc((*counter+1)*sizeof(struct TeamH));
         user_team=(struct TeamH*)malloc(1*sizeof(struct TeamH));
         user_team->is_attack=false;
        (teamh+ *counter)->tedadekol= -1; 
        free(counter);
        ////////////////////////////////////////////////////////////////////////////////////
       TTF_CloseFont(font);
       
        
printf("hello");

printf("hello\n");
for(int i=0;i<tedad1;++i)
{
 int x;
 int y;
 //printf("(paigahs[i]-1)/4=%d (paigahs[i]-1)%4=%d \n",(paigahs[i]-1)/4,(paigahs[i]-1)%4);
 if(yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4] == 0)
 {
 dfs1(edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]);
 yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4]=1;
 //printf("1\n");
 count1=1;
 }
if(yalx[(paigahs[i]-1)/4 +1][(paigahs[i]-1)%4] == 0)
{
 dfs2(edgesX[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1],edgesX[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1]);
 count2=1;
 //printf("2\n");

 yalx[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]=1;
 // print_edge(yalx);
}
if(yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1] == 0)
 {
 dfs3(edgesX[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4+1],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1]);
 //printf("3\n");
 yaly[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1]=1;
 count3=1;
 }
if(yalx[(paigahs[i]-1)/4][(paigahs[i]-1)%4] == 0)
{
  //printf("hello dfs4\n");
 dfs4(edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4]);
 count4=1;
 //printf("4\n");
 yalx[(paigahs[i]-1)/4][(paigahs[i]-1)%4]=1;
 // print_edge(yalx);
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

// printf("badi\n");
 
}


      SDL_SetRenderDrawColor(renderer1,0,0,0,0);
 
// print_edge(arr);
      
isset=0;

}
//SDL_RenderClear(renderer1);
     SDL_RenderClear(renderer1);
     SDL_SetRenderDrawColor(renderer1,0, 0, 0, 255);
      for(int i=0;i<head_marz;++i)
      {
        SDL_RenderDrawPoint(renderer1,arr_marz[i][0],arr_marz[i][1]); 
      }

      //memcpy(arr,arr1,sizeof(arr1));
      
      for(int i=0;i<tedad1;++i)
      {
         if((paigahss+i)->user == 1){SDL_SetRenderDrawColor(renderer1, 100, 44, 179, 0.3);}
         else if((paigahss+i)->user == 2){SDL_SetRenderDrawColor(renderer1,76, 233, 231, 0.69);}
         else if((paigahss+i)->user == 3){SDL_SetRenderDrawColor(renderer1,255, 220, 44, 0.69);}
         else {SDL_SetRenderDrawColor(renderer1,255, 255,255,255);}
     //    printf("head=%d %d\n",i,(paigahss+i)->head_pixel);
         for(int j=0;j<(paigahss+i)->head_pixel;++j)
         {
         SDL_RenderDrawPoint(renderer1,(paigahss+i)->pixels[j][0],(paigahss+i)->pixels[j][1]);
         }
       /*  draw_paigah1((paigahss+i)->user,(paigahss+i)->sarbaz->position.x,(paigahss+i)->sarbaz->position.y,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]);
         arr[(paigahss+i)->sarbaz->position.x][(paigahss+i)->sarbaz->position.y]=0;
         draw_paigah2((paigahss+i)->user,(paigahss+i)->sarbaz->position.x,(paigahss+i)->sarbaz->position.y,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]);
         arr[(paigahss+i)->sarbaz->position.x][(paigahss+i)->sarbaz->position.y]=0;
         draw_paigah3((paigahss+i)->user,(paigahss+i)->sarbaz->position.x,(paigahss+i)->sarbaz->position.y,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]);
         arr[(paigahss+i)->sarbaz->position.x][(paigahss+i)->sarbaz->position.y]=0;
         draw_paigah4((paigahss+i)->user,(paigahss+i)->sarbaz->position.x+1,(paigahss+i)->sarbaz->position.y-1,edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesX[(paigahs[i]-1)/4][(paigahs[i]-1)%4+1],edgesY[(paigahs[i]-1)/4][(paigahs[i]-1)%4],edgesY[(paigahs[i]-1)/4+1][(paigahs[i]-1)%4]);
        // SDL_SetRenderDrawColor(renderer1, 255, 0, 0, 255);*/
      }
for(int i=0;i<tedad1;++i)
{
  
  switch ((paigahss+i)->user)
        {
         case 0: 
         //paigahss-> color = *(imagess);
        // paigah -> position =t11; 
         //SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         break;
         case 1: 
         //paigah-> color = *(imagess+27);
         //paigah -> position =t11; 
      //  SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
         //SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->arm->armt,NULL,&((paigahss+i)->arm->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         break;
         case 2: 
         //paigah-> color = *(imagess+54);
         //paigah -> position =t11; 
         //SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->arm->armt,NULL,&((paigahss+i)->arm->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
         break;
         case 3 : 
         //paigah-> color = *(imagess+81);
         //paigah -> position =t11; 
         //SDL_RenderCopy(renderer1,paigah-> color,NULL,&(paigah->position));
         SDL_RenderCopy(renderer1,(paigahss+i)->arm->armt,NULL,&((paigahss+i)->arm->position));
         SDL_RenderCopy(renderer1,((paigahss+i))->sarbaz->tedad,NULL,&((paigahss+i)->sarbaz->position));
        default:
                break;
        }
}
//SDL_RenderDrawPoint(renderer1,i,i);

//SDL_SetRenderDrawColor(renderer1,0, 0, 0, 0);
//printf("counter time=%d\n",counter_Time);
if(counter_Time %15 == 0)
     {
     int *i=(int *)malloc(sizeof(int));
     *i=0;
      while(*i != 8)
      {
              
         if((paigahss+ *i)->user == 0)
         {
                 
             ++ *i;
         }
         else 
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
                ++ *i;
         }
      }
      free(i);
      }
     // SDL_RenderClear(renderer1);
        for(int i=0;i<*attack_number;++i)
      {
        //printf("sarbaz renderered1\n");
        rendersoldiers((head_sarbazRuHava+i),*(sarbazH+i));
        //printf("sarbaz renderered\n");
        continuetomove1((head_sarbazRuHava+i),*(sarbazH+i),i,sarbazH,attack_number,head_sarbazRuHava,paigahss);   
       // printf("sarbaz moved renderered\n");


        if((*(sarbazH+i))->is_destroy == 1){printf("hello\n"); kamkardaneSarbazH(i,attack_number,sarbazH, head_sarbazRuHava); --i;}
       
       }
      printf("attack number=%d attack_number_Harif=%d\n",*attack_number,*attack_number_Harif);
    
    SDL_SetRenderDrawColor(renderer1,132,236, 138,0.69);
      //printf("head_marz=%d\n",head_marz);
//SDL_RenderPresent(renderer1);
//printf("how are you\n");