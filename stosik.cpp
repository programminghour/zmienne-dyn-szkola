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

void stos::usun()
{
    element *tmp=pierwszy;
    pierwszy = tmp -> nast;
    delete tmp;
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
