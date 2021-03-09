#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "menu.h"

int main(int argc, char *argv[])

{
TTF_Init();

if(Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers) < 0) {
	    printf("Unable to open audio!\n");
	    exit(1);
		}
Mix_Music *song=NULL;//format mp3
Mix_Music *intro=NULL;
Mix_Chunk *click=NULL;//format wav
posimage15.x=405;
Mix_VolumeMusic(MIX_MAX_VOLUME);
intro=Mix_LoadMUS("intro.ogg");
Mix_PlayMusic(intro,MIX_MAX_VOLUME);
ecran = SDL_SetVideoMode(1000, 600, 32, SDL_HWSURFACE);
posbackground.x = 0;
posbackground.y = 0;


y=0;
while(y<158){
sprintf(menu,"intro2/%d.jpg",y);
					intro2_[y]=IMG_Load(menu); 
SDL_BlitSurface(intro2_[y],NULL,ecran,&posbackground);
SDL_Delay(20);
y++;
SDL_Flip(ecran);
SDL_FreeSurface(intro2_[y]);

}

//fonction predifenie fel bibliotheque sdl1.2
click=Mix_LoadWAV("bref.ogg");
Mix_VolumeMusic(MIX_MAX_VOLUME);
//Mix_PlayMusic(song, MIX_MAX_VOLUME);
police = TTF_OpenFont("police.ttf", 55);
police1 = TTF_OpenFont("police1.ttf", 25);
texte = TTF_RenderText_Blended(police, "Mortal Katana", couleurblanche);
texte2 = TTF_RenderText_Blended(police, "MENU", couleurblanche);
texte1 = TTF_RenderText_Blended(police, "Settings", couleurblanche);
textesouris = TTF_RenderText_Blended(police1, "Clavier", couleurblue);
textemanette = TTF_RenderText_Blended(police1, "Manette", couleurblue);
texteclavier = TTF_RenderText_Blended(police1, "Souris", couleurblue);
texte3 = TTF_RenderText_Blended(police1, "Click to play", couleurblue);
texte4 = TTF_RenderText_Blended(police1, "Click to settings", couleurblue);
texte5 = TTF_RenderText_Blended(police1, "Click to exit", couleurblue);
texte6 = TTF_RenderText_Blended(police1, "Music Muted", couleurRed);
ecran = SDL_SetVideoMode(1000, 600, 32, SDL_HWSURFACE);// kobr fenetre

while(run){// madamo ye5dem


SDL_WM_SetCaption("Mortal Katana", NULL);//ktiba bare fo9
 
  
   posplay1.x=28;
posplay1.y=280;

possetting1.x=28;
possetting1.y=388;

posexit1.x=28;
posexit1.y=490;

posplay2.x=28;
posplay2.y=280;

possetting2.x=28;
possetting2.y=388;

posexit2.x=28;
posexit2.y=490;
   
    posson.x=30;// ta3 sous menu
    posson.y=190;
    on.x=400;
    on.y=300;
    of.x=500;
    of.y=300;
posback.x=600;
posback.y=480;
text.x=50;
text.y=0;
text1.x=50;
text1.y=0;
text2.x=105;
text2.y=180;

text3.x=320;//click to play
text3.y=310;

text4.x=310;//click to settings
text4.y=418;

text5.x=310;//click to exit
text5.y=520;

text6.x=560;//Mute
text6.y=310;

textsouris.x=152;
textsouris.y=180;
textclavier.x=328;
textclavier.y=180;
textmanette.x=543;
textmanette.y=180;

posjoystic.x=543;
posjoystic.y=89;
posclavier.x=328;
posclavier.y=96;
possouris.x=152;
possouris.y=92;
posfullscreen.x=400;
posfullscreen.y=440;
posnormalesize.x=500;
posnormalesize.y=440;
posscreen_size.x=18;
posscreen_size.y=355;

posimage15.y=370;
posimage14.x=405;
posimage14.y=320;

x=2;
background =  IMG_Load("menu.jpg");// tjiblek el imqge

    play = IMG_Load("play.png");
    setting =  IMG_Load("setting.png");

    exite = IMG_Load("exit.png");
    play2 =  IMG_Load("play2.png");
    setting2=IMG_Load("setting2.png");

   exit2=IMG_Load("exit3.png");
    son=IMG_Load("son.png");
    on1=IMG_Load("on1.png");
    on2=IMG_Load("on2.png");
    of1=IMG_Load("of1.png");
    joystic=IMG_Load("joystic.png");
    souris=IMG_Load("clavier.png");
    clavier=IMG_Load("souris.png");
    joystic2=IMG_Load("joystic2.png");
    souris2=IMG_Load("clavier2.png");
    clavier2=IMG_Load("souris2.png");
    image12=IMG_Load("image12.png");
    image13=IMG_Load("image13.png");
    screen_size=IMG_Load("screen_size.png");
    back = IMG_Load("back.png");
    of2=IMG_Load("of2.png");
    image14=IMG_Load("barre.png");
    image15=IMG_Load("cursseur.png");

				   //{//loading menu principale
sprintf(menu,"image/%d.jpg",i);
Menu_anime[i]=IMG_Load(menu); 
 SDL_BlitSurface(Menu_anime[i],NULL,ecran,&posbackground);
SDL_Delay(150);

				     
SDL_BlitSurface(play, NULL, ecran, &posplay1);
SDL_BlitSurface(setting, NULL, ecran, &possetting1);
SDL_BlitSurface(help, NULL, ecran, &poshelp1);
SDL_BlitSurface(exite, NULL, ecran, &posexit1);
SDL_BlitSurface(texte, NULL, ecran, &text);
SDL_BlitSurface(texte2, NULL, ecran, &text2);
i++;

 SDL_Flip(ecran);//tfrgh el cache 
if(i>50){i=1;}


if (curseur==1){SDL_BlitSurface(play2, NULL, ecran, &posplay2);SDL_BlitSurface(texte3, NULL, ecran, &text3);
 curseurr=0;}
if (curseur==2){SDL_BlitSurface(setting2, NULL, ecran, &possetting2);SDL_BlitSurface(texte4, NULL, ecran, &text4);
 curseurr=0;}
   
if (curseur==4){SDL_BlitSurface(exit2, NULL, ecran, &posexit2);SDL_BlitSurface(texte5, NULL, ecran, &text5);
 curseurr=0;}

SDL_Flip(ecran);

while (SDL_PollEvent(&event))
       {//while event
 switch(event.type)
        {//switch event
            case SDL_QUIT:
		{// case sdl quit
            run = 0;
		}
case SDL_MOUSEMOTION:
{//SDL_MOUSEMOTION
            	if ((event.motion.x>posplay1.x )&&(event.motion.x<posplay1.x+posplay1.w)&&(event.motion.y>posplay1.y)&&(event.motion.y<posplay1.y+posplay1.h))
            	{//loading 2eme button start
            		curseur=1; Mix_PlayChannel(-1,click,0);
}
            	if ((event.motion.x>possetting1.x)&&(event.motion.x<possetting1.x+possetting1.w)&&(event.motion.y>possetting1.y)&&(event.motion.y<possetting1.y+possetting1.h))
            	{
            		curseur=2;Mix_PlayChannel(-1,click,0);
}
            	if ((event.motion.x>posexit1.x)&&(event.motion.x<posexit1.x+posexit1.w)&&(event.motion.y>posexit1.y)&&(event.motion.y<posexit1.y+posexit1.h))
            	{
            		curseur=4;Mix_PlayChannel(-1,click,0);

            	}

}
case SDL_KEYDOWN://manwoula deja bel clavier
                {
if (event.key.keysym.sym==SDLK_DOWN)
{
if (c==1){curseurr=1;c++;Mix_PlayChannel(-1,click,0);}
else if (c==2){curseurr=2;c++;Mix_PlayChannel(-1,click,0);}
else if (c==3){curseurr=3;c++;Mix_PlayChannel(-1,click,0);}	
else if (c==4){curseurr=4;c++;Mix_PlayChannel(-1,click,0);}	
if(c>4){c=1;}
}
if (event.key.keysym.sym==SDLK_UP)
{
if (c1==4){curseurr=4;c1--;Mix_PlayChannel(-1,click,0);}
else if (c1==3){curseurr=3;c1--;Mix_PlayChannel(-1,click,0);}
else if (c1==2){curseurr=2;c1--;Mix_PlayChannel(-1,click,0);}
else if (c1==1){curseurr=1;c1--;Mix_PlayChannel(-1,click,0);}
if(c1<1){c1=4;}
}

case SDL_MOUSEBUTTONUP://manwoula bel sourie 
{
if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur==4)){// ki tenzel al exit yokhrej
       run=0;
}
           	
SDL_Flip(ecran);

if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur==1))
{
y=0;
while(y<743){
sprintf(menu,"cine/%d.jpg",y);
cinematique[y]=IMG_Load(menu); 
SDL_BlitSurface(cinematique[y],NULL,ecran,&posbackground);
//SDL_Delay(20);
y++;
SDL_Flip(ecran);
SDL_FreeSurface(cinematique[y]);// tab3a el play 
}
}

if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur==2))//condtion pour ouvrir les options
{
//boucle option(settings)
while(x==2){
SDL_BlitSurface(Menu_anime[i],NULL,ecran,&posbackground);
SDL_Delay(150);
				     
SDL_BlitSurface(son, NULL, ecran, &posson);
SDL_BlitSurface(on1, NULL, ecran, &on);
SDL_BlitSurface(of1, NULL, ecran, &of);
SDL_BlitSurface(back, NULL, ecran, &posback);
SDL_BlitSurface(joystic, NULL, ecran, &posjoystic);
SDL_BlitSurface(souris, NULL, ecran, &possouris);
SDL_BlitSurface(clavier, NULL, ecran, &posclavier);
SDL_BlitSurface(image12, NULL, ecran, &posfullscreen);
SDL_BlitSurface(image13, NULL, ecran, &posnormalesize);
SDL_BlitSurface(screen_size, NULL, ecran, &posscreen_size);
SDL_BlitSurface(texte1, NULL, ecran, &text1);
SDL_BlitSurface(image14, NULL, ecran, &posimage14);
SDL_BlitSurface(image15, NULL, ecran, &posimage15);

i++;
SDL_Flip(ecran);


if(i>50){i=1;}
while (SDL_PollEvent(&event))
       {//while event
 switch(event.type)
        {case SDL_MOUSEMOTION:
if ((event.motion.x>on.x )&&(event.motion.x<on.x+on.w)&&(event.motion.y>on.y)&&(event.motion.y<on.y+on.h))
{curseur2=1;Mix_PlayChannel(-1,click,0);
}
if ((event.motion.x>of.x )&&(event.motion.x<of.x+of.w)&&(event.motion.y>of.y)&&(event.motion.y<of.y+of.h))
{curseur2=2;Mix_PlayChannel(-1,click,0);}
if ((event.motion.x>posjoystic.x )&&(event.motion.x<posjoystic.x+posjoystic.w)&&(event.motion.y>posjoystic.y)&&(event.motion.y<posjoystic.y+posjoystic.h))
{curseur2=4;Mix_PlayChannel(-1,click,0);}
if ((event.motion.x>posclavier.x )&&(event.motion.x<posclavier.x+posclavier.w)&&(event.motion.y>posclavier.y)&&(event.motion.y<posclavier.y+posclavier.h))
{curseur2=5;Mix_PlayChannel(-1,click,0);}
if ((event.motion.x>possouris.x )&&(event.motion.x<possouris.x+possouris.w)&&(event.motion.y>possouris.y)&&(event.motion.y<possouris.y+possouris.h))
{curseur2=6;Mix_PlayChannel(-1,click,0);}
if ((event.motion.x>posback.x )&&(event.motion.x<posback.x+posback.w)&&(event.motion.y>posback.y)&&(event.motion.y<posback.y+posback.h))
{curseur2=3;Mix_PlayChannel(-1,click,0);}


case SDL_MOUSEBUTTONUP:
if ((event.button.x>posfullscreen.x && event.button.x<posfullscreen.x+posfullscreen.w && event.button.y>posfullscreen.y && event.button.y<posfullscreen.y+posfullscreen.h)&&(event.button.button == SDL_BUTTON_LEFT))
                   {
                            putenv("SDL_VIDEO_CENTERED=1");
                            ecran = SDL_SetVideoMode(1280,800, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
                            Mix_PlayChannel(-1,click,0);
                            SDL_Flip(ecran);
                   }

                        else if ((event.button.x>posnormalesize.x && event.button.x<posnormalesize.x+posnormalesize.w && event.button.y>posnormalesize.y && event.button.y<posnormalesize.y+posnormalesize.h) && (event.button.button == SDL_BUTTON_LEFT))
                        {
                            putenv("SDL_VIDEO_CENTERED=1");
                            ecran = SDL_SetVideoMode(1000,600, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
                            Mix_PlayChannel(-1,click,0);
                            SDL_Flip(ecran);

                        }               
 if ((event.button.x>posimage15.x && event.button.x<posimage15.x+posimage15.w && event.button.y>posimage15.y && event.button.y<posimage15.y+posimage15.h)&& (event.button.button == SDL_BUTTON_LEFT))
			{ 
			   
                         posimage15.x+=event.motion.xrel;
			  v+=event.motion.xrel;
			  Mix_VolumeMusic(v);
			      if (posimage15.x<=405)	
				   posimage15.x=405;
			      else if (posimage15.x>=525)	
				         posimage15.x=525;}
				
if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur2==3)){x=0;}

if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur2==1)){Mix_ResumeMusic();//resume music
                                                             SDL_BlitSurface(on2, NULL, ecran, &on);
                                                             SDL_Flip(ecran);
                                                            }
if ((event.button.button == SDL_BUTTON_LEFT)&&(curseur2==2)){ Mix_PauseMusic();//pausemusic
                                                              SDL_BlitSurface(texte6, NULL, ecran, &text6);
                                                              SDL_BlitSurface(of2, NULL, ecran, &of);
                                                              SDL_Flip(ecran);
                                                            }
}
}

if (curseur2==4){SDL_BlitSurface(joystic2, NULL, ecran, &posjoystic);SDL_BlitSurface(textemanette, NULL, ecran, &textmanette);
SDL_Flip(ecran); }
if (curseur2==5){SDL_BlitSurface(clavier2, NULL, ecran, &posclavier);SDL_BlitSurface(texteclavier, NULL, ecran, &textclavier);
SDL_Flip(ecran); }
if (curseur2==6){SDL_BlitSurface(souris2, NULL, ecran, &possouris);SDL_BlitSurface(textesouris, NULL, ecran, &textsouris);
SDL_Flip(ecran); }

 }
  }   
SDL_Flip(ecran);     	
}
}
}
}
}
SDL_FreeSurface(background); /* On libère la surface */

SDL_FreeSurface(play);
SDL_FreeSurface(setting);
SDL_FreeSurface(exite);

 SDL_Quit();
TTF_CloseFont(police);
TTF_CloseFont(police1);

    return EXIT_SUCCESS;
}
