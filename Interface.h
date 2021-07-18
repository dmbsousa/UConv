#ifndef INTERFACE_INCLUDED
#define INTERFACE_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 500
#define TRUE 1
#define FALSE 0

/*Functions*/

/*Menu Selection Function*/
void select_menu (char line [MAX]);
/*Instructions List*/
void instructions();
void pqlist ();
/*Lowercase function*/
void lowercase (char string [MAX]);

/*Interface Functions*/
void mass_interface (char line[MAX]);
void distance_interface (char line[MAX]);
void volume_interface (char line[MAX]);
void force_interface (char line[MAX]);
void density_interface (char line[MAX]);
void speed_interface (char line[MAX]);
void pressure_interface (char line[MAX]);
void frequency_interface (char line[MAX]);
void energy_interface (char line[MAX]);
void power_interface (char line[MAX]);
void temperature_interface (char line[MAX]);

/*Check Unit Functions*/
int mass_check (char unit[MAX]);
int distance_check (char unit[MAX]);
int volume_check(char unit [MAX]);
int force_check(char unit [MAX]);
int density_check(char unit [MAX]);
int speed_check(char unit [MAX]);
int pressure_check(char unit [MAX]);
int frequency_check(char unit [MAX]);
int energy_check(char unit [MAX]);
int power_check(char unit [MAX]);
int temperature_check(char unit [MAX]);

/*Units List Functions*/
void mass_units();
void distance_units();
void volume_units();
void force_units();
void density_units();
void speed_units();
void pressure_units();
void frequency_units();
void energy_units();
void power_units();
void temperature_units();
#endif