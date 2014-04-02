/*--------------------------------------
// CABECERA PRINCIPAL
--------------------------------------*/

/*--------------------------------------
// LIBRER�AS, MACROS, CONSTANTES
--------------------------------------*/
// Librer�as est�ndar
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Librer�as no est�ndar
#include <conio.h>

// Otras librer�as
#include "datastruct.h"
#include "..\lang_spa\lang_spa.h"

// Constantes
#define _DEBUG 0	// Modificar este valor a 1 si se quiere testear una funci�n
					// Modificar este valor a 2 si se quiere entrar en modo debug
#define __flow 0	// Valor para control de flujo en modo debug (usar a placer)

// Variables globales
int		i, j, k;	// Auxiliares (s�lo para bucles cortos)
int		debug_val;	// Valor que devuelven las tareas en modo debug
int		opt;		// Valor para selecci�n de opciones
int		optm;		// Valor para selecci�n en men�s
char	k_in;		// "Keyboard input", tecla pulsada

/*--------------------------------------
// PROTOTIPOS
// Hacia todas las funciones de:
// auxfun_spa.c
--------------------------------------*/
void nl(int a);
void pause(int);
void error(char*);
int opt_e(char* mes);
int opt_yn(char* mes);

/*--------------------------------------
// PROTOTIPOS
// Hacia todas las funciones de:
// debug.c
--------------------------------------*/
int	debug_function(str_config*);
int debug_menu(str_config*);
void debug_error(int);

/*--------------------------------------
// PROTOTIPOS
// Hacia todas las funciones de:
// visual.c
--------------------------------------*/
void title(int, char*);
void l_lite(int);
void l_bold(int);
void centr_title(int, char*);
void centr_txt(int, char*, int);

/*--------------------------------------
// PROTOTIPOS
// Hacia todas las funciones de:
// config.c
--------------------------------------*/
str_config def_config();
str_config ini_config();

/*--------------------------------------
// PROTOTIPOS
// Hacia todas las funciones de:
// menu_sys.c
--------------------------------------*/
void main_menu(str_config*);
void game_select(str_config*);

/*--------------------------------------
// PROTOTIPOS
// Hacia todas las funciones de:
// file_adm.c
--------------------------------------*/

/*--------------------------------------
// END OF FILE
--------------------------------------*/