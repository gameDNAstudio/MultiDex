// MultiDex
// Created by Patryk Stepniewski & zompi.pl
// Copyright (c) 2014-2018 gameDNA. All Rights Reserved.

#pragma once

#include "ModuleManager.h"

class IMultiDex : public IModuleInterface
{
public:
	static inline IMultiDex& Get()
	{
		return FModuleManager::LoadModuleChecked< IMultiDex >("MultiDex");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("MultiDex");
	}
};
