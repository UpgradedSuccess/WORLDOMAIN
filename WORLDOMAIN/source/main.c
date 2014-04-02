/*--------------------------------------
// PRINCIPAL
--------------------------------------*/
#include "..\headers\alldirections.h"

/*--------------------------------------
// Funci�n: main
--------------------------------------*/
int main()
{
	// Configuraci�n inicial
	str_config CFG = def_config();

	// Semillas y otras configuraciones globales
	srand(time(0));

	// Funciones de debug y prueba de funciones
	debug_val = debug_function(&CFG);
	debug_val = debug_menu(&CFG);
	if (_DEBUG != 0)
	{ debug_error(debug_val); return 0; }

	// Funci�n que accede al men� principal
	main_menu(&CFG);
	pause(9);
	return 0;
}
/*--------------------------------------
// END OF PROGRAM
--------------------------------------*/