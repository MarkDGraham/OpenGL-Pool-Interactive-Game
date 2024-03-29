#include <iostream>

#include "engine.h"


int main(int argc, char **argv)
{
  // Start an engine and run it then cleanup after
  Engine *engine = new Engine("Hi Score", 1200, 800);
  if(!engine->Initialize())
  {
    printf("The engine failed to start.\n");
    delete engine;
    engine = NULL;
    return 1;
  }
  engine->Run();
  delete engine;
  engine = NULL;
  return 0;
}
