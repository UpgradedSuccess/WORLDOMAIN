/*--------------------------------------
// CONFIGURACIÓN DEL JUEGO
--------------------------------------*/
#include "..\headers\alldirections.h"

/*--------------------------------------
// Función: def_config
// Inicializa la configuración por
// defecto
--------------------------------------*/
str_config def_config()
{
	str_config CFG;

	CFG.opts		= 0;
	CFG._WSIZE_X	= 79;
	CFG._WSIZE_Y	= NULL;
	CFG._UP			= 105;	// Tecla i
	CFG._DOWN		= 107;	// Tecla k
	CFG._RIGHT		= 109;	// Tecla l
	CFG._LEFT		= 108;	// Tecla j
	CFG._ACT		= 122;	// Tecla z

	return CFG;
}
/*--------------------------------------
// Función: ini_config
// Inicializa la útima configuración
// guardada
--------------------------------------*/
str_config ini_config()
{
	str_config CFG;

	return CFG;
}

/*--------------------------------------
// END OF FILE
--------------------------------------*/