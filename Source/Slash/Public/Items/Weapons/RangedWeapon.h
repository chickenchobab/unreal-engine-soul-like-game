// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/Weapon.h"
#include "RangedWeapon.generated.h"

class UProjectileMovementComponent;
class UParticleSystemComponent;

/**
 * 
 */
UCLASS()
class SLASH_API ARangedWeapon : public AWeapon
{
	GENERATED_BODY()

public:
	ARangedWeapon();
	void ActivateProjectile(AActor* CombatTarget);
	
protected:
  virtual void OnBoxOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult) override;
  void RotateTowardsTarget(AActor* CombatTarget);

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* TrailParticles;
};

