
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
  printf("*attack_number=%d\n",*attack_number);
  //printf("helloPc\n"); 
      if(xm>r11.x && xm<r11.x+34 && ym>r11.y && ym<r11.y+41)
        {
        if((paigah)->user == 1)
        {

            if(is_destination == 0)
            {
             
              
                  location=0;
                  is_destination=1;
                  printf("lets go\n");
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
                   printf("location added\n");
            }
            else if(location != 0)
            {
              printf("moveforward\n");
              add_destination(0,paigah,*(sarbazH+ *attack_number));
            //  printf("dy=%d d2%d\n",((paigah)->arm->position.y , (paigah+location)->arm->position.y));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah)->arm->position.y - (paigah+location)->arm->position.y),((paigah)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
           //   rendersoldiers(head_sarbazRuHava,sarbazH);
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 1) 
            {
              printf("moveforward\n");
              add_destination(1,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+1)->arm->position.y) - ((paigah+location)->arm->position.y),((paigah+1)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 2)
            {
              add_destination(2,paigah,*(sarbazH+ *attack_number));
              printf("moveforward\n");
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+2)->arm->position.y - (paigah+location)->arm->position.y),((paigah+2)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 3)
            {
              printf("moveforward\n");
              add_destination(3,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+3)->arm->position.y - (paigah+location)->arm->position.y),((paigah+3)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
              is_destination=0;
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 4) 
            {
              printf("moveforward\n");
              add_destination(4,paigah,*(sarbazH+ *attack_number));
             //c addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+4)->arm->position.y - (paigah+location)->arm->position.y),((paigah+4)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 5)
            {
                printf("moveforward\n");
                add_destination(5,paigah,*(sarbazH+ *attack_number));
             // addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+5)->arm->position.y - (paigah+location)->arm->position.y),((paigah+5)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 6)
            {
              printf("moveforward\n");
              add_destination(6,paigah,*(sarbazH+ *attack_number));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+6)->arm->position.y - (paigah+location)->arm->position.y),((paigah+6)->arm->position.x - (paigah+location)->arm->position.x));
              addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
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
                  is_destination=1;
                  addlocation(location, paigah,*(sarbazH+ *attack_number));
            }
            else if(location != 7) 
            {
                printf("moveforward\n");
              add_destination(7,paigah,*(sarbazH+ *attack_number));
              //printf("((paigah+7)->arm->position.y - (paigah+location)->arm->position.y)=%d ((paigah+7)->arm->position.x - (paigah+location)->arm->position.x=%d\n)) ",((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
              //addSarbazRuHava((paigah+location)->sarbaz->tedadeshun,((paigah+7)->arm->position.y - (paigah+location)->arm->position.y),((paigah+7)->arm->position.x - (paigah+location)->arm->position.x));
               addSarbazRuHava((*(sarbazH+ *attack_number))->tedadeshun,*(sarbazH+ *attack_number));
               is_destination=0;
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
              // rendersoldiers(head_sarbazRuHava,sarbazH);
              ++*attack_number;
          
              }
            }
        }                
         
         }
         else {printf("\a");}


}


