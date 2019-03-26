#include <iostream>
#include <cstdlib>
#include "stos.h"

using namespace std;

stos::stos()
{ pierwszy = NULL;}

void stos::dodaj(float x)
{
       element *tmp = new element;
       tmp->dana=x;
       tmp->nast=pierwszy;
       pierwszy=tmp;

}

void stos::wypisz()
 {
     element *tmp=pierwszy;
     while(tmp!=NULL)
      { cout<<tmp->dana<<" ";
        tmp=tmp->nast;
      }

}

void stos::pom -> nast -> dana != xusun()
{
    element *tmp=pierwszy;
    pierwszy = tmp -> nast;
    delete tmp;
}

stos::~stos()
{
    while(pierwszy!=NULL)
        usun();
}

bool stos::jest(int x)
{
    element *tmp=pierwszy;
     while(tmp!=NULL)
      { if(tmp -> dana == x)
            return true;
        tmp=tmp->nast;
      }
    return false;
}

void stos::usel(int x)
{
   if(jest(x))
   {
        if(pierwszy -> dana == x)    usun();
        else
        {
            element *pom = pierwszy;
            while(pom -> nast -> dana != x) pom = pom -> nast;
            element *pom2 = pom -> nast;
            pom -> nast = pom2 -> nast;
            delete pom2;
        }
   }
}
