TTF_Font *police =NULL,*police1 =NULL;
SDL_Color CN={0,0,0};
SDL_Color couleurblanche = {255,255,255};
SDL_Color couleurblue = {20,20,255};
SDL_Color couleurRed = {255,0,0};
    SDL_Surface *ecran = NULL, *background = NULL, *play= NULL , *setting= NULL , *help= NULL , *exite=NULL,*play2=NULL,*setting2=NULL,*help2=NULL,*exit2=NULL,*texte=NULL,*texte1=NULL,*texte2=NULL,*textesouris=NULL,*texteclavier=NULL,*textemanette=NULL,*texte3=NULL,*texte4=NULL,*texte5=NULL,*texte6=NULL, *im1=NULL,*im2=NULL,*im3=NULL,*im4=NULL,*im5=NULL,*im6=NULL,*im7=NULL,*im8=NULL,*im9=NULL,*im10=NULL,*son=NULL,*on1=NULL,*on2=NULL,*of1=NULL,*of2=NULL,*back=NULL,*Menu_anime[266],*intro_[800],*intro2_[300],*cinematique[1000],*joystic=NULL,*clavier=NULL,*souris=NULL,*joystic2=NULL,*clavier2=NULL,*souris2=NULL,*image12=NULL,*image13=NULL,*screen_size=NULL,*image14=NULL,*image15=NULL;
    SDL_Rect posbackground,posplay1,possetting1,poshelp1,posexit1,posplay2,possetting2,poshelp2,posexit2,text,text1,text2,textsouris,textclavier,textmanette,text3,text4,text5,text6,on,of,posson,posback,posjoystic,posclavier,possouris,posfullscreen,posnormalesize,posscreen_size,posimage14,posimage15;
int run=1,state1=0,state2=0,state3=0,state4=0,c=1,c1=4,curseur=0,curseurr=0,x=2,i=2,curseur2=0,y=0,w=1,v=0;
char menu[40];
SDL_Event event;
int audio_rate = 38000;
	Uint16 audio_format = AUDIO_S16; /* 16-bit stereo */
	int audio_channels = 1;
	int audio_buffers = 4096;

