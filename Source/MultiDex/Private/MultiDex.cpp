// MultiDex
// Created by Patryk Stepniewski & zompi.pl
// Copyright (c) 2014-2018 gameDNA. All Rights Reserved.

#include "IMultiDex.h"
#include "EngineMinimal.h"
#include "CoreMinimal.h"

#define LOCTEXT_NAMESPACE "MultiDex"

class FMultiDex : public IMultiDex
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FMultiDex, MultiDex)

// Startup Module
void FMultiDex::StartupModule()
{
}

// Shutdown Module
void FMultiDex::ShutdownModule()
{
}


#undef LOCTEXT_NAMESPACE
