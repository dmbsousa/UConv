#ifndef FORMULES_INCLUDED
#define FORMULES_INCLUDED

#include <stdio.h>

/*Unidades de Massa*/

/*De [Unidade] para [Kg]*/
void Unit_Convert_Mass_Lb_to_Kg_Formula ();
void Unit_Convert_Mass_Slug_to_Kg_Formula ();
void Unit_Convert_Mass_Oz_to_Kg_Formula ();
void Unit_Convert_Mass_C_to_Kg_Formula ();

/*De [Kg] para [Unidade]*/
void Unit_Convert_Mass_Kg_to_Lb_Formula ();
void Unit_Convert_Mass_Kg_to_Slug_Formula ();
void Unit_Convert_Mass_Kg_to_Oz_Formula ();
void Unit_Convert_Mass_Kg_to_C_Formula ();

/*Unidades de Distância*/

/*De [Unidade] para [m]*/
void Unit_Convert_Distance_Ft_to_m_Formula ();
void Unit_Convert_Distance_Mile_to_m_Formula ();
void Unit_Convert_Distance_NMile_to_m_Formula ();
void Unit_Convert_Distance_In_to_m_Formula ();
void Unit_Convert_Distance_Yard_to_m_Formula ();

/*De [m] para [Unidade]*/
void Unit_Convert_Distance_m_to_Ft_Formula ();
void Unit_Convert_Distance_m_to_Mile_Formula ();
void Unit_Convert_Distance_m_to_NMile_Formula ();
void Unit_Convert_Distance_m_to_In_Formula ();
void Unit_Convert_Distance_m_to_Yard_Formula ();

/*Unidades de Volume*/

/*De [Unidade] para [l]*/
void Unit_Convert_Volume_UKGal_to_l_Formula ();
void Unit_Convert_Volume_USGal_to_l_Formula ();
void Unit_Convert_Volume_Cup_to_l_Formula ();
void Unit_Convert_Volume_UKPint_to_l_Formula ();
void Unit_Convert_Volume_UKFloz_to_l_Formula ();
void Unit_Convert_Volume_USPint_to_l_Formula ();
void Unit_Convert_Volume_USFloz_to_l_Formula ();

/*De [l] para [Unidade]*/
void Unit_Convert_Volume_l_to_UKGal_Formula ();
void Unit_Convert_Volume_l_to_USGal_Formula ();
void Unit_Convert_Volume_l_to_Cup_Formula ();
void Unit_Convert_Volume_l_to_UKPint_Formula ();
void Unit_Convert_Volume_l_to_UKFloz_Formula ();
void Unit_Convert_Volume_l_to_USPint_Formula ();
void Unit_Convert_Volume_l_to_USFloz_Formula ();

/*Unidades de Força*/

/*De [Unidade] para [N]*/
void Unit_Convert_Force_Lbf_to_N_Formula ();
void Unit_Convert_Force_Kgf_to_N_Formula ();
void Unit_Convert_Force_Dyne_to_N_Formula ();

/*De [N] para [Unidade]*/
void Unit_Convert_Force_N_to_Lbf_Formula ();
void Unit_Convert_Force_N_to_Kgf_Formula ();
void Unit_Convert_Force_N_to_Dyne_Formula ();

/*Unidades de Densidade (Massa Específica)*/

/*De [Unidade] para [kg/m3]*/
void Unit_Convert_Density_LbpFt3_to_kgpm3_Formula ();
void Unit_Convert_Density_SlugpFt3_to_kgpm3_Formula ();

/*De [kg/m3]/ para [Unidade]*/
void Unit_Convert_Density_kgpm3_to_LbpFt3_Formula ();
void Unit_Convert_Density_kgpm3_to_SlugpFt3_Formula ();

/*Unidades de Velocidade*/

/*De [Unidade] para [m/s]*/
void Unit_Convert_Speed_FtpMin_to_mps_Formula ();
void Unit_Convert_Speed_KmpH_to_mps_Formula ();
void Unit_Convert_Speed_Kt_to_mps_Formula ();
void Unit_Convert_Speed_MpH_to_mps_Formula ();

/*De [m/s] para [Unidade]*/
void Unit_Convert_Speed_mps_to_FtpMin_Formula ();
void Unit_Convert_Speed_mps_to_KmpH_Formula ();
void Unit_Convert_Speed_mps_to_Kt_Formula ();
void Unit_Convert_Speed_mps_to_MpH_Formula ();

/*Unidades de Pressão*/

/*De [Unidade] para [Pa]/[N/m2]*/
void Unit_Convert_Pressure_Bar_to_Pa_Formula ();
void Unit_Convert_Pressure_mBar_to_Pa_Formula ();
void Unit_Convert_Pressure_InH20_to_Pa_Formula ();
void Unit_Convert_Pressure_InHg_to_Pa_Formula ();
void Unit_Convert_Pressure_LbfpIn2_to_Pa_Formula ();
void Unit_Convert_Pressure_Atm_to_Pa_Formula ();

/*De [Pa]/[N/m2] para [Unidade]*/
void Unit_Convert_Pressure_Pa_to_Bar_Formula ();
void Unit_Convert_Pressure_Pa_to_mBar_Formula ();
void Unit_Convert_Pressure_Pa_to_InH20_Formula ();
void Unit_Convert_Pressure_Pa_to_InHg_Formula ();
void Unit_Convert_Pressure_Pa_to_LbfpIn2_Formula ();
void Unit_Convert_Pressure_Pa_to_Atm_Formula ();

/*Unidades de Frequência*/

/*De [Unidade] para [rad/s]*/
void Unit_Convert_Frequency_Hz_to_radps_Formula ();
void Unit_Convert_Frequency_rpm_to_radps_Formula ();

/*De [rad/s] para [Unidade]*/
void Unit_Convert_Frequency_radps_to_Hz_Formula ();
void Unit_Convert_Frequency_radps_to_rpm_Formula ();

/*Unidades de Energia*/

/*De [Unidade] para [J]*/
void Unit_Convert_Energy_FtLbF_to_J_Formula ();
void Unit_Convert_Energy_Wh_to_J_Formula ();
void Unit_Convert_Energy_Btu_to_J_Formula ();
void Unit_Convert_Energy_Cal_to_J_Formula ();

/*De [J] para [Unidade]*/
void Unit_Convert_Energy_J_to_FtLbF_Formula ();
void Unit_Convert_Energy_J_to_Wh_Formula ();
void Unit_Convert_Energy_J_to_Btu_Formula ();
void Unit_Convert_Energy_J_to_Cal_Formula ();

/*Unidades de Potência*/

/*De [Unidade] para [W]*/
void Unit_Convert_Power_Bhp_to_W_Formula ();
void Unit_Convert_Power_KCalph_to_W_Formula ();
void Unit_Convert_Power_CV_to_W_Formula ();

/*De [W] para [Unidade]*/
void Unit_Convert_Power_W_to_Bhp_Formula ();
void Unit_Convert_Power_W_to_KCalph_Formula ();
void Unit_Convert_Power_W_to_CV_Formula ();

/*Unidades de Temperatura*/

/*De [Unidade] para [K]*/
void Unit_Convert_Temperature_oC_to_K_Formula ();
void Unit_Convert_Temperature_oF_to_K_Formula ();
void Unit_Convert_Temperature_R_to_K_Formula ();

/*De [K] para [Unidade]*/
void Unit_Convert_Temperature_K_to_oC_Formula ();
void Unit_Convert_Temperature_K_to_oF_Formula ();
void Unit_Convert_Temperature_K_to_R_Formula ();


#endif