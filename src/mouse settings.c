
buttons = SDL_GetMouseState(&xm, &ym);
if(iswindow == select_naghse+8)
{
        if(xm>211 && xm<258 && ym>264 && ym<310)
        {
         
         iswindow = bazi1+20;                   
        } 

        else if(xm>499 && xm<546 && ym>200 && ym<268)
        {
            iswindow = bazi2 + 20;
        }              
        else if(xm>852 && xm<902 && ym>288 && ym<338)
        {

           iswindow = bazi3+20;

        }

          else if(xm>541 && xm<591 && ym>431 && ym<481)
          {

          iswindow = bazi4+20;

          }
}
else if(iswindow == bazi1+20)
{
 // printf("*attack_number=%d\n",*attack_number);
  //printf("helloPc\n"); 
      if(xm>r11.x && xm<r11.x+34 && ym>r11.y && ym<r11.y+41)
        {
        if((paigah)->user == 1)
        {

            if(is_destination == 0)
            {
             
              
                  location=0;
                  //printf("lets go\n");
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  // printf("location added\n");
                   if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                   else {}
            }
            else if(location != 0)
            {
              printf("moveforward\n");
              add_destination(0,paigah,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //   rendersoldiers(head_sarbazRuHava,sarbazH);
  //         paigah->shomare_dastoor= *attack_number;
              is_destination=0;
              ++*attack_number;
            }
        } 
        else 
        {
           if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
              printf("moveforward\n");
              add_destination(0,paigah,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
            //  rendersoldiers(head_sarbazRuHava,sarbazH);
      //        paigah->shomare_dastoor= *attack_number;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
              is_destination=0;
              ++*attack_number;
              
              }
              else
              {
                              printf("no\n");
              }
            }
        }                
        } 

        else if(xm>r12.x && xm<r12.x+34 && ym>r12.y && ym<r12.y+41)
        {
        if((paigah+1)->user == 1)
        {

            if(is_destination == 0)
            {
            //  *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
             //++*attack_number;
                  location=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 1) 
            {
              printf("moveforward\n");
              add_destination(1,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+1)->arm->position.y) - ((paigah+location)->arm->position.y),((paigah+1)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
       //         (paigah+1)->shomare_dastoor= *attack_number;
            //   rendersoldiers(head_sarbazRuHava,sarbazH);
            ++*attack_number;
            
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
              printf("moveforward\n");
              add_destination(1,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+1)->arm->position.y) - ((paigah+location)->arm->position.y),((paigah+1)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
        //       (paigah+1)->shomare_dastoor= *attack_number;
             //  rendersoldiers(head_sarbazRuHava,sarbazH);
             ++*attack_number;
                
               }
            }
        }                 
        }              
        else if(xm>r13.x && xm<r13.x+34 && ym>r13.y && ym<r13.y+41)
        {

        if((paigah+2)->user == 1)
        {

            if(is_destination == 0)
            {
          //     *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
           //  ++*attack_number;

                  location=2;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 2)
            {
              add_destination(2,paigah,*(sarbazH+ *attack_number));
              printf("moveforward\n");
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+2)->arm->position.y - (paigah+location)->arm->position.y),((paigah+2)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
         //      (paigah+2)->shomare_dastoor= *attack_number;
             //  rendersoldiers(head_sarbazRuHava,sarbazH);
             ++*attack_number;
            
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
                add_destination(2,paigah,*(sarbazH+ *attack_number));
              printf("moveforward\n");
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+2)->arm->position.y - (paigah+location)->arm->position.y),((paigah+2)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
        //       (paigah+2)->shomare_dastoor= *attack_number;
           //    rendersoldiers(head_sarbazRuHava,sarbazH);
           ++*attack_number;
           
               }
            }
        }                

        }

         else if(xm>r14.x && xm<r14.x+34 && ym>r14.y && ym<r14.y+41)
         {

         if((paigah+3)->user == 1)
        {

            if(is_destination == 0)
            {
          //     *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
           //   ++*attack_number;

                  location=3;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 3)
            {
              printf("moveforward\n");
              add_destination(3,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+3)->arm->position.y - (paigah+location)->arm->position.y),((paigah+3)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
              is_destination=0;
              user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
          //    (paigah+3)->shomare_dastoor= *attack_number;
          //    rendersoldiers(head_sarbazRuHava,sarbazH);
          ++*attack_number;
         
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
              printf("moveforward\n");
              add_destination(3,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+3)->arm->position.y - (paigah+location)->arm->position.y),((paigah+3)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
              is_destination=0;
              user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
         //     (paigah+3)->shomare_dastoor= *attack_number;
            //  rendersoldiers(head_sarbazRuHava,sarbazH);
            ++*attack_number;
           
              }
            }
        }                

         }
         else if(xm>r15.x && xm<r15.x+34 && ym>r15.y && ym<r15.y+41)
         {
              if((paigah+4)->user == 1)
        {

            if(is_destination == 0)
            {
           //    *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
            //  ++*attack_number;
                  location=4;
                
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 4) 
            {
              printf("moveforward\n");
              add_destination(4,paigah,*(sarbazH+ *attack_number));
             //c addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+4)->arm->position.y - (paigah+location)->arm->position.y),((paigah+4)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
            //   (paigah+4)->shomare_dastoor= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
            
            }
        } 
        else 
        {
          if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
              printf("moveforward\n");
              add_destination(4,paigah,*(sarbazH+ *attack_number));
             // addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+4)->arm->position.y - (paigah+location)->arm->position.y),((paigah+4)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
            //   (paigah+4)->shomare_dastoor= *attack_number;
             //  rendersoldiers(head_sarbazRuHava,sarbazH);
             ++*attack_number;
            
               }
            }
        }                
         }
         else if(xm>r16.x && xm<r16.x+34 && ym>r16.y && ym<r16.y+41)
         {
           if((paigah+5)->user == 1)
        {

            if(is_destination == 0)
            {
           //    *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
           //   ++*attack_number;

                  location=5;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 5)
            {
                printf("moveforward\n");
                add_destination(5,paigah,*(sarbazH+ *attack_number));
             // addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+5)->arm->position.y - (paigah+location)->arm->position.y),((paigah+5)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
             //  (paigah+5)->shomare_dastoor= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
              
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
                 printf("moveforward\n");
                add_destination(5,paigah,*(sarbazH+ *attack_number));
             
             // addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+5)->arm->position.y - (paigah+location)->arm->position.y),((paigah+5)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
              // (paigah+5)->shomare_dastoor[0]= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
             
              }
            }
        }                
         }
         else if(xm>r17.x && xm<r17.x+34 && ym>r17.y && ym<r17.y+41)
         {
           if((paigah+6)->user == 1)
        {

            if(is_destination == 0)
            {
            //   *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
            //   ++*attack_number;
                  location=6;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                else {}
            }
            else if(location != 6)
            {
              printf("moveforward\n");
              add_destination(6,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+6)->arm->position.y - (paigah+location)->arm->position.y),((paigah+6)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
            //   (paigah+6)->shomare_dastoor[0]= *attack_number;
             //  rendersoldiers(head_sarbazRuHava,sarbazH);
             ++*attack_number;
            
            }
        } 
        else 
        {
          if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
              printf("moveforward\n");
              add_destination(6,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+6)->arm->position.y - (paigah+location)->arm->position.y),((paigah+6)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
             //  (paigah+6)->shomare_dastoor[0]= *attack_number;
               //rendersoldiers(head_sarbazRuHava,sarbazH);
               //*(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
                ++*attack_number;
              }
            }
        }                
         }
         else if(xm>r18.x && xm<r18.x+34 && ym>r18.y && ym<r18.y+41)
         {
        if((paigah+7)->user == 1)
        {

            if(is_destination == 0)
            {
            //  *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
            //   ++*attack_number;
                  location=7;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
               if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                else {}
            }
            else if(location != 7) 
            {
                printf("moveforward\n");
              add_destination(7,paigah,*(sarbazH+ *attack_number));
              //printf("((paigah+7)->arm->position.y - (paigah+location)->arm->position.y)=%d ((paigah+7)->arm->position.x - (paigah+location)->arm->position.x=%d\n)) ",((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //    (paigah+7)->shomare_dastoor= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
             
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
              printf("moveforward\n");
              add_destination(7,paigah,*(sarbazH+ *attack_number));
              //printf("((paigah+7)->arm->position.y - (paigah+location)->arm->position.y)=%d ((paigah+7)->arm->position.x - (paigah+location)->arm->position.x=%d\n)) ",((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
                user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //    (paigah+7)->shomare_dastoor= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
          
              }
            }
        }                
         
         }
         
         else {printf("\a");}


}

else if(iswindow == tasadof+40)
         {
          // printf("hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh\n");
           for(int i=0;i<tedad1;++i)
           {
            // printf("xm=%d ym=%d (paigahss+i)->arm->position.x=%d (paigahss+i)->arm->position.y =%d %d\n",xm,ym,(paigahss+i)->arm->position.x,(paigahss+i)->arm->position.y,i);
         if(xm>(paigahss+i)->arm->position.x && xm<(paigahss+i)->arm->position.x +34 && ym>(paigahss+i)->arm->position.y && ym<(paigahss+i)->arm->position.y+41){
        if((paigahss+i)->user == 1)
        {

           
            if(is_destination == 0)
            {
            //  *(sarbazH+ *attack_number)=(struct sarbazRuHava *)malloc(sizeof(struct sarbazRuHava));
            //   ++*attack_number;
                  location=i;
            //      printf("location added\n");
                  addlocation(location, paigahss,*(sarbazH+ *attack_number));
               if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                else {}
            }
            else if(location != i) 
            {
             //   printf("moveforward\n");
              add_destination(i,paigahss,*(sarbazH+ *attack_number));
              //printf("((paigah+7)->arm->position.y - (paigah+location)->arm->position.y)=%d ((paigah+7)->arm->position.x - (paigah+location)->arm->position.x=%d\n)) ",((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
              // printf("dest added\n");
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
              // printf("sarbaz added\n");
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //    (paigah+7)->shomare_dastoor= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
            // printf("tamam\n");
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              if(!is_move){
             // printf("moveforward %d %d\n",i,*attack_number);
              add_destination1(i,paigahss,*(sarbazH+ *attack_number));
              //printf("((paigah+7)->arm->position.y - (paigah+location)->arm->position.y)=%d ((paigah+7)->arm->position.x - (paigah+location)->arm->position.x=%d\n)) ",((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
               //printf("destination added\n");
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               //printf("sarbaz ru hava added\n");
               is_destination=0;
                user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //    (paigah+7)->shomare_dastoor= *attack_number;
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
          
              }
            }
        }
           
            break;
           }
             
           }
         }
