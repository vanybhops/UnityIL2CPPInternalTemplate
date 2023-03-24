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
            hook,
            hook->name, 
            hook->enabled
        );
    
}

void createButton(Hooks::Hook* hook, std::string name, bool toggle)
{
    if (ImGui::Checkbox(name.c_str(), &toggle))
        hook->enabled ? hook->Disable() : hook->Enable();
}