#pragma once

#include "../ext/imgui/imgui.h"
#include "hook.hpp"
#include "globals.hpp"
#include "config.hpp"
#include <vector>

// ADD RENDER LIB-SPECIFIC HOOK DECLARATIONS HERE

void InitMenu();
void Menu(bool);
void createButton(std::string, bool, Hooks::Hook*);