#include "EventSystem.h"
#include <iostream>
int main(){try{EventSystem app("../Data");app.run();}catch(const std::exception& e){std::cerr<<"Fatal error: "<<e.what()<<'\n';return 1;}return 0;}
