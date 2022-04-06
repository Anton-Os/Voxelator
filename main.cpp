#include "Voxelator_App.hpp"

int main(int argc, char** argv){
    Voxelator_App app = Voxelator_App(argv[0], APP_OpenGL_4);
    
    app.run();
    return 0;
}