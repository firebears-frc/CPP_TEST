// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"
#include "Constants.h"

Shooter::Shooter() {
	turretMotor = rev::CANSparkMax(SHOOTER_SHOOTER_MOTOR_CAN_ID, rev::CANSparkMax::MotorType::kBrushless);
  turretMotor.RestoreFactoryDefaults();
  turretMotor.SetInverted(false);
}

void Shooter::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Shooter::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
