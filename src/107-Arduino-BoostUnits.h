/**
 * This software is distributed under the terms of the MIT License.
 * Copyright (c) 2021 LXRobotics.
 * Author: Alexander Entinger <alexander.entinger@lxrobotics.com>
 * Contributors: https://github.com/107-systems/107-Arduino-BoostUnits/graphs/contributors.
 */

#ifndef _107_ARDUINO_BOOST_UNITS_H_
#define _107_ARDUINO_BOOST_UNITS_H_

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include "boost/units/unit.hpp"
#include "boost/units/quantity.hpp"

#include "boost/units/systems/si.hpp"

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

namespace drone
{

namespace unit
{

/**************************************************************************************
 * TYPEDEF
 **************************************************************************************/

typedef boost::units::quantity<boost::units::si::absorbed_dose> AbsorbedDose;
using boost::units::si::gray;
using boost::units::si::grays;
typedef boost::units::quantity<boost::units::si::angular_velocity> AngularVelocity;
using boost::units::si::radian_per_second;
using boost::units::si::radians_per_second;
typedef boost::units::quantity<boost::units::si::conductance> Conductance;
using boost::units::si::siemen;
using boost::units::si::siemens;
using boost::units::si::mho;
using boost::units::si::mhos;
typedef boost::units::quantity<boost::units::si::electric_potential> ElectricPotential;
using boost::units::si::volt;
using boost::units::si::volts;
typedef boost::units::quantity<boost::units::si::magnetic_flux> MagneticFlux;
using boost::units::si::weber;
using boost::units::si::webers;
typedef boost::units::quantity<boost::units::si::plane_angle> PlaneAngle;
using boost::units::si::radian;
using boost::units::si::radians;
typedef boost::units::quantity<boost::units::si::solid_angle> SolidAngle;
using boost::units::si::steradian;
using boost::units::si::steradians;
typedef boost::units::quantity<boost::units::si::volume> Volume;
using boost::units::si::cubic_meter;
using boost::units::si::cubic_meters;
typedef boost::units::quantity<boost::units::si::acceleration> Acceleration;
using boost::units::si::meter_per_second_squared;
using boost::units::si::meters_per_second_squared;
typedef boost::units::quantity<boost::units::si::area> Area;
using boost::units::si::square_meter;
using boost::units::si::square_meters;
typedef boost::units::quantity<boost::units::si::conductivity> Conductivity;
typedef boost::units::quantity<boost::units::si::energy> Energy;
using boost::units::si::joule;
using boost::units::si::joules;
typedef boost::units::quantity<boost::units::si::kinematic_viscosity> KinematicViscosity;
typedef boost::units::quantity<boost::units::si::mass_density> MassDensity;
using boost::units::si::kilogram_per_cubic_meter;
using boost::units::si::kilograms_per_cubic_meter;
typedef boost::units::quantity<boost::units::si::power> Power;
using boost::units::si::watt;
using boost::units::si::watts;
typedef boost::units::quantity<boost::units::si::surface_density> SurfaceDensity;
using boost::units::si::kilogram_per_square_meter;
using boost::units::si::kilograms_per_square_meter;
typedef boost::units::quantity<boost::units::si::wavenumber> Wavenumber;
using boost::units::si::reciprocal_meter;
using boost::units::si::reciprocal_meters;
typedef boost::units::quantity<boost::units::si::action> Action;
typedef boost::units::quantity<boost::units::si::current> Current;
using boost::units::si::ampere;
using boost::units::si::amperes;
typedef boost::units::quantity<boost::units::si::force> Force;
using boost::units::si::newton;
using boost::units::si::newtons;
typedef boost::units::quantity<boost::units::si::length> Length;
using boost::units::si::meter;
using boost::units::si::meters;
typedef boost::units::quantity<boost::units::si::mass> Mass;
using boost::units::si::kilogram;
using boost::units::si::kilograms;
typedef boost::units::quantity<boost::units::si::surface_tension> SurfaceTension;
using boost::units::si::newton_per_meter;
using boost::units::si::newtons_per_meter;
typedef boost::units::quantity<boost::units::si::activity> Activity;
using boost::units::si::becquerel;
using boost::units::si::becquerels;
typedef boost::units::quantity<boost::units::si::capacitance> Capacitance;
using boost::units::si::farad;
using boost::units::si::farads;
typedef boost::units::quantity<boost::units::si::dimensionless> Dimensionless;
typedef boost::units::quantity<boost::units::si::frequency> Frequency;
using boost::units::si::hertz;
typedef boost::units::quantity<boost::units::si::luminous_flux> LuminousFlux;
using boost::units::si::lumen;
using boost::units::si::lumens;
typedef boost::units::quantity<boost::units::si::moment_of_inertia> MomentOfInertia;
typedef boost::units::quantity<boost::units::si::pressure> Pressure;
using boost::units::si::pascal;
using boost::units::si::pascals;
typedef boost::units::quantity<boost::units::si::temperature> Temperature;
using boost::units::si::kelvin;
using boost::units::si::kelvins;
typedef boost::units::quantity<boost::units::si::amount> Amount;
using boost::units::si::mole;
using boost::units::si::moles;
typedef boost::units::quantity<boost::units::si::catalytic_activity> CatalyticActivity;
using boost::units::si::katal;
using boost::units::si::katals;
typedef boost::units::quantity<boost::units::si::dose_equivalent> DoseEquivalent;
using boost::units::si::sievert;
using boost::units::si::sieverts;
typedef boost::units::quantity<boost::units::si::illuminance> Illuminance;
using boost::units::si::lux;
typedef boost::units::quantity<boost::units::si::luminous_intensity> LuminousIntensity;
using boost::units::si::candela;
using boost::units::si::candelas;
typedef boost::units::quantity<boost::units::si::momentum> Momentum;
typedef boost::units::quantity<boost::units::si::reluctance> Reluctance;
typedef boost::units::quantity<boost::units::si::time> Time;
using boost::units::si::second;
using boost::units::si::seconds;
typedef boost::units::quantity<boost::units::si::angular_acceleration> AngularAcceleration;
typedef boost::units::quantity<boost::units::si::dynamic_viscosity> DynamicViscosity;
typedef boost::units::quantity<boost::units::si::impedance> Impedance;
typedef boost::units::quantity<boost::units::si::magnetic_field_intensity> MagneticFieldIntensity;
typedef boost::units::quantity<boost::units::si::permeability> Permeability;
typedef boost::units::quantity<boost::units::si::resistance> Resistance;
using boost::units::si::ohm;
using boost::units::si::ohms;
typedef boost::units::quantity<boost::units::si::torque> Torque;
using boost::units::si::newton_meter;
using boost::units::si::newton_meters;
typedef boost::units::quantity<boost::units::si::angular_momentum> AngularMomentum;
typedef boost::units::quantity<boost::units::si::electric_charge> ElectricCharge;
using boost::units::si::coulomb;
using boost::units::si::coulombs;
typedef boost::units::quantity<boost::units::si::inductance> Inductance;
using boost::units::si::henry;
using boost::units::si::henrys;
typedef boost::units::quantity<boost::units::si::magnetic_flux_density> MagneticFluxDensity;
using boost::units::si::tesla;
using boost::units::si::teslas;
typedef boost::units::quantity<boost::units::si::permittivity> Permittivity;
typedef boost::units::quantity<boost::units::si::resistivity> Resistivity;
typedef boost::units::quantity<boost::units::si::velocity> Velocity;
using boost::units::si::meter_per_second;
using boost::units::si::meters_per_second;

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

} /* unit */
} /* drone */

#endif /* _107_ARDUINO_BOOST_UNITS_H_ */
