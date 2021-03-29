#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "ennemi.h"
enemy deplacement_aleatoire(enemy enemyy)
{ 
 if (enemyy.direction % 2 ==1)
 { 
  if (enemyy.posen.x<enemyy.position_initiale + enemyy.distance ) 
  {
  enemyy.posen.x+=10;  
   }
         else  
         {
          enemyy.direction++; 
          } 
          
          }
        else if (enemyy.direction % 2 ==0)
              { 
             if (enemyy.posen.x>enemyy.position_initiale ) 
              {
              enemyy.posen.x-=10; 
               }
         else  { 
         enemyy.direction++;
          } 
              }  
   return (enemyy) ;   
}

enemy intialisation_enemy(enemy enemyy)
{
enemyy.posen.x="...." ;enemyy.posen.y="...." ; // X et Y 
enemyy.distance="...";
enemyy.position_initiale="....";
enemyy.direction = 1;
enemyy.en=IMG_Load("ennemi.png");
 return (enemyy) ; 
}

personnage initialisation_perso(personnage perso)
{
perso.posperso.x=400;perso.posperso.y=637; //X et Y 
perso.perso=IMG_Load("pers.png");
perso.h=61;
perso.w=64;
 return (perso) ; 
}
enemy initialisation_box(enemy obstacle )
{
obstacle.posen.x="...." ;obstacle.posen.y="..." ; //X et Y 

obstacle.en=IMG_Load("feu.png");
 return (nar) ; 
}



void afficher (enemy enemy1,SDL_Surface *ecran)
{SDL_BlitSurface( enemy1.en,NULL,ecran,&enemy1.posen);}

void afficher_nar (enemy nar,SDL_Surface *ecran)
{
  SDL_BlitSurface( nar.en,NULL,ecran,&nar.posen);
}

void afficher_perso (personnage perso ,enemy nar,SDL_Surface *ecran,int *d)
{
  if ((nar.posen.x==perso.posperso.x))
    *d=2;
 if (*d!=2){SDL_BlitSurface( perso.perso,NULL,ecran,&perso.posperso);}
}




int callenemy(personnage per, enemy en)
{

    if ((per.posperso.x +per.perso->w > en.posen.x) && (per.posperso.x < en.posen.x ) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}




