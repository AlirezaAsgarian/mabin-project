
buttons = SDL_GetMouseState(&xm, &ym);
if(iswindow == menu_main)
{

        if(xm>280 && xm<800 && ym>90 && ym<200)
        {
         iswindow = select_naghse+8;                   
        } 
       else  if(xm>291 && xm<786 && ym>357 && ym<488)
        {         
         iswindow = jadval;                   
        } 

}
if(iswindow == bazi3+20)
{

 for(int i=0;i<9;++i)
 {
     if(xm>(paigah2+i)->arm->position.x && xm<(paigah2+i)->arm->position.x+34 && ym>(paigah2+i)->arm->position.y && ym<(paigah2+i)->arm->position.y+41)
        {
        if((paigah2+i)->user == 1)
        {

            if(is_destination == 0)
            {
             
              
                  location=i;
                  addlocation(location, paigah2,*(sarbazH+ *attack_number));
                   if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                   else {}
            }
            else if(location != 0)
            {
              add_destination1(i,paigah2,*(sarbazH+ *attack_number));
            
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
              add_destination1(i,paigah2,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
            //  rendersoldiers(head_sarbazRuHava,sarbazH);
      //        paigah->shomare_dastoor= *attack_number;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
                printf("destination added\n");
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
 }
}
if(iswindow == bazi2+20)

{

 for(int i=0;i<9;++i)
 {
     if(xm>(paigah2+i)->arm->position.x && xm<(paigah2+i)->arm->position.x+34 && ym>(paigah2+i)->arm->position.y && ym<(paigah2+i)->arm->position.y+41)
        {
        if((paigah2+i)->user == 1)
        {

            if(is_destination == 0)
            {
             
              
                  location=i;
                  addlocation(location, paigah2,*(sarbazH+ *attack_number));
                   if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                   else {}
            }
            else if(location != 0)
            {
              printf("moveforward\n");
              add_destintion2(i,paigah2,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //   rendersoldiers(head_sarbazRuHava,sarbazH);
  //         paigah->shomare_dastoor= *attack_number;
  printf("destination added\n");
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
              add_destintion2(i,paigah2,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
            //  rendersoldiers(head_sarbazRuHava,sarbazH);
      //        paigah->shomare_dastoor= *attack_number;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
                printf("destination added\n");
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
 }
}
if(iswindow == bazi4 +20)
{

 for(int i=0;i<7;++i)
 {
     if(xm>(paigah2+i)->arm->position.x && xm<(paigah2+i)->arm->position.x+34 && ym>(paigah2+i)->arm->position.y && ym<(paigah2+i)->arm->position.y+41)
        {
        if((paigah2+i)->user == 1)
        {

            if(is_destination == 0)
            {
             
              
                  location=i;
                  addlocation(location, paigah2,*(sarbazH+ *attack_number));
                   if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                   else {}
            }
            else if(location != 0)
            {
              printf("moveforward\n");
              add_destination3(i,paigah2,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
           //   rendersoldiers(head_sarbazRuHava,sarbazH);
  //         paigah->shomare_dastoor= *attack_number;
  printf("destination added\n");
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
              add_destination3(i,paigah2,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
            //  rendersoldiers(head_sarbazRuHava,sarbazH);
      //        paigah->shomare_dastoor= *attack_number;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
                printf("destination added\n");
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
 }
}
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
          if(xm<405+270 && xm>405 && ym<60 && ym>0)
          {
            iswindow = tasadof+40;
          }
}
else if(iswindow == bazi1+20)
{

      if(xm>r11.x && xm<r11.x+34 && ym>r11.y && ym<r11.y+41)
        {
        if((paigah)->user == 1)
        {

            if(is_destination == 0)
            {
             
              
                  location=0;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                   if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                   else {}
            }
            else if(location != 0)
            {
              printf("moveforward\n");
              add_destination(0,paigah,*(sarbazH+ *attack_number));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
         
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
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
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
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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

                  location=2;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 2)
            {
              add_destination(2,paigah,*(sarbazH+ *attack_number));
              printf("moveforward\n");
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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

                  location=3;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 3)
            {
              printf("moveforward\n");
              add_destination(3,paigah,*(sarbazH+ *attack_number));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
              is_destination=0;
              user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
              is_destination=0;
              user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
                  location=4;
                
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 4) 
            {
              printf("moveforward\n");
              add_destination(4,paigah,*(sarbazH+ *attack_number));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
           

                  location=5;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                  if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                  else {}
            }
            else if(location != 5)
            {
                printf("moveforward\n");
                add_destination(5,paigah,*(sarbazH+ *attack_number));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
             
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
                  location=6;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                else {}
            }
            else if(location != 6)
            {
              printf("moveforward\n");
              add_destination(6,paigah,*(sarbazH+ *attack_number));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
                  location=7;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
               if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                else {}
            }
            else if(location != 7) 
            {
                printf("moveforward\n");
              add_destination(7,paigah,*(sarbazH+ *attack_number));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
                user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
              ++*attack_number;
          
              }
            }
        }                
         
         }
         
         else {printf("\a");}


}

else if(iswindow == tasadof+40)
         {
           for(int i=0;i<tedad1;++i)
           {
         if(xm>(paigahss+i)->arm->position.x && xm<(paigahss+i)->arm->position.x +34 && ym>(paigahss+i)->arm->position.y && ym<(paigahss+i)->arm->position.y+41){
        if((paigahss+i)->user == 1)
        {

           
            if(is_destination == 0)
            {
                  location=i;
                  addlocation(location, paigahss,*(sarbazH+ *attack_number));
               if((*(sarbazH+ *attack_number))->loc != -1){is_destination=1;}
                else {}
            }
            else if(location != i) 
            {
              add_destination(i,paigahss,*(sarbazH+ *attack_number));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
               user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
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
              add_destination1(i,paigahss,*(sarbazH+ *attack_number));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
                user_team->is_attack=true;
               user_team->hadaf=(*(sarbazH+ *attack_number))->loc;
              ++*attack_number;
          
              }
            }
        }
           
            break;
           }
             
           }
         }
