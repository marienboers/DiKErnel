#pragma once
class Calculator
{
public:
	/// <summary>
	/// Calculates the total natural stone revetment.
	/// </summary>
	/// <param name="initialDamage">The initial damage at the start of the calculation.</param>
	/// <param name="damageOverTime">The damage which occurs during the timespan of the calculation.</param>
	/// <returns>The total damage of natural stone revetment, a value between 0 and 1.</returns>
	static double DamageOfNaturalStoneRevetment(double initialDamage, double damageOverTime);

	/// <summary>
	/// Calculates the incremented damage of natural stone revetment.
	/// </summary>
	/// <returns>The incremented damage at the current time and place.</returns>
	static double IncrementDamageOfNaturalStoneRevetment();

	/// <summary>
	/// Calculates the hydraulic load on natural stone revetment.
	/// </summary>
	/// <param name="spectralWaveHeight">The spectral wave height [m] between ti-1 and ti.</param>
	/// <returns>The hydraulic load on natural stone revetment at the current time and place.</returns>
	static double HydraulicLoadOnNaturalStoneRevetment(double spectralWaveHeight);

	/// <summary>
	/// Calculates the heave side.
	/// </summary>
	/// <returns>The heave side, which is 0 or 1.</returns>
	static int HeavisideFunction(int theta);

	/// <summary>
	/// Calculates the surf similarity parameter.
	/// </summary>
	/// <param name="slopeAngle">The slope angle [�] at the current location.</param>
	/// <param name="spectralWaveHeight">The spectral wave height [m] between ti-1 and ti.</param>
	/// <param name="spectralWavePeriod">The spectral wave period [s] between ti-1 and ti.</param>
	/// <returns>The surf similarity parameter at the current time and place.</returns>
	static double SurfSimilarityParameter(double slopeAngle, double spectralWaveHeight, double spectralWavePeriod);

	/// <summary>
	/// Calculates the resistance of natural stone revetment.
	/// </summary>
	/// <param name="relativeDensity">The relative density [-] at the current location.</param>
	/// <param name="thicknessTopLayer">The thickness of the top layer [m] at the current location.</param>
	/// <returns>The resistance of natural stone revetment.</returns>
	static double ResistanceOfNaturalStoneRevetment(double relativeDensity, double thicknessTopLayer);

	/// <summary>
	/// Calculates the increment of degradation of natural stone revetment at the current time and location.
	/// </summary>
	/// <returns>The increment of degradation of natural stone revetment at the current time and location.</returns>
	static double IncrementDegradationOfNaturalStoneRevetment();

	/// <summary>
	/// Calculates the degradation of natural stone revetment.
	/// </summary>
	/// <param name="spectralWavePeriod">The spectral wave period [s] between ti-1 and ti.</param>
	/// <returns>The total degradation at the current time.</returns>
	static double DegradationOfNaturalStoneRevetment(double spectralWavePeriod);

	/// <summary>
	/// Calculates the elapsed time in this timestep.
	/// </summary>
	/// <param name="initialTime">The start of the timestep [s].</param>
	/// <param name="currentTime">The end of the timestep [s].</param>
	/// <returns>The elapsed time of the timestep.</returns>
	static double IncrementOfTime(double initialTime, double currentTime);

	/// <summary>
	/// Calculates the reference time degradation of natural stone revetment.
	/// </summary>
	/// <param name="spectralWavePeriod">The spectral wave period [s] between ti-1 and ti.</param>
	/// <returns>The surf similarity parameter at the current time and place.</returns>
	static double ReferenceTimeDegradationOfNaturalStoneRevetment(double spectralWavePeriod);

	/// <summary>
	/// Calculates the reference degradation of natural stone revetment.
	/// </summary>
	/// <returns>The reference degradation of natural stone revetment at the current time and place.</returns>
	static double ReferenceDegradationOfNaturalStoneRevetment();

	/// <summary>
	/// Calculates the wave angle impact of natural stone revetment.
	/// </summary>
	/// <param name="waveAngle">The incoming wave handle [�] relative to the normal line
	/// between ti-1 and ti.</param>
	/// <returns>The wave angle impact at the current time.</returns>
	static double WaveAngleImpactOnNaturalStoneRevetment(double waveAngle);
};