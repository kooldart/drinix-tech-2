// stdafx.cpp : source file that includes just the standard includes
// drinix tech 2.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

std::unique_ptr<dx::Planet> CurrentPlanet = nullptr;
std::vector<std::unique_ptr<dx::Planet>> AllPlanets;
bool Changed = false;

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
