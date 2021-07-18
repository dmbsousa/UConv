/*interface.h incluido*/
#include "Interface.h"
#include "ConversionFunctions.h"
#include "Formules.h"

/*Função selecionar menu*/
void select_menu (char line [MAX]){
	lowercase(line);

		/*Mostra instruções*/
		if(strcmp(line , "help")==0)
			instructions();

		/*Mostra lista de unidades*/
		if(strcmp(line , "pqlist")==0)
			pqlist();

		/*Mass Menu*/
		if(strcmp(line , "mass")==0)
			mass_interface (line);

		/*Distance Menu*/
		if(strcmp(line , "distance")==0)
			distance_interface(line);

		/*Volume Menu*/
		if(strcmp(line , "volume")==0)
			volume_interface(line);

		/*Force Menu*/
		if(strcmp(line , "force")==0)
			force_interface(line);

		/*Density Menu*/
		if(strcmp(line , "density")==0)
			density_interface(line);

		/*Speed Menu*/
		if(strcmp(line , "speed")==0)
			speed_interface(line);

		/*Pressure Menu*/
		if(strcmp(line , "pressure")==0)
			pressure_interface(line);

		/*Frequency Menu*/
		if(strcmp(line , "frequency")==0)
			frequency_interface(line);

		/*Energy Menu*/
		if(strcmp(line , "energy")==0)
			energy_interface(line);
		
		/*Power Menu*/
		if (strcmp(line , "power")==0)
			power_interface(line);

		/*Temperature Menu*/
		if (strcmp(line , "temperature")==0)
			temperature_interface(line);
}

/* Lista de instruções */
void instructions(){
	printf("This is version 0.0 of UConv, a basic units converter for different physical quatities\n");
	printf("The interaction is made through command line (CLI)\n\n");
	printf("How to use:\n->Choose and write the physical quantity you want to work with from the list\n");
	printf("->Then choose the unit you have, the unit you want to obtain and write the value.The syntax is as follows:\n");
	printf("    [unit] to [unit] [value]\n\n");
	printf("->To view the physical quantities list, use pqlist\n");
	printf("->In each menu, use units to view the available units\n");
	printf("->In each menu, use the following syntax to view the formulas used in a conversion:\n");
	printf("    sf [unit] to [unit]\n\n");
	printf("->Use back to navigate in between menus and use exit to exit the program\n\n");
	printf("For further examples refer to the user manual\n");
}

/* Lista de Unidades */
void pqlist (){
	printf("\n| Physical Quantity |\n");
	printf("->Mass\n");
	printf("->Distance\n");
	printf("->Volume\n");
	printf("->Force\n");
	printf("->Density\n");
	printf("->Speed\n");
	printf("->Pressure\n");
	printf("->Frequency\n");
	printf("->Energy\n");
	printf("->Power\n");
	printf("->Temperature\n\n");
}

/*Converte string para lowercase para comparação*/
void lowercase (char string [MAX]){
	int i;
	for (i=0; i<MAX;i++){
		string[i] = tolower(string[i]);
	}
}

/*Interface para opção massa*/
void mass_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Mass->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && (mass_check(unit[1])) && (mass_check(unit[2]))){
				/*Lê Input e Verifica unidades para conversão*/
				/*Unidade origem*/
				printf("%s && %s\n" , unit[1] , unit[2]); /*Para retirar*/
				if(strcmp(unit[1] , "kg")==0){}

				if(strcmp(unit[1] , "lb")==0)	
					number = Unit_Convert_Mass_Lb_to_Kg (number);
				if(strcmp(unit[1] , "slug")==0)
					number = Unit_Convert_Mass_Slug_to_Kg (number);
				if(strcmp(unit[1] , "oz")==0)
					number = Unit_Convert_Mass_Oz_to_Kg (number);
				if(strcmp(unit[1] , "c")==0)
					number = Unit_Convert_Mass_C_to_Kg (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "kg")==0){}

				if(strcmp(unit[2] , "lb")==0)
					number = Unit_Convert_Mass_Kg_to_Lb (number);
				if(strcmp(unit[2] , "slug")==0)
					number = Unit_Convert_Mass_Kg_to_Slug (number);
				if(strcmp(unit[2] , "oz")==0)
					number = Unit_Convert_Mass_Kg_to_Oz (number);
				if(strcmp(unit[2] , "c")==0)
					number = Unit_Convert_Mass_Kg_to_C (number);
				printf("%f\n" , number);
				}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && mass_check(unit[1]) && mass_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "kg")==0){}

				if(strcmp(unit[1] , "lb")==0)
					Unit_Convert_Mass_Lb_to_Kg_Formula ();

				if(strcmp(unit[1] , "slug")==0)
					Unit_Convert_Mass_Slug_to_Kg_Formula ();

				if(strcmp(unit[1] , "oz")==0)
					Unit_Convert_Mass_Oz_to_Kg_Formula ();

				if(strcmp(unit[1] , "c")==0)
					Unit_Convert_Mass_C_to_Kg_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "kg")==0){}

				if(strcmp(unit[2] , "lb")==0)
					Unit_Convert_Mass_Kg_to_Lb_Formula ();

				if(strcmp(unit[2] , "slug")==0)
					Unit_Convert_Mass_Kg_to_Slug_Formula ();

				if(strcmp(unit[2] , "oz")==0)
					Unit_Convert_Mass_Kg_to_Oz_Formula ();

				if(strcmp(unit[2] , "c")==0)
					Unit_Convert_Mass_Kg_to_C_Formula ();
			}
		if (strcmp(line , "units")==0){
			mass_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int mass_check (char unit[MAX]){
	if((strcmp(unit , "kg")==0) || (strcmp(unit , "lb")==0) || (strcmp(unit , "slug")==0) || (strcmp(unit , "oz")==0) || (strcmp(unit , "c")==0))
		return TRUE;
	else
		return FALSE;
}

void mass_units(){
	printf("\n| Mass Units |\n");
	printf("[kg] -> Kilogram\n");
	printf("[lb] -> Pound\n");
	printf("[slug] -> Slug\n");
	printf("[oz] -> Ounce\n");
	printf("[c] -> Carat\n\n");
}

/*Interface para opção distância*/
void distance_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Distance->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && distance_check(unit[1]) && distance_check(unit[2])){
				/*Lê Input e Verifica unidades para conversão*/
				/*Unidade origem*/
				printf("%s && %s\n" , unit[1] , unit[2]);
				if(strcmp(unit[1] , "m")==0){}

				if(strcmp(unit[1] , "ft")==0)	
					number = Unit_Convert_Distance_Ft_to_m (number);
				if(strcmp(unit[1] , "mile")==0)
					number = Unit_Convert_Distance_Mile_to_m (number);
				if(strcmp(unit[1] , "nmile")==0)
					number = Unit_Convert_Distance_NMile_to_m (number);
				if(strcmp(unit[1] , "in")==0)
					number = Unit_Convert_Distance_In_to_m (number);
				if(strcmp(unit[1] , "yard")==0)
					number = Unit_Convert_Distance_Yard_to_m (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "m")==0){}

				if(strcmp(unit[2] , "ft")==0)	
					number = Unit_Convert_Distance_m_to_Ft (number);
				if(strcmp(unit[2] , "mile")==0)
					number = Unit_Convert_Distance_m_to_Mile (number);
				if(strcmp(unit[2] , "nmile")==0)
					number = Unit_Convert_Distance_m_to_NMile (number);
				if(strcmp(unit[2] , "in")==0)
					number = Unit_Convert_Distance_m_to_In (number);
				if(strcmp(unit[2] , "yard")==0)
					number = Unit_Convert_Distance_m_to_Yard (number);

				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && distance_check(unit[1]) && distance_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "m")==0){}

				if(strcmp(unit[1] , "ft")==0)
					Unit_Convert_Distance_Ft_to_m_Formula ();

				if(strcmp(unit[1] , "mile")==0)
					Unit_Convert_Distance_Mile_to_m_Formula ();

				if(strcmp(unit[1] , "nmile")==0)
					Unit_Convert_Distance_NMile_to_m_Formula ();

				if(strcmp(unit[1] , "in")==0)
					Unit_Convert_Distance_In_to_m_Formula ();

				if(strcmp(unit[1] , "yard")==0)
					Unit_Convert_Distance_Yard_to_m_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "m")==0){}

				if(strcmp(unit[2] , "ft")==0)
					Unit_Convert_Distance_m_to_Ft_Formula ();

				if(strcmp(unit[2] , "mile")==0)
					Unit_Convert_Distance_m_to_Mile_Formula ();

				if(strcmp(unit[2] , "nmile")==0)
					Unit_Convert_Distance_m_to_NMile_Formula ();

				if(strcmp(unit[2] , "in")==0)
					Unit_Convert_Distance_m_to_In_Formula ();

				if(strcmp(unit[2] , "yard")==0)
					Unit_Convert_Distance_m_to_Yard_Formula ();
			}
		if (strcmp(line , "units")==0){
			distance_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int distance_check (char unit[MAX]){
	if((strcmp(unit , "m")==0) || (strcmp(unit , "ft")==0) || (strcmp(unit , "mile")==0) || (strcmp(unit , "nmile")==0) || (strcmp(unit , "in")==0) || (strcmp(unit , "yard")==0))
		return TRUE;
	else
		return FALSE;
}

void distance_units(){
	printf("\n| Distance Units |\n");
	printf("[m] -> Meter\n");
	printf("[ft] -> Feet\n");
	printf("[mile] -> Statute Mile\n");
	printf("[nmile] -> Nautical Mile\n");
	printf("[in] -> Inch\n");
	printf("[yard] -> Yard\n\n");
}

/*Interface para opção volume*/
void volume_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Volume->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && volume_check(unit[1]) && volume_check(unit[2])){
			
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				printf("%s && %s\n" , unit[1] , unit[2]);
				if(strcmp(unit[1] , "l")==0){}

				if(strcmp(unit[1] , "ukgal")==0)	
					number = Unit_Convert_Volume_UKGal_to_l (number);
				if(strcmp(unit[1] , "usgal")==0)
					number = Unit_Convert_Volume_USGal_to_l (number);
				if(strcmp(unit[1] , "cup")==0)
					number = Unit_Convert_Volume_Cup_to_l (number);
				if(strcmp(unit[1] , "ukpint")==0)
					number = Unit_Convert_Volume_UKPint_to_l (number);
				if(strcmp(unit[1] , "ukfloz")==0)
					number = Unit_Convert_Volume_UKFloz_to_l (number);
				if(strcmp(unit[1] , "uspint")==0)
					number = Unit_Convert_Volume_USPint_to_l (number);
				if(strcmp(unit[1] , "usfloz")==0)
					number = Unit_Convert_Volume_USFloz_to_l (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "l")==0){}

				if(strcmp(unit[2] , "ukgal")==0)	
					number = Unit_Convert_Volume_l_to_UKGal (number);
				if(strcmp(unit[2] , "usgal")==0)
					number = Unit_Convert_Volume_l_to_USGal (number);
				if(strcmp(unit[2] , "cup")==0)
					number = Unit_Convert_Volume_l_to_Cup (number);
				if(strcmp(unit[2] , "ukpint")==0)
					number = Unit_Convert_Volume_l_to_UKPint (number);
				if(strcmp(unit[2] , "ukfloz")==0)
					number = Unit_Convert_Volume_l_to_UKFloz (number);
				if(strcmp(unit[2] , "uspint")==0)
					number = Unit_Convert_Volume_l_to_USPint (number);
				if(strcmp(unit[2] , "usfloz")==0)
					number = Unit_Convert_Volume_l_to_USFloz (number);

				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && volume_check(unit[1]) && volume_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "l")==0){}

				if(strcmp(unit[1] , "ukgal")==0)
					Unit_Convert_Volume_UKGal_to_l_Formula ();

				if(strcmp(unit[1] , "usgal")==0)
					Unit_Convert_Volume_USGal_to_l_Formula ();

				if(strcmp(unit[1] , "cup")==0)
					Unit_Convert_Volume_Cup_to_l_Formula ();

				if(strcmp(unit[1] , "ukpint")==0)
					Unit_Convert_Volume_UKPint_to_l_Formula ();

				if(strcmp(unit[1] , "ukfloz")==0)
					Unit_Convert_Volume_UKFloz_to_l_Formula ();

				if(strcmp(unit[1] , "uspint")==0)
					Unit_Convert_Volume_USPint_to_l_Formula ();

				if(strcmp(unit[1] , "usfloz")==0)
					Unit_Convert_Volume_USFloz_to_l_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "l")==0){}

				if(strcmp(unit[2] , "ukgal")==0)
					Unit_Convert_Volume_l_to_UKGal_Formula ();

				if(strcmp(unit[2] , "usgal")==0)
					Unit_Convert_Volume_l_to_USGal_Formula ();

				if(strcmp(unit[2] , "cup")==0)
					Unit_Convert_Volume_l_to_Cup_Formula ();

				if(strcmp(unit[2] , "ukpint")==0)
					Unit_Convert_Volume_l_to_UKPint_Formula ();

				if(strcmp(unit[2] , "ukfloz")==0)
					Unit_Convert_Volume_l_to_UKFloz_Formula ();

				if(strcmp(unit[2] , "uspint")==0)
					Unit_Convert_Volume_l_to_USPint_Formula ();

				if(strcmp(unit[2] , "usfloz")==0)
					Unit_Convert_Volume_l_to_USFloz_Formula ();

			}
		if (strcmp(line , "units")==0){
			volume_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int volume_check(char unit [MAX]){
	if((strcmp(unit , "l")==0) || (strcmp(unit , "ukgal")==0) || (strcmp(unit , "cup")==0) || (strcmp(unit , "ukpint")==0) || (strcmp(unit , "ukfloz")==0) || (strcmp(unit , "uspint")==0) || (strcmp(unit , "usfloz")==0))
		return TRUE;
	else
		return FALSE;
}

void volume_units(){
	printf("\n| Volume Units |\n");
	printf("[l] -> Litre\n");
	printf("[ukgal] -> Imperial Gallon\n");
	printf("[usgal] -> US Gallon\n");
	printf("[cup] -> Cup\n");
	printf("[ukpint] -> Imperial Pint\n");
	printf("[ukfloz] -> Imperial Ounce\n");
	printf("[uspint] -> US Pint\n");
	printf("[usfloz] -> US Ounce\n\n");
}

/*Interface para opção força*/
void force_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Force->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && force_check(unit[1]) && force_check(unit[2])) {
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "n")==0){}

				if(strcmp(unit[1] , "lbf")==0)	
					number = Unit_Convert_Force_Lbf_to_N (number);
				if(strcmp(unit[1] , "kgf")==0)
					number = Unit_Convert_Force_Kgf_to_N (number);
				if(strcmp(unit[1] , "dyne")==0)
					number = Unit_Convert_Force_Dyne_to_N (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "n")==0){}

				if(strcmp(unit[2] , "lbf")==0)	
					number = Unit_Convert_Force_N_to_Lbf (number);
				if(strcmp(unit[2] , "kgf")==0)
					number = Unit_Convert_Force_N_to_Kgf (number);
				if(strcmp(unit[2] , "dyne")==0)
					number = Unit_Convert_Force_N_to_Dyne (number);

				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && force_check(unit[1]) && force_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "n")==0){}

				if(strcmp(unit[1] , "lbf")==0)
					Unit_Convert_Force_Lbf_to_N_Formula ();

				if(strcmp(unit[1] , "kgf")==0)
					Unit_Convert_Force_Kgf_to_N_Formula ();

				if(strcmp(unit[1] , "dyne")==0)
					Unit_Convert_Force_Dyne_to_N_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "n")==0){}

				if(strcmp(unit[2] , "lbf")==0)
					Unit_Convert_Force_N_to_Lbf_Formula ();

				if(strcmp(unit[2] , "kgf")==0)
					Unit_Convert_Force_N_to_Kgf_Formula ();

				if(strcmp(unit[2] , "dyne")==0)
					Unit_Convert_Force_N_to_Dyne_Formula ();
			}
		if (strcmp(line , "units")==0){
			force_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int force_check(char unit [MAX]){
	if((strcmp(unit , "n")==0) || (strcmp(unit , "lbf")==0) || (strcmp(unit , "kgf")==0) || (strcmp(unit , "dyne")==0))
		return TRUE;
	else
		return FALSE;
}

void force_units(){
	printf("\n| Force Units |\n");
	printf("[N] -> Newton\n");
	printf("[lbf] -> Pound-Force\n");
	printf("[kgf] -> Kilogram-Force\n");
	printf("[dyne] -> Dyne\n\n");
}

/*Interface para opção densidade*/
void density_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Density->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && density_check(unit[1]) && density_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "kg/m3")==0){}

				if(strcmp(unit[1] , "lb/ft3")==0)	
					number = Unit_Convert_Density_LbpFt3_to_kgpm3 (number);
				if(strcmp(unit[1] , "slug/ft3")==0)
					number = Unit_Convert_Density_SlugpFt3_to_kgpm3 (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "kg/m3")==0){}

				if(strcmp(unit[2] , "lb/ft3")==0)	
					number = Unit_Convert_Density_kgpm3_to_LbpFt3 (number);
				if(strcmp(unit[2] , "slug/ft3")==0)
					number = Unit_Convert_Density_kgpm3_to_SlugpFt3 (number);

				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && density_check(unit[1]) && density_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "kg/m3")==0){}

				if(strcmp(unit[1] , "lb/ft3")==0)
					Unit_Convert_Density_LbpFt3_to_kgpm3_Formula ();

				if(strcmp(unit[1] , "slug/ft3")==0)
					Unit_Convert_Density_SlugpFt3_to_kgpm3_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "kg/m3")==0){}

				if(strcmp(unit[2] , "lb/ft3")==0)
					Unit_Convert_Density_kgpm3_to_LbpFt3_Formula ();

				if(strcmp(unit[2] , "slug/ft3")==0)
					Unit_Convert_Density_kgpm3_to_SlugpFt3_Formula ();
			}
		if (strcmp(line , "units")==0){
			density_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int density_check(char unit [MAX]){
	if((strcmp(unit , "kg/m3")==0) || (strcmp(unit , "lb/ft3")==0) || (strcmp(unit , "slug/ft3")==0))
		return TRUE;
	else
		return FALSE;
}

void density_units(){
	printf("\n| Density Units |\n");
	printf("[kg/m3] -> Kilogram per Meter cubed\n");
	printf("[lb/ft3] -> Pound per Feet cubed\n");
	printf("[slug/ft3] -> Slug per Feet cubed\n\n");
}

/*Interface para opção velocidade*/
void speed_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Speed->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && speed_check(unit[1]) && speed_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "m/s")==0){}

				if(strcmp(unit[1] , "ft/min")==0)	
					number = Unit_Convert_Speed_FtpMin_to_mps (number);
				if(strcmp(unit[1] , "km/h")==0)
					number = Unit_Convert_Speed_KmpH_to_mps (number);
				if(strcmp(unit[1] , "kt")==0)
					number = Unit_Convert_Speed_Kt_to_mps (number);
				if(strcmp(unit[1] , "mph")==0)
					number = Unit_Convert_Speed_MpH_to_mps (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "m/s")==0){}

				if(strcmp(unit[2] , "ft/min")==0)	
					number = Unit_Convert_Speed_mps_to_FtpMin (number);
				if(strcmp(unit[2] , "km/h")==0)
					number = Unit_Convert_Speed_mps_to_KmpH (number);
				if(strcmp(unit[2] , "kt")==0)
					number = Unit_Convert_Speed_mps_to_Kt (number);
				if(strcmp(unit[2] , "mph")==0)
					number = Unit_Convert_Speed_mps_to_MpH (number);

				printf("%f\n" , number);
		}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && speed_check(unit[1]) && speed_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "m/s")==0){}

				if(strcmp(unit[1] , "ft/min")==0)
					Unit_Convert_Speed_FtpMin_to_mps_Formula ();

				if(strcmp(unit[1] , "km/h")==0)
					Unit_Convert_Speed_KmpH_to_mps_Formula ();

				if(strcmp(unit[1] , "kt")==0)
					Unit_Convert_Speed_Kt_to_mps_Formula ();

				if(strcmp(unit[1] , "mph")==0)
					Unit_Convert_Speed_MpH_to_mps_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "m/s")==0){}

				if(strcmp(unit[2] , "ft/min")==0)
					Unit_Convert_Speed_mps_to_FtpMin_Formula ();

				if(strcmp(unit[2] , "km/h")==0)
					Unit_Convert_Speed_mps_to_KmpH_Formula ();

				if(strcmp(unit[2] , "kt")==0)
					Unit_Convert_Speed_mps_to_Kt_Formula ();

				if(strcmp(unit[2] , "mph")==0)
					Unit_Convert_Speed_mps_to_MpH_Formula ();
		}
		if (strcmp(line , "units")==0){
			speed_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int speed_check(char unit [MAX]){
	if((strcmp(unit , "m/s")==0) || (strcmp(unit , "ft/min")==0) || (strcmp(unit , "km/h")==0) || (strcmp(unit , "kt")==0) || (strcmp(unit , "mph")==0))
		return TRUE;
	else
		return FALSE;
}

void speed_units(){
	printf("\n| Speed Units |\n");
	printf("[m/s] -> Meter per Second\n");
	printf("[ft/min] -> Feet per Minute\n");
	printf("[km/h] -> Kilometer per Hour\n");
	printf("[kt] -> Knot\n");
	printf("[mph] -> Mile per Hour\n\n");
}

/*Interface para opção pressão*/
void pressure_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Pressure->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && pressure_check(unit[1]) && pressure_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "pa")==0){}

				if(strcmp(unit[1] , "bar")==0)	
					number = Unit_Convert_Pressure_Bar_to_Pa (number);
				if(strcmp(unit[1] , "mbar")==0)
					number = Unit_Convert_Pressure_mBar_to_Pa (number);
				if(strcmp(unit[1] , "inh2o")==0)
					number = Unit_Convert_Pressure_InH20_to_Pa (number);
				if(strcmp(unit[1] , "inhg")==0)
					number = Unit_Convert_Pressure_InHg_to_Pa (number);
				if(strcmp(unit[1] , "lbf/in2")==0)
					number = Unit_Convert_Pressure_LbfpIn2_to_Pa (number);
				if(strcmp(unit[1] , "atm")==0)
					number = Unit_Convert_Pressure_Atm_to_Pa (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "pa")==0){}

				if(strcmp(unit[2] , "bar")==0)	
					number = Unit_Convert_Pressure_Pa_to_Bar (number);
				if(strcmp(unit[2] , "mbar")==0)
					number = Unit_Convert_Pressure_Pa_to_mBar (number);
				if(strcmp(unit[2] , "inh2o")==0)
					number = Unit_Convert_Pressure_Pa_to_InH20 (number);
				if(strcmp(unit[2] , "inhg")==0)
					number = Unit_Convert_Pressure_Pa_to_InHg (number);
				if(strcmp(unit[2] , "lbf/in2")==0)
					number = Unit_Convert_Pressure_Pa_to_LbfpIn2 (number);
				if(strcmp(unit[2] , "atm")==0)
					number = Unit_Convert_Pressure_Pa_to_Atm (number);

				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && pressure_check(unit[1]) && pressure_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "pa")==0){}

				if(strcmp(unit[1] , "bar")==0)
					Unit_Convert_Pressure_Bar_to_Pa_Formula ();

				if(strcmp(unit[1] , "mbar")==0)
					Unit_Convert_Pressure_mBar_to_Pa_Formula ();

				if(strcmp(unit[1] , "inh20")==0)
					Unit_Convert_Pressure_InH20_to_Pa_Formula ();

				if(strcmp(unit[1] , "inhg")==0)
					Unit_Convert_Pressure_InHg_to_Pa_Formula ();

				if(strcmp(unit[1] , "lbf/in2")==0)
					Unit_Convert_Pressure_LbfpIn2_to_Pa_Formula ();

				if(strcmp(unit[1] , "atm")==0)
					Unit_Convert_Pressure_Atm_to_Pa_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "pa")==0){}

				if(strcmp(unit[2] , "bar")==0)
					Unit_Convert_Pressure_Pa_to_Bar_Formula ();

				if(strcmp(unit[2] , "mbar")==0)
					Unit_Convert_Pressure_Pa_to_mBar_Formula ();

				if(strcmp(unit[2] , "inh20")==0)
					Unit_Convert_Pressure_Pa_to_InH20_Formula ();

				if(strcmp(unit[2] , "inhg")==0)
					Unit_Convert_Pressure_Pa_to_InHg_Formula ();

				if(strcmp(unit[2] , "lbf/in2")==0)
					Unit_Convert_Pressure_Pa_to_LbfpIn2_Formula ();

				if(strcmp(unit[2] , "atm")==0)
					Unit_Convert_Pressure_Pa_to_Atm_Formula ();
			}
		if (strcmp(line , "units")==0){
			pressure_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int pressure_check(char unit [MAX]){
	if((strcmp(unit , "pa")==0) || (strcmp(unit , "bar")==0) || (strcmp(unit , "mbar")==0) || (strcmp(unit , "inh20")==0) || (strcmp(unit , "inhg")==0) || (strcmp(unit , "lbf/in2")==0) || (strcmp(unit , "atm")==0))
		return TRUE;
	else
		return FALSE;
}

void pressure_units(){
	printf("\n| Pressure Units |\n");
	printf("[pa] -> Pascal\n");
	printf("[bar] -> Bar\n");
	printf("[mbar] -> MiliBar\n");
	printf("[inh20] -> Water Inches\n");
	printf("[inhg] -> Mercury Inches\n");
	printf("[lbf/in2] -> Pound-Force per Inch squared\n");
	printf("[atm] -> Atmosphere\n\n");
}

/*Interface para opção frequência*/
void frequency_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Frequency->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && frequency_check(unit[1]) && frequency_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "rad/s")==0){}

				if(strcmp(unit[1] , "hz")==0)	
					number = Unit_Convert_Frequency_Hz_to_radps (number);
				if(strcmp(unit[1] , "rpm")==0)
					number = Unit_Convert_Frequency_rpm_to_radps (number);

				/*Unidade destino*/
				if(strcmp(unit[1] , "rad/s")==0){}

				if(strcmp(unit[1] , "hz")==0)	
					number = Unit_Convert_Frequency_radps_to_Hz (number);
				if(strcmp(unit[1] , "rpm")==0)
					number = Unit_Convert_Frequency_radps_to_rpm (number);
				
				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && frequency_check(unit[1]) && frequency_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "rad/s")==0){}

				if(strcmp(unit[1] , "hz")==0)
					Unit_Convert_Frequency_Hz_to_radps_Formula ();

				if(strcmp(unit[1] , "rpm")==0)
					Unit_Convert_Frequency_rpm_to_radps_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "rad/s")==0){}

				if(strcmp(unit[2] , "hz")==0)
					Unit_Convert_Frequency_radps_to_Hz_Formula ();

				if(strcmp(unit[2] , "rpm")==0)
					Unit_Convert_Frequency_radps_to_rpm_Formula ();
			}
		if (strcmp(line , "units")==0){
			frequency_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int frequency_check(char unit [MAX]){
	if((strcmp(unit , "rad/s")==0) || (strcmp(unit , "hz")==0) || (strcmp(unit , "rpm")==0))
		return TRUE;
	else
		return FALSE;
}

void frequency_units(){
	printf("\n| Frequency Units |\n");
	printf("[rad/s] -> Radians per Second\n");
	printf("[hz] -> Hertz\n");
	printf("[rpm] -> Rotations per minute\n\n");
}

/*Interface para opção energia*/
void energy_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Energy->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && energy_check(unit[1]) && energy_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "j")==0){}

				if(strcmp(unit[1] , "ftlbf")==0)	
					number = Unit_Convert_Energy_FtLbF_to_J (number);
				if(strcmp(unit[1] , "wh")==0)
					number = Unit_Convert_Energy_Wh_to_J (number);
				if(strcmp(unit[1] , "btu")==0)
					number = Unit_Convert_Energy_Btu_to_J (number);
				if(strcmp(unit[1] , "cal")==0)
					number = Unit_Convert_Energy_Cal_to_J (number);

				/*Unidade destino*/
				if(strcmp(unit[2] , "j")==0){}

				if(strcmp(unit[2] , "ftlbf")==0)
					number = Unit_Convert_Energy_J_to_FtLbF (number);
				if(strcmp(unit[2] , "wh")==0)
					number = Unit_Convert_Energy_J_to_Wh (number);
				if(strcmp(unit[2] , "btu")==0)
					number = Unit_Convert_Energy_J_to_Btu (number);
				if(strcmp(unit[2] , "cal")==0)
					number = Unit_Convert_Energy_J_to_Cal (number);
				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && energy_check(unit[1]) && energy_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "j")==0){}

				if(strcmp(unit[1] , "ftlbf")==0)
					Unit_Convert_Energy_FtLbF_to_J_Formula ();

				if(strcmp(unit[1] , "wh")==0)
					Unit_Convert_Energy_Wh_to_J_Formula ();

				if(strcmp(unit[1] , "btu")==0)
					Unit_Convert_Energy_Btu_to_J_Formula ();

				if(strcmp(unit[1] , "cal")==0)
					Unit_Convert_Energy_Cal_to_J_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "j")==0){}

				if(strcmp(unit[2] , "ftlbf")==0)
					Unit_Convert_Energy_J_to_FtLbF_Formula ();

				if(strcmp(unit[2] , "wh")==0)
					Unit_Convert_Energy_J_to_Wh_Formula ();

				if(strcmp(unit[2] , "btu")==0)
					Unit_Convert_Energy_J_to_Btu_Formula ();

				if(strcmp(unit[2] , "cal")==0)
					Unit_Convert_Energy_J_to_Cal_Formula ();

			}

		if (strcmp(line , "units")==0){
			energy_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int energy_check(char unit [MAX]){
	if((strcmp(unit , "j")==0) || (strcmp(unit , "ftlbf")==0) || (strcmp(unit , "wh")==0) || (strcmp(unit , "btu")==0) || (strcmp(unit , "cal")==0))
		return TRUE;
	else
		return FALSE;
}

void energy_units(){
	printf("\n| Energy Units |\n");
	printf("[j] -> Joule\n");
	printf("[ftlbf] -> Feet Pound-Force\n");
	printf("[wh] -> Watt Hour\n");
	printf("[btu] -> British Termal Unit\n");
	printf("[cal] -> Calorie\n\n");
}

/*Interface para opção potência*/
void power_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Power->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && power_check(unit[1]) && power_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "w")==0){}

				if(strcmp(unit[1] , "bhp")==0)	
					number = Unit_Convert_Power_Bhp_to_W (number);
				if(strcmp(unit[1] , "kcal/h")==0)
					number = Unit_Convert_Power_KCalph_to_W (number);
				if(strcmp(unit[1] , "cv")==0)
					number = Unit_Convert_Power_CV_to_W (number);
				
				/*Unidade destino*/
				if(strcmp(unit[2] , "w")==0){}

				if(strcmp(unit[2] , "bhp")==0)	
					number = Unit_Convert_Power_W_to_Bhp (number);
				if(strcmp(unit[2] , "kcal/h")==0)
					number = Unit_Convert_Power_W_to_KCalph (number);
				if(strcmp(unit[2] , "cv")==0)
					number = Unit_Convert_Power_W_to_CV (number);
				
				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && power_check(unit[1]) && power_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "w")==0){}

				if(strcmp(unit[1] , "bhp")==0)
					Unit_Convert_Power_Bhp_to_W_Formula ();

				if(strcmp(unit[1] , "kcal/h")==0)
					Unit_Convert_Power_KCalph_to_W_Formula ();

				if(strcmp(unit[1] , "cv")==0)
					Unit_Convert_Power_CV_to_W_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "w")==0){}

				if(strcmp(unit[2] , "bhp")==0)
					Unit_Convert_Power_W_to_Bhp_Formula ();

				if(strcmp(unit[2] , "kcal/h")==0)
					Unit_Convert_Power_W_to_KCalph_Formula ();

				if(strcmp(unit[2] , "cv")==0)
					Unit_Convert_Power_W_to_CV_Formula ();

			}

		if (strcmp(line , "units")==0){
			power_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int power_check(char unit [MAX]){
	if((strcmp(unit , "w")==0) || (strcmp(unit , "bhp")==0) || (strcmp(unit , "kcal/h")==0) || (strcmp(unit , "cv")==0))
		return TRUE;
	else
		return FALSE;
}

void power_units(){
	printf("\n| Power Units |\n");
	printf("[w] -> Watt\n");
	printf("[bhp] -> Brake Horse Power\n");
	printf("[kcal/h] -> KiloCalorie per Hour\n");
	printf("[cv] -> Horsepower\n\n");
}

/*Interface para opção temperatura*/
void temperature_interface (char line[MAX]){
	char unit[2][MAX];
	float number;
	do{
		printf("UConv/Temperature->");
		gets(line);
		lowercase(line);
		if((3 == sscanf(line , "%s to %s %f" , unit[1] , unit[2] , &number)) && temperature_check(unit[1]) && temperature_check(unit[2])){
				/*Verifica unidades para conversão*/
				/*Unidade origem*/
				if(strcmp(unit[1] , "k")==0){}

				if(strcmp(unit[1] , "oc")==0)	
					number = Unit_Convert_Temperature_oC_to_K (number);
				if(strcmp(unit[1] , "of")==0)
					number = Unit_Convert_Temperature_oF_to_K (number);
				if(strcmp(unit[1] , "r")==0)
					number = Unit_Convert_Temperature_R_to_K (number);
				
				/*Unidade destino*/
				if(strcmp(unit[2] , "k")==0){}

				if(strcmp(unit[2] , "oc")==0)	
					number = Unit_Convert_Temperature_K_to_oC (number);
				if(strcmp(unit[2] , "of")==0)
					number = Unit_Convert_Temperature_K_to_oF (number);
				if(strcmp(unit[2] , "r")==0)
					number = Unit_Convert_Temperature_K_to_R (number);
				
				printf("%f\n" , number);
			}
		if(2 == sscanf(line , "sf %s to %s" , unit[1] , unit[2]) && temperature_check(unit[1]) && temperature_check(unit[2])){
				/*Unidade origem*/
				if(strcmp(unit[1] , "k")==0){}

				if(strcmp(unit[1] , "oc")==0)
					Unit_Convert_Temperature_oC_to_K_Formula ();

				if(strcmp(unit[1] , "of")==0)
					Unit_Convert_Temperature_oF_to_K_Formula ();

				if(strcmp(unit[1] , "r")==0)
					Unit_Convert_Temperature_R_to_K_Formula ();

				/*Unidade destino*/
				if(strcmp(unit[2] , "k")==0){}

				if(strcmp(unit[2] , "oc")==0)
					Unit_Convert_Temperature_K_to_oC_Formula ();

				if(strcmp(unit[2] , "of")==0)
					Unit_Convert_Temperature_K_to_oF_Formula ();

				if(strcmp(unit[2] , "r")==0)
					Unit_Convert_Temperature_K_to_R_Formula ();

			}
		if (strcmp(line , "units")==0){
			temperature_units();
		}
	}while((strcmp(line , "back")!=0)&&(strcmp(line , "exit")!=0));
}

int temperature_check(char unit [MAX]){
	if((strcmp(unit , "k")==0) || (strcmp(unit , "oc")==0) || (strcmp(unit , "of")==0) || (strcmp(unit , "r")==0))
		return TRUE;
	else
		return FALSE;
}

void temperature_units(){
	printf("\n| Temperature Units |\n");
	printf("[k] -> Kelvin\n");
	printf("[oc] -> Degrees Celsius\n");
	printf("[of] -> Degrees Faraday\n");
	printf("[r] -> Rankyne\n\n");
}