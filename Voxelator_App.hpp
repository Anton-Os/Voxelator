#include "Topl_App.hpp"

struct Voxelator_App : public Topl_App {
    Voxelator_App(const char* execPath, APP_Backend b)
        : Topl_App(execPath, "Voxelator", b){}

    void init() override;
	void loop(unsigned long frame) override;

    Topl_Scene scene_main;
    Topl_Pipeline* pipeline;
}