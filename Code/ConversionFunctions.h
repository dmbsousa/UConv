#ifndef CONVERSION_FUNCTIONS_INCLUDED
#define CONVERSION_FUNCTIONS_INCLUDED

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define INFINITY 99999999
#define PI 3.142857

/*Funções de conversão de unidades*/

/*Unidades de Massa*/

/*De [Unidade] para [Kg]*/
float Unit_Convert_Mass_Lb_to_Kg (float mass);
float Unit_Convert_Mass_Slug_to_Kg (float mass);
float Unit_Convert_Mass_Oz_to_Kg (float mass);
float Unit_Convert_Mass_C_to_Kg (float mass);

/*De [Kg] para [Unidade]*/
float Unit_Convert_Mass_Kg_to_Lb (float mass);
float Unit_Convert_Mass_Kg_to_Slug (float mass);
float Unit_Convert_Mass_Kg_to_Oz (float mass);
float Unit_Convert_Mass_Kg_to_C (float mass);

/*Unidades de Distância*/

/*De [Unidade] para [m]*/
float Unit_Convert_Distance_Ft_to_m (float distance);
float Unit_Convert_Distance_Mile_to_m (float distance);
float Unit_Convert_Distance_NMile_to_m (float distance);
float Unit_Convert_Distance_In_to_m (float distance);
float Unit_Convert_Distance_Yard_to_m (float distance);

/*De [m] para [Unidade]*/
float Unit_Convert_Distance_m_to_Ft (float distance);
float Unit_Convert_Distance_m_to_Mile (float distance);
float Unit_Convert_Distance_m_to_NMile (float distance);
float Unit_Convert_Distance_m_to_In (float distance);
float Unit_Convert_Distance_m_to_Yard (float distance);

/*Unidades de Volume*/

/*De [Unidade] para [l]*/
float Unit_Convert_Volume_UKGal_to_l (float volume);
float Unit_Convert_Volume_USGal_to_l (float volume);
float Unit_Convert_Volume_Cup_to_l (float volume);
float Unit_Convert_Volume_UKPint_to_l (float volume);
float Unit_Convert_Volume_UKFloz_to_l (float volume);
float Unit_Convert_Volume_USPint_to_l (float volume);
float Unit_Convert_Volume_USFloz_to_l (float volume);

/*De [l] para [Unidade]*/
float Unit_Convert_Volume_l_to_UKGal (float volume);
float Unit_Convert_Volume_l_to_USGal (float volume);
float Unit_Convert_Volume_l_to_Cup (float volume);
float Unit_Convert_Volume_l_to_UKPint (float volume);
float Unit_Convert_Volume_l_to_UKFloz (float volume);
float Unit_Convert_Volume_l_to_USPint (float volume);
float Unit_Convert_Volume_l_to_USFloz (float volume);

/*Unidades de Força*/

/*De [Unidade] para [N]*/

float Unit_Convert_Force_Lbf_to_N (float force);
float Unit_Convert_Force_Kgf_to_N (float force);
float Unit_Convert_Force_Dyne_to_N (float force);

/*De [N] para [Unidade]*/

float Unit_Convert_Force_N_to_Lbf (float force);
float Unit_Convert_Force_N_to_Kgf (float force);
float Unit_Convert_Force_N_to_Dyne (float force);

/*Unidades de Densidade (Massa Específica)*/

/*De [Unidade] para [kg/m3]*/

float Unit_Convert_Density_LbpFt3_to_kgpm3 (float density);
float Unit_Convert_Density_SlugpFt3_to_kgpm3 (float density);

/*De [kg/m3]/ para [Unidade]*/

float Unit_Convert_Density_kgpm3_to_LbpFt3 (float density);
float Unit_Convert_Density_kgpm3_to_SlugpFt3 (float density);

/*Unidades de Velocidade*/

/*De [Unidade] para [m/s]*/

float Unit_Convert_Speed_FtpMin_to_mps (float speed);
float Unit_Convert_Speed_KmpH_to_mps (float speed);
float Unit_Convert_Speed_Kt_to_mps (float speed);
float Unit_Convert_Speed_MpH_to_mps (float speed);

/*De [m/s] para [Unidade]*/

float Unit_Convert_Speed_mps_to_FtpMin (float speed);
float Unit_Convert_Speed_mps_to_KmpH (float speed);
float Unit_Convert_Speed_mps_to_Kt (float speed);
float Unit_Convert_Speed_mps_to_MpH (float speed);

/*Unidades de Pressão*/

/*De [Unidade] para [Pa]/[N/m2]*/

float Unit_Convert_Pressure_Bar_to_Pa (float pressure);
float Unit_Convert_Pressure_mBar_to_Pa (float pressure);
float Unit_Convert_Pressure_InH20_to_Pa (float pressure);
float Unit_Convert_Pressure_InHg_to_Pa (float pressure);
float Unit_Convert_Pressure_LbfpIn2_to_Pa (float pressure);
float Unit_Convert_Pressure_Atm_to_Pa (float pressure);

/*De [Pa]/[N/m2] para [Unidade]*/

float Unit_Convert_Pressure_Pa_to_Bar (float pressure);
float Unit_Convert_Pressure_Pa_to_mBar (float pressure);
float Unit_Convert_Pressure_Pa_to_InH20 (float pressure);
float Unit_Convert_Pressure_Pa_to_InHg (float pressure);
float Unit_Convert_Pressure_Pa_to_LbfpIn2 (float pressure);
float Unit_Convert_Pressure_Pa_to_Atm (float pressure);

/*Unidades de Frequência*/

/*De [Unidade] para [rad/s]*/

float Unit_Convert_Frequency_Hz_to_radps (float frequency);
float Unit_Convert_Frequency_rpm_to_radps (float frequency);

/*De [rad/s] para [Unidade]*/

float Unit_Convert_Frequency_radps_to_Hz (float frequency);
float Unit_Convert_Frequency_radps_to_rpm (float frequency);

/*Unidades de Energia*/

/*De [Unidade] para [J]*/

float Unit_Convert_Energy_FtLbF_to_J (float energy);
float Unit_Convert_Energy_Wh_to_J (float energy);
float Unit_Convert_Energy_Btu_to_J (float energy);
float Unit_Convert_Energy_Cal_to_J (float energy);

/*De [J] para [Unidade]*/

float Unit_Convert_Energy_J_to_FtLbF (float energy);
float Unit_Convert_Energy_J_to_Wh (float energy);
float Unit_Convert_Energy_J_to_Btu (float energy);
float Unit_Convert_Energy_J_to_Cal (float energy);

/*Unidades de Potência*/

/*De [Unidade] para [W]*/

float Unit_Convert_Power_Bhp_to_W (float power);
float Unit_Convert_Power_KCalph_to_W (float power);
float Unit_Convert_Power_CV_to_W (float power);

/*De [W] para [Unidade]*/

float Unit_Convert_Power_W_to_Bhp (float power);
float Unit_Convert_Power_W_to_KCalph (float power);
float Unit_Convert_Power_W_to_CV (float power);

/*Unidades de Temperatura*/

/*De [Unidade] para [K]*/

float Unit_Convert_Temperature_oC_to_K (float temperature);
float Unit_Convert_Temperature_oF_to_K (float temperature);
float Unit_Convert_Temperature_R_to_K (float temperature);

/*De [K] para [Unidade]*/

float Unit_Convert_Temperature_K_to_oC (float temperature);
float Unit_Convert_Temperature_K_to_oF (float temperature);
float Unit_Convert_Temperature_K_to_R (float temperature);

/*Inverte Unidade*/

float Unit_Convert_Invert (float unit);

#endif