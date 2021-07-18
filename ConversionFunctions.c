/*Ficheiro header incluído*/
#include "ConversionFunctions.h"

/*Funções de conversão de unidades*/

/*Unidades de Massa*/

/*De [Unidade] para [Kg]*/
float Unit_Convert_Mass_Lb_to_Kg (float mass){
	float fct = 0.45359237;
	return(mass*fct);
}

float Unit_Convert_Mass_Slug_to_Kg (float mass){
	float fct = 14.593903;
	return(mass*fct);
}

float Unit_Convert_Mass_Oz_to_Kg (float mass){
	float fct = 0.028349523125;
	return(mass*fct);
}

float Unit_Convert_Mass_C_to_Kg (float mass){
	float fct = 0.0002;
	return(mass*fct);
}

/*De [Kg] para [Unidade]*/
float Unit_Convert_Mass_Kg_to_Lb (float mass){
	float fct = 0.45359237;
	return(mass/fct);
}

float Unit_Convert_Mass_Kg_to_Slug (float mass){
	float fct = 14.593903;
	return(mass/fct);
}

float Unit_Convert_Mass_Kg_to_Oz (float mass){
	float fct = 0.028349523125;
	return(mass/fct);
}

float Unit_Convert_Mass_Kg_to_C (float mass){
	float fct = 0.0002;
	return(mass/fct);
}

/*Unidades de Distância*/

/*De [Unidade] para [m]*/

float Unit_Convert_Distance_Ft_to_m (float distance){
	float fct = 0.3048;
	return(distance*fct);
}

float Unit_Convert_Distance_Mile_to_m (float distance){
	float fct = 1609;
	return(distance*fct);
}

float Unit_Convert_Distance_NMile_to_m (float distance){
	float fct = 1852;
	return(distance*fct);
}

float Unit_Convert_Distance_In_to_m (float distance){
	float fct = 0.0254;
	return(distance*fct);
}

float Unit_Convert_Distance_Yard_to_m (float distance){
	float fct = 0.9144;
	return(distance*fct);
}

/*De [m] para [Unidade]*/

float Unit_Convert_Distance_m_to_Ft (float distance){
	float fct = 0.3048;
	return(distance/fct);
}

float Unit_Convert_Distance_m_to_Mile (float distance){
	float fct = 1609;
	return(distance/fct);
}

float Unit_Convert_Distance_m_to_NMile (float distance){
	float fct = 1852;
	return(distance/fct);
}

float Unit_Convert_Distance_m_to_In (float distance){
	float fct = 0.0254;
	return(distance/fct);
}

float Unit_Convert_Distance_m_to_Yard (float distance){
	float fct = 0.9144;
	return(distance/fct);
}

/*Unidades de Volume*/

/*De [Unidade] para [l]*/

float Unit_Convert_Volume_UKGal_to_l (float volume){
	float fct = 4.54609;
	return(volume*fct);
}

float Unit_Convert_Volume_USGal_to_l (float volume){
	float fct = 3.785411784;
	return(volume*fct);
}

float Unit_Convert_Volume_Cup_to_l (float volume){
	float fct = 0.240;
	return(volume*fct);
}

float Unit_Convert_Volume_UKPint_to_l (float volume){
	float fct = 0.56826125;
	return(volume*fct);
}

float Unit_Convert_Volume_UKFloz_to_l (float volume){
	float fct = 0.56826125/20;
	return(volume*fct);
}

float Unit_Convert_Volume_USPint_to_l (float volume){
	float fct = 0.473176473;
	return(volume*fct);
}

float Unit_Convert_Volume_USFloz_to_l (float volume){
	float fct = 0.473176473/16;
	return(volume*fct);
}

/*De [l] para [Unidade]*/

float Unit_Convert_Volume_l_to_UKGal (float volume){
	float fct = 4.54609;
	return(volume/fct);
}

float Unit_Convert_Volume_l_to_USGal (float volume){
	float fct = 3.785411784;
	return(volume/fct);
}

float Unit_Convert_Volume_l_to_Cup (float volume){
	float fct = 0.240;
	return(volume/fct);
}

float Unit_Convert_Volume_l_to_UKPint (float volume){
	float fct = 1/0.56826125;
	return(volume*fct);
}

float Unit_Convert_Volume_l_to_UKFloz (float volume){
	float fct = 20/0.56826125;
	return(volume*fct);
}

float Unit_Convert_Volume_l_to_USPint (float volume){
	float fct = 0.473176473;
	return(volume/fct);
}

float Unit_Convert_Volume_l_to_USFloz (float volume){
	float fct = 16/0.473176473;
	return(volume*fct);
}

/*Unidades de Força*/

/*De [Unidade] para [N]*/

float Unit_Convert_Force_Lbf_to_N (float force){
	float fct = 4.448221615;
	return(force*fct);
}

float Unit_Convert_Force_Kgf_to_N (float force){
	float fct = 9.80665;
	return(force*fct);
}

float Unit_Convert_Force_Dyne_to_N (float force){
	float fct = 10^(-5);
	return(force*fct);
}

/*De [N] para [Unidade]*/

float Unit_Convert_Force_N_to_Lbf (float force){
	float fct = 4.448221615;
	return(force/fct);
}

float Unit_Convert_Force_N_to_Kgf (float force){
	float fct = 9.80665;
	return(force/fct);
}

float Unit_Convert_Force_N_to_Dyne (float force){
	float fct = 10^(5);
	return(force*fct);
}

/*Unidades de Densidade (Massa Específica)*/

/*De [Unidade] para [kg/m3]*/

float Unit_Convert_Density_LbpFt3_to_kgpm3 (float density){
	float fct = (0.45359237/0.3048);
	return (density*fct);
} 

float Unit_Convert_Density_SlugpFt3_to_kgpm3 (float density){
	float fct = 515.4;
	return (density*fct);
} 

/*De [kg/m3]/ para [Unidade]*/

float Unit_Convert_Density_kgpm3_to_LbpFt3 (float density){
	float fct = (0.3048/0.45359237);
	return (density*fct);
} 

float Unit_Convert_Density_kgpm3_to_SlugpFt3 (float density){
	float fct = 515.4;
	return (density/fct);
} 

/*Unidades de Velocidade*/

/*De [Unidade] para [m/s]*/

float Unit_Convert_Speed_FtpMin_to_mps (float speed){
	float fct = 0.00508;
	return (speed*fct);
}

float Unit_Convert_Speed_KmpH_to_mps (float speed){
	float fct = 0.277777778;
	return (speed*fct);
}

float Unit_Convert_Speed_Kt_to_mps (float speed){
	float fct = 1.852*0.277777778;
	return (speed*fct);
}

float Unit_Convert_Speed_MpH_to_mps (float speed){
	float fct = 0.4470;
	return (speed*fct);
}

/*De [m/s] para [Unidade]*/

float Unit_Convert_Speed_mps_to_FtpMin (float speed){
	float fct = 0.00508;
	return (speed/fct);
}

float Unit_Convert_Speed_mps_to_KmpH (float speed){
	float fct = 0.277777778;
	return (speed/fct);
}

float Unit_Convert_Speed_mps_to_Kt (float speed){
	float fct = (1.852*0.277777778);
	return (speed/fct);
}

float Unit_Convert_Speed_mps_to_MpH (float speed){
	float fct = 0.4470;
	return (speed/fct);
}

/*Unidades de Pressão*/

/*De [Unidade] para [Pa]/[N/m2]*/

float Unit_Convert_Pressure_Bar_to_Pa (float pressure){
	float fct = 10^(5);
	return (pressure*fct);
}

float Unit_Convert_Pressure_mBar_to_Pa (float pressure){
	float fct = 100;
	return (pressure*fct);
}

float Unit_Convert_Pressure_InH20_to_Pa (float pressure){
	float fct = 249.1;
	return (pressure*fct);
}

float Unit_Convert_Pressure_InHg_to_Pa (float pressure){
	float fct = 3386;
	return (pressure*fct);
}

float Unit_Convert_Pressure_LbfpIn2_to_Pa (float pressure){
	float fct = 6895;
	return (pressure*fct);
}

float Unit_Convert_Pressure_Atm_to_Pa (float pressure){
	float fct = 101325;
	return (pressure*fct);
}

/*De [Pa]/[N/m2] para [Unidade]*/

float Unit_Convert_Pressure_Pa_to_Bar (float pressure){
	float fct = 10^(-5);
	return (pressure*fct);
}

float Unit_Convert_Pressure_Pa_to_mBar (float pressure){
	float fct = 100;
	return (pressure/fct);
}

float Unit_Convert_Pressure_Pa_to_InH20 (float pressure){
	float fct = 249.1;
	return (pressure/fct);
}

float Unit_Convert_Pressure_Pa_to_InHg (float pressure){
	float fct = 3386;
	return (pressure/fct);
}

float Unit_Convert_Pressure_Pa_to_LbfpIn2 (float pressure){
	float fct = 6895;
	return (pressure/fct);
}

float Unit_Convert_Pressure_Pa_to_Atm (float pressure){
	float fct = 101325;
	return (pressure/fct);
}

/*Unidades de Frequência*/

/*De [Unidade] para [rad/s]*/

float Unit_Convert_Frequency_Hz_to_radps (float frequency){
	float fct = 2*PI;
	return (frequency*fct);
}

float Unit_Convert_Frequency_rpm_to_radps (float frequency){
	float fct = (2*PI)/(60);
	return (frequency*fct);
}

/*De [rad/s] para [Unidade]*/

float Unit_Convert_Frequency_radps_to_Hz (float frequency){
	float fct = (2*PI);
	return (frequency/fct);
}

float Unit_Convert_Frequency_radps_to_rpm (float frequency){
	float fct = (60)/(2*PI);
	return (frequency*fct);
}

/*Unidades de Energia*/

/*De [Unidade] para [J]*/

float Unit_Convert_Energy_FtLbF_to_J (float energy){
	float fct = 1.356;
	return (energy*fct);
}

float Unit_Convert_Energy_Wh_to_J (float energy){
	float fct = 3600;
	return (energy*fct);
}

float Unit_Convert_Energy_Btu_to_J (float energy){
	float fct = 1055;
	return (energy*fct);
}

float Unit_Convert_Energy_Cal_to_J (float energy){
	float fct = 4.187;
	return (energy*fct);
}

/*De [J] para [Unidade]*/

float Unit_Convert_Energy_J_to_FtLbF (float energy){
	float fct = 1.356;
	return (energy/fct);
}

float Unit_Convert_Energy_J_to_Wh (float energy){
	float fct = 3600;
	return (energy/fct);
}

float Unit_Convert_Energy_J_to_Btu (float energy){
	float fct = 1055;
	return (energy/fct);
}

float Unit_Convert_Energy_J_to_Cal (float energy){
	float fct = 4.187;
	return (energy/fct);
}

/*Unidades de Potência*/

/*De [Unidade] para [W]*/

float Unit_Convert_Power_Bhp_to_W (float power){
	float fct = 745.7;
	return (power*fct);
}

float Unit_Convert_Power_KCalph_to_W (float power){
	float fct = 0.8598;
	return (power*fct);
}

float Unit_Convert_Power_CV_to_W (float power){
	float fct = 735;
	return (power*fct);
}

/*De [W] para [Unidade]*/

float Unit_Convert_Power_W_to_Bhp (float power){
	float fct = 745.7;
	return (power/fct);
}

float Unit_Convert_Power_W_to_KCalph (float power){
	float fct = 0.8598;
	return (power/fct);
}

float Unit_Convert_Power_W_to_CV (float power){
	float fct = 735;
	return (power/fct);
}

/*Unidades de Temperatura*/

/*De [Unidade] para [K]*/

float Unit_Convert_Temperature_oC_to_K (float temperature){
	float fct = 273.15;
	return (temperature+fct);
}

float Unit_Convert_Temperature_oF_to_K (float temperature){
	float fct1 = 459.67;
	float fct2 = 1.8;
	return ((temperature + fct1)*fct2);
}

float Unit_Convert_Temperature_R_to_K (float temperature){
	float fct = 1/1.8;
	return (temperature*fct);
}

/*De [K] para [Unidade]*/

float Unit_Convert_Temperature_K_to_oC (float temperature){
	float fct = 273.15;
	return (temperature-fct);
}

float Unit_Convert_Temperature_K_to_oF (float temperature){
	float fct1 = 459.67;
	float fct2 = 1/1.8;
	return ((fct2*temperature)-fct1);
}

float Unit_Convert_Temperature_K_to_R (float temperature){
	float fct = 1.8;
	return (temperature*fct);
}

/*Inverte Unidade*/

float Unit_Convert_Invert (float unit){
	if(unit!=0){
		return (1/unit);
	}
	else{
		return (INFINITY);
	}
}