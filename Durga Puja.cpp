#include<graphics.h>

#include<conio.h>

#include<dos.h>

main()

{
	
  initwindow(800,800);
  
  int bdr = 8, x=300;
  setcolor(bdr);
//  line(380,0,380,800); //divider
  circle(380,380,10);  //tilak
  delay(x);
  setfillstyle(1,RED);
  delay(x);
  floodfill(380,380,bdr);
  delay(x);

  //////////     right eye     /////////////
  arc(440,340,239,350,70); 
  delay(x);
  arc(520,510,90,137,160);
  delay(x);
  circle(450,390,19);
  delay(x);
  circle(450-5,390+5,7);
  delay(x);
  setfillstyle(1,BLACK);
  floodfill(450+3,390+5,bdr);
  delay(x);
  setfillstyle(1,WHITE);
  floodfill(450-20,390+5,bdr);
  delay(x);
  setfillstyle(1,WHITE);
  floodfill(450-5,390+5,bdr);

 
  //////////     left eye     /////////////  
  arc(320,340,190,270+31,70);
  delay(x);
  arc(240,510,43,90,160);
  delay(x);
  circle(310,390,19); 
  delay(x);
  circle(310+5,390+5,7);
  delay(x);
  setfillstyle(1,BLACK);
  floodfill(310-5,390,bdr);
  delay(x);
  setfillstyle(1,WHITE);
  floodfill(310+20,390+5,bdr);
  delay(x);
  setfillstyle(1,WHITE);
  floodfill(310+5,390+5,bdr);

 
  /////////      nose     ////////////
  ellipse(380,360,260,280,50,125);
  delay(x);
 

  
  /////////     nose ring      //////////
  circle(445-32,395+80,25);
  delay(x);
  circle(445-32-4,395+80,21);
  delay(x);
  setfillstyle(1,YELLOW);
  floodfill(445-32-4+23,395+80,bdr);
  delay(x);
  setfillstyle(1,WHITE);
  floodfill(445-32-4,395+80,bdr);
  delay(x);
  
  ////////      mouth     ////////////
  arc(380,380,254-2,286+2,140);
  delay(x);
  arc(380+20,510+40,65,122,40);
  delay(x);
  arc(380-20,510+40,58,90+25,40);
  delay(x);
  ellipse(380,378,252,288,90,155);
  delay(x);
  setfillstyle(1,RED);
  floodfill(380,380+142,bdr);
  delay(x);
  floodfill(380-7-5-3,380+138-5,bdr);
  delay(x);

  ///////    third eye    //////////
  circle(380,380-100,15);
  delay(x);
  arc(380+40,380-100,130,231,60);
  delay(x);
  arc(380-40,380-100,310,51,60);
  delay(x);
  ellipse(380,270,210,330,43,85);
  delay(x);
  ellipse(380,260,210,330,45,85);
  delay(x);
  setfillstyle(1,YELLOW);
  floodfill(380-2,280+65,bdr);
  delay(x);
  setfillstyle(1,YELLOW);
  floodfill(380,280,bdr);
  delay(x);
  setfillstyle(1,RED);
  floodfill(380-2,280+20,bdr);
  delay(x);
  
  setfillstyle(1,WHITE);
  floodfill(100,100,bdr);
  delay(x);
  
  settextstyle(9,0,6);
  setcolor(BLACK);
  setbkcolor(WHITE);
  outtextxy(140+80,700,"Durga Puja");
  getch();
  return 0;
}
