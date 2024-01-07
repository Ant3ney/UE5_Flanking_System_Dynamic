// Fill out your copyright notice in the Description page of Project Settings.


#include "NavClassAccessor.h"


NavClassAccessor::NavClassAccessor()
{
}

NavClassAccessor::~NavClassAccessor()
{
}

TArray<TSubclassOf<UNavArea>> NavClassAccessor::GetFlankAreaClasses()
{
    TArray<TSubclassOf<UNavArea>> NavAreaClasses;
    NavAreaClasses.Add(UFlankArea0::StaticClass());
    NavAreaClasses.Add(UFlankArea1::StaticClass());
    NavAreaClasses.Add(UFlankArea2::StaticClass());
    NavAreaClasses.Add(UFlankArea3::StaticClass());
    NavAreaClasses.Add(UFlankArea4::StaticClass());
    NavAreaClasses.Add(UFlankArea5::StaticClass());
    NavAreaClasses.Add(UFlankArea6::StaticClass());
    NavAreaClasses.Add(UFlankArea7::StaticClass());
    NavAreaClasses.Add(UFlankArea8::StaticClass());
    NavAreaClasses.Add(UFlankArea9::StaticClass());
    NavAreaClasses.Add(UFlankArea10::StaticClass());
    NavAreaClasses.Add(UFlankArea11::StaticClass());
    NavAreaClasses.Add(UFlankArea12::StaticClass());
    NavAreaClasses.Add(UFlankArea13::StaticClass());
    NavAreaClasses.Add(UFlankArea14::StaticClass());
    NavAreaClasses.Add(UFlankArea15::StaticClass());
    NavAreaClasses.Add(UFlankArea16::StaticClass());
    NavAreaClasses.Add(UFlankArea17::StaticClass());
    NavAreaClasses.Add(UFlankArea18::StaticClass());
    NavAreaClasses.Add(UFlankArea19::StaticClass());
    NavAreaClasses.Add(UFlankArea20::StaticClass());
    NavAreaClasses.Add(UFlankArea21::StaticClass());
    NavAreaClasses.Add(UFlankArea22::StaticClass());
    NavAreaClasses.Add(UFlankArea23::StaticClass());
    NavAreaClasses.Add(UFlankArea24::StaticClass());
    NavAreaClasses.Add(UFlankArea25::StaticClass());
    NavAreaClasses.Add(UFlankArea26::StaticClass());
    NavAreaClasses.Add(UFlankArea27::StaticClass());
    NavAreaClasses.Add(UFlankArea28::StaticClass());
    NavAreaClasses.Add(UFlankArea29::StaticClass());
    NavAreaClasses.Add(UFlankArea30::StaticClass());

    return NavAreaClasses;
}

UFlankQueryFilter* NavClassAccessor::GetFlankQueryFilter()
{
    return NewObject<UFlankQueryFilter>();
}