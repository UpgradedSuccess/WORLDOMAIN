/*--------------------------------------
// DEBUG
--------------------------------------*/
#include "..\headers\alldirections.h"

/*--------------------------------------
// Función: debug_function
// Testeo de cualquier función
--------------------------------------*/
int debug_function(str_config* CFG)
{
	if (_DEBUG == 1)
	{
		// Función a introducir
		//FILE *pf1 = NULL, *pf2 = NULL;
		//char car, cadena[36];

		//if (__flow == 0) {
		//	pf1 = fopen("f1.txt", "wb");
		//	pf2 = fopen("f2.txt", "wb");
		//}
		//if (__flow == 1) {
		//	pf1 = fopen("f1.txt", "rb");
		//	pf2 = fopen("f2.txt", "rb");
		//}
	}
	return 0;
}

/*--------------------------------------
// Función: debug_menu
// Menú del modo debug
--------------------------------------*/
int debug_menu(str_config* CFG)
{
	if (_DEBUG == 2)
	{
		return 1;
	}
	return 0;
}
/*--------------------------------------
// Función: debug_error
// Muestra por pantalla el tipo de
// error que se ha dado
--------------------------------------*/
void debug_error(int a)
{
	printf("\n\nDebug report: ");
	switch (a) {
	case 0:
		printf("Everything went great!");
		pause(1);
		break;
	case 1:
		printf("The menu couldn't be opened.");
		pause(1);
		break;
	default:
		printf("Unknown error.");
		pause(9);
		break;
	}
}

/*--------------------------------------
// END OF FILE
--------------------------------------*/