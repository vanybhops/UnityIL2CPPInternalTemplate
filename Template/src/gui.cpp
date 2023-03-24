#include "../hdr/gui.hpp"

void InitMenu()
{
    // LIB SPECIFIC CODE
}

void Menu(bool render)
{
    // YOUR MENU HERE
    ImGui::ShowDemoWindow();
    if (Config::bButtons)                                  //CHECKS FOR CONFIG IF AUTOMATIC CREATION OF BUTTONS IS ENABLED
    for (Hooks::Hook* hook : Globals::HookManager.gHooks)  //CREATE A BUTTON FOR EACH HOOK
        createButton(
            hook->name, 
            hook->enabled,
            hook
        );
    
}

void createButton(std::string name, bool toggle, Hooks::Hook* hook) 
{
    if (ImGui::Checkbox(name.c_str(), &toggle))
        hook->enabled ? hook->Disable() : hook->Enable();
}