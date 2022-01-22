
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
  //printf("helloPc\n"); 
      if(xm>r11.x && xm<r11.x+34 && ym>r11.y && ym<r11.y+41)
        {
        if((paigah)->user == 1)
        {

            if(is_destination == 0)
            {

                  location=0;
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
           if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
              is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
               is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
               is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
              is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
          if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
               is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
               is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
          if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
               is_destination=0;
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
                  is_destination=1;
            }
            else 
            {
              printf("no\n");
            }
        } 
        else 
        {
            if(is_destination == 0)
            {printf("no\n");}
            else 
            {
              printf("moveforward\n");
               is_destination=0;
            }
        }                
         
         }
         else {printf("\a");}


}


