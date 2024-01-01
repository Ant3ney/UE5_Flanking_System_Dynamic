// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomMath.h"

TArray<FVector> UCustomMath::CalculatePointsBetweenLocations(const FVector& LocationA, const FVector& LocationB, float Distance)
{
    TArray<FVector> Points;
    FVector Direction = LocationB - LocationA;
    float TotalDistance = Direction.Size();
    Direction.Normalize();

    int NumberOfPoints = FMath::FloorToInt(TotalDistance / Distance);
    Points.Add(LocationA); // Add the starting point

    for (int i = 1; i <= NumberOfPoints; ++i) {
        FVector CurrentLocation = LocationA + Direction * (Distance * i);
        Points.Add(CurrentLocation);
    }

    if (!Points.Contains(LocationB)) {
        Points.Add(LocationB);
    }

    return Points;
}

float UCustomMath::CalculateDistanceBetweenPoints(const FVector& StartPoint, const FVector& EndPoint)
{
    return FVector::Dist(StartPoint, EndPoint);
}

TArray<FArcPoint> UCustomMath::GetPointsOnArc(const FVector& PlayerLocation, float Rotation, float TotalArcAngle, float Magnitude)
{
    TArray<FArcPoint> ArcPoints;

    float RotationRadians = FMath::DegreesToRadians(Rotation);
    float TotalArcAngleRadians = FMath::DegreesToRadians(TotalArcAngle);

    float ArcLength = Magnitude * TotalArcAngleRadians;
    //int32 NumPoints = FMath::CeilToInt(ArcLength / 50.0f);
    int32 NumPoints = 60;

    for (int32 i = 0; i <= NumPoints; ++i)
    {
        float Angle = RotationRadians + (TotalArcAngleRadians * i) / NumPoints;
        FArcPoint ArcPoint;
        ArcPoint.Point = PlayerLocation + Magnitude * FVector(FMath::Cos(Angle), FMath::Sin(Angle), 0.0f);
        ArcPoint.IndexFromCenter = i;

        ArcPoints.Add(ArcPoint);
    }

    return ArcPoints;
}

int UCustomMath::GetCentralizedIndex(int flatIndex, int total) {
    TArray<FIntPoint> Result;
    bool isEven = total % 2 == 0;
    int32 MidPoint = total / 2;

    for (int32 i = 1; i <= total; ++i)
    {
        int32 Distance;
        if (isEven)
        {
            Distance = FMath::Max(FMath::Abs(i - MidPoint), FMath::Abs(i - (MidPoint + 1)));
        }
        else
        {
            Distance = FMath::Abs(i - (MidPoint + 1));
        }
        Result.Add(FIntPoint(i, Distance));
    }

    for (const FIntPoint& Point : Result)
    {
        if (Point.X == flatIndex)
        {
            return Point.Y;
        }
    }

    return -1;
}