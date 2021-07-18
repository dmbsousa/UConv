#include "Formules.h"
/*Unidades de Massa*/

/*De [Unidade] para [Kg]*/
void Unit_Convert_Mass_Lb_to_Kg_Formula (){
	printf("[Lb]*0.45359237 = [Kg]\n");
}

void Unit_Convert_Mass_Slug_to_Kg_Formula (){
	printf("[Slug]*14.593903 = [Kg]\n");
}

void Unit_Convert_Mass_Oz_to_Kg_Formula (){
	printf("[Oz]*0.028349523125 = [Kg]\n");
}

void Unit_Convert_Mass_C_to_Kg_Formula (){
	printf("[C]*0.0002 = [Kg]\n");
}

/*De [Kg] para [Unidade]*/
void Unit_Convert_Mass_Kg_to_Lb_Formula (){
	printf("[Kg]/0.45359237 = [Lb]\n");
}

void Unit_Convert_Mass_Kg_to_Slug_Formula (){
	printf("[Kg]/14.593903 = [Slug]\n");
}

void Unit_Convert_Mass_Kg_to_Oz_Formula (){
	printf("[Kg]/0.028349523125 = [Oz]\n");
}

void Unit_Convert_Mass_Kg_to_C_Formula (){
	printf("[Kg]/0.0002 = [C]");
}

/*Unidades de Distância*/

/*De [Unidade] para [m]*/
void Unit_Convert_Distance_Ft_to_m_Formula (){
	printf("[ft]*0.3048 = [m]\n");
}

void Unit_Convert_Distance_Mile_to_m_Formula (){
	printf("[Mile]*1609 = [m]\n");
}

void Unit_Convert_Distance_NMile_to_m_Formula (){
	printf("[NMile]*1852 = [m]\n");
}

void Unit_Convert_Distance_In_to_m_Formula (){
	printf("[in]*0.0254 = [m]\n");
}

void Unit_Convert_Distance_Yard_to_m_Formula (){
	printf("[yard]*0.9144 = [m]\n");
}

/*De [m] para [Unidade]*/

void Unit_Convert_Distance_m_to_Ft_Formula (){
	printf("[m]/0.3048 = [ft]\n");
}

void Unit_Convert_Distance_m_to_Mile_Formula (){
	printf("[m]/1609 = [Mile]\n");
}

void Unit_Convert_Distance_m_to_NMile_Formula (){
	printf("[m]/1852 = [NMile]\n");
}

void Unit_Convert_Distance_m_to_In_Formula (){
	printf("[m]/0.0254 = [in]\n");
}

void Unit_Convert_Distance_m_to_Yard_Formula (){
	printf("[m]/0.9144 = [yard]\n");
}

/*Unidades de Volume*/

/*De [Unidade] para [l]*/

void Unit_Convert_Volume_UKGal_to_l_Formula (){
	printf("[UKGal]*4.54609 = [l]\n");
}

void Unit_Convert_Volume_USGal_to_l_Formula (){
	printf("[USGal]*3.785411784 = [l]\n");
}

void Unit_Convert_Volume_Cup_to_l_Formula (){
	printf("[Cup]*0.240 = [l]\n");
}

void Unit_Convert_Volume_UKPint_to_l_Formula (){
	printf("[UKPint]*0.56826125 = [l]\n");
}

void Unit_Convert_Volume_UKFloz_to_l_Formula (){
	printf("[UKFLoz]*(0.56826125/20) = [l]");
}

void Unit_Convert_Volume_USPint_to_l_Formula (){
	printf("[USPint]*0.473176473 = [l]\n");
}

void Unit_Convert_Volume_USFloz_to_l_Formula (){
	printf("[USFloz]*0.473176473/16 = [l]\n");
}

/*De [l] para [Unidade]*/

void Unit_Convert_Volume_l_to_UKGal_Formula (){
	printf("[l]/4.54609 = [UKGal]\n");
}

void Unit_Convert_Volume_l_to_USGal_Formula (){
	printf("[l]/3.785411784 = [USGal]\n");
}

void Unit_Convert_Volume_l_to_Cup_Formula (){
	printf("[l]/0.240 = [Cup]\n");
}

void Unit_Convert_Volume_l_to_UKPint_Formula (){
	printf("[l]/0.56826125 = [UKPint]\n");
}

void Unit_Convert_Volume_l_to_UKFloz_Formula (){
	printf("[l]*(20/0.56826125) = [UKFloz]\n");
}

void Unit_Convert_Volume_l_to_USPint_Formula (){
	printf("[l]/0.473176473 = [USPint]\n");
}

void Unit_Convert_Volume_l_to_USFloz_Formula (){
	printf("[l]*(16/0.473176473) = [UKFloz]\n");
}

/*Unidades de Força*/

/*De [Unidade] para [N]*/

void Unit_Convert_Force_Lbf_to_N_Formula (){
	printf("[Lbf]*4.448221615 = [N]\n");
}

void Unit_Convert_Force_Kgf_to_N_Formula (){
	printf("[Kgf]*9.80665 = [N]\n");
}

void Unit_Convert_Force_Dyne_to_N_Formula (){
	printf("[Dyne]*10^(-5) = [N]\n");
}

/*De [N] para [Unidade]*/

void Unit_Convert_Force_N_to_Lbf_Formula (){
	printf("[N]/4.448221615 = [Lbf]\n");
}

void Unit_Convert_Force_N_to_Kgf_Formula (){
	printf("[N]/9.80665 = [Kgf]\n");
}

void Unit_Convert_Force_N_to_Dyne_Formula (){
	printf("[N]*10^(5) = [Dyne]\n");
}

/*Unidades de Densidade (Massa Específica)*/

/*De [Unidade] para [kg/m3]*/

void Unit_Convert_Density_LbpFt3_to_kgpm3_Formula (){
	printf("[Lb/ft3]*(0.45359237/0.3048) = [Kg/m3]\n");
} 

void Unit_Convert_Density_SlugpFt3_to_kgpm3_Formula (){
	printf("[Slug/ft3]*515.378819 = [Kg/m3]\n");

} 

/*De [kg/m3]/ para [Unidade]*/

void Unit_Convert_Density_kgpm3_to_LbpFt3_Formula (){
	printf("[Kg/m3]*(0.3048/0.45359237) = [Lb/ft3]\n");

} 

void Unit_Convert_Density_kgpm3_to_SlugpFt3_Formula (){
	printf("[Kg/m3]/515.378819 = [Slug/ft3]\n");
} 

/*Unidades de Velocidade*/

/*De [Unidade] para [m/s]*/

void Unit_Convert_Speed_FtpMin_to_mps_Formula (){
	printf("[Ft/min]*0.00508 = [m/s]\n");
}

void Unit_Convert_Speed_KmpH_to_mps_Formula (){
	printf("[Km/h]*0.277777778 = [m/s]\n");
}

void Unit_Convert_Speed_Kt_to_mps_Formula (){
	printf("[Kt]*1.852*0.277777778 = [m/s]\n");
}

void Unit_Convert_Speed_MpH_to_mps_Formula (){
	printf("[Mile/h]*0.4470 = [m/s]\n");

}

/*De [m/s] para [Unidade]*/

void Unit_Convert_Speed_mps_to_FtpMin_Formula (){
	printf("[m/s]/0.00508 = [Ft/min]\n");
}

void Unit_Convert_Speed_mps_to_KmpH_Formula (){
	printf("[m/s]/0.277777778 = [Km/h]\n");
}

void Unit_Convert_Speed_mps_to_Kt_Formula (){
	printf("[m/s]/(1.852*0.277777778) = [Kt]\n");
}

void Unit_Convert_Speed_mps_to_MpH_Formula (){
	printf("[m/s]/0.4470 = [Mile/h]\n");
}

/*Unidades de Pressão*/

/*De [Unidade] para [Pa]/[N/m2]*/

void Unit_Convert_Pressure_Bar_to_Pa_Formula (){
	printf("[Bar]*10^(5) = [Pa]\n");
}

void Unit_Convert_Pressure_mBar_to_Pa_Formula (){
	printf("[mBar]*100 = [Pa]\n");
}

void Unit_Convert_Pressure_InH20_to_Pa_Formula (){
	printf("[InH20]*249.1 = [Pa]\n");
}

void Unit_Convert_Pressure_InHg_to_Pa_Formula (){
	printf("[InHg]*3386 = [Pa]\n");
}

void Unit_Convert_Pressure_LbfpIn2_to_Pa_Formula (){
	printf("[Lbf/In2]*6895 = [Pa]\n");
}

void Unit_Convert_Pressure_Atm_to_Pa_Formula (){
	printf("[Atm]*101325 = [Pa]\n");
}

/*De [Pa]/[N/m2] para [Unidade]*/

void Unit_Convert_Pressure_Pa_to_Bar_Formula (){
	printf("[Pa]*10^(-5) = [Bar]\n");
}

void Unit_Convert_Pressure_Pa_to_mBar_Formula (){
	printf("[Pa]*10^(-2) = [mBar]\n");
}

void Unit_Convert_Pressure_Pa_to_InH20_Formula (){
	printf("[Pa]/249.1 = [InH20]\n");
}

void Unit_Convert_Pressure_Pa_to_InHg_Formula (){
	printf("[Pa]/3386 = [InHg]\n");
}

void Unit_Convert_Pressure_Pa_to_LbfpIn2_Formula (){
	printf("[Pa]/6895 = [Lbf/In2]\n");
}

void Unit_Convert_Pressure_Pa_to_Atm_Formula (){
	printf("[Pa]/101325 = [Atm]\n");
}


/*Unidades de Frequência*/

/*De [Unidade] para [rad/s]*/

void Unit_Convert_Frequency_Hz_to_radps_Formula (){
	printf("[Hz]*2*PI = [rad/s]\n");
}

void Unit_Convert_Frequency_rpm_to_radps_Formula (){
	printf("[rpm]*((2*PI)/60) = [rad/s]\n");
}

/*De [rad/s] para [Unidade]*/

void Unit_Convert_Frequency_radps_to_Hz_Formula (){
	printf("[rad/s]/(2*PI) = [Hz]\n");
}

void Unit_Convert_Frequency_radps_to_rpm_Formula (){
	printf("[rad/s]*(60/(2*PI)) = [rpm]\n");
}

/*Unidades de Energia*/

/*De [Unidade] para [J]*/

void Unit_Convert_Energy_FtLbF_to_J_Formula (){
	printf("[FtLbf]*1.356 = [J]\n");
}

void Unit_Convert_Energy_Wh_to_J_Formula (){
	printf("[Wh]*3600 = [J]\n");
}

void Unit_Convert_Energy_Btu_to_J_Formula (){
	printf("[Btu]*1055 = [J]\n");
}

void Unit_Convert_Energy_Cal_to_J_Formula (){
	printf("[Cal]*4.187 = [J]\n");

}

/*De [J] para [Unidade]*/

void Unit_Convert_Energy_J_to_FtLbF_Formula (){
	printf("[J]/1.356 = [FtLbf]\n");
}

void Unit_Convert_Energy_J_to_Wh_Formula (){
	printf("[J]/3600 = [Wh]\n");
}

void Unit_Convert_Energy_J_to_Btu_Formula (){
	printf("[J]/1055 = [Btu]\n");

}

void Unit_Convert_Energy_J_to_Cal_Formula (){
	printf("[J]/4.187 = [Cal]\n");
}

/*Unidades de Potência*/

/*De [Unidade] para [W]*/

void Unit_Convert_Power_Bhp_to_W_Formula (){
	printf("[Bhp]*745.7 = [W]\n");
}

void Unit_Convert_Power_KCalph_to_W_Formula (){
	printf("[KCal/h]*0.8598 = [W]\n");
}

void Unit_Convert_Power_CV_to_W_Formula (){
	printf("[CV]*735 = [W]\n");
}

/*De [W] para [Unidade]*/

void Unit_Convert_Power_W_to_Bhp_Formula (){
	printf("[W]/745.7 = [Bhp]\n");
}

void Unit_Convert_Power_W_to_KCalph_Formula (){
	printf("[W]/0.8598 = [KCal/h]\n");
}

void Unit_Convert_Power_W_to_CV_Formula (){
	printf("[W]/735 = [CV]\n");
}

/*Unidades de Temperatura*/

/*De [Unidade] para [K]*/

void Unit_Convert_Temperature_oC_to_K_Formula (){
	printf("[oC]+273.15 = [K]\n");
}

void Unit_Convert_Temperature_oF_to_K_Formula (){
	printf("([oF]+459.67)*1.8 = [K]\n");
}

void Unit_Convert_Temperature_R_to_K_Formula (){
	printf("[R]/1.8 = [K]\n");
}

/*De [K] para [Unidade]*/

void Unit_Convert_Temperature_K_to_oC_Formula (){
	printf("[K]-273.15 = [oC]\n");
}

void Unit_Convert_Temperature_K_to_oF_Formula (){
	printf("([K]/1.8)-459.67 = [oF]\n");
}

void Unit_Convert_Temperature_K_to_R_Formula (){
	printf("[K]*1.8 = [R]\n");
}