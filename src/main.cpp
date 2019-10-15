#include<iostream>
#include <math.h>
#include <stdlib.h>

#include "SDL2/SDL.h"
#include "Screen.h"

using namespace Graphics;
using namespace std;

int main() {
  Screen screen;

  if(screen.init() == false){
    cout << "Error initializing SDL" << endl;
  }

  while(true){



    // check for events
    if(!screen.processEvents()){
      break;
    }
  }

  screen.close();
  
  return 0;
}