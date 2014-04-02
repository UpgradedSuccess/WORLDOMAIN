/*--------------------------------------
// SISTEMA DE MENÚS
--------------------------------------*/
#include "..\headers\alldirections.h"

/*--------------------------------------
// Función: main_menu
// Menú principal
--------------------------------------*/
void main_menu(str_config* CFG)
{
	int exit; // Determina si se ha de salir o no
	int optotal; // Número total de opciones en un menú
	optotal = 4; optm = CFG->opts; exit = 0;
	do
	{
		title(CFG->_WSIZE_X, "WORLDOMAIN 0.1 :: MENÚ PRINCIPAL"); nl(3);
		centr_txt(CFG->_WSIZE_X, "INICIAR JUEGO",	(optm == 0));
		centr_txt(CFG->_WSIZE_X, "CARGAR JUEGO",	(optm == 1));
		centr_txt(CFG->_WSIZE_X, "OPCIONES",		(optm == 2));
		centr_txt(CFG->_WSIZE_X, "SALIR",			(optm == 3));
		do
		{
			k_in = getch();
			if ((int)k_in == CFG->_UP)	 { optm--; }
			if ((int)k_in == CFG->_DOWN) { optm++; }
			if ((int)k_in == CFG->_ACT)
			{
				switch (optm)
				{
				case 0: { nl(2); game_select(CFG); break; }
				case 1: { nl(2); centr_txt(CFG->_WSIZE_X, "game_load();", 0); break; }
				case 2: { nl(2); centr_txt(CFG->_WSIZE_X, "change_config(CFG);", 0); break; }
				case 3: { exit = 1; break; }
				}
			}
			if (optm > optotal - 1) { optm = 0; }
			if (optm < 0) { optm = optotal - 1; }
		} while (
			((int)k_in != CFG->_UP) &
			((int)k_in != CFG->_DOWN) &
			((int)k_in != CFG->_ACT) &
			exit == 0);
	} while ( exit == 0 );
}
/*--------------------------------------
// Función: game_select
// Selección de slots de guardado
// para empezar una nueva partida
--------------------------------------*/
void game_select(str_config* CFG)
{
	int exit;
	int optotal;
	optotal = 4; optm = CFG->opts; exit = 0;
	do
	{
		title(CFG->_WSIZE_X, "WORLDOMAIN 0.1 >> SELECCIÓN DE PARTIDA"); nl(1);
		centr_txt(CFG->_WSIZE_X, "Elige dónde quieres guardar tu partida", 0); nl(1);
		centr_txt(CFG->_WSIZE_X, "PARTIDA 1", (optm == 0));
		centr_txt(CFG->_WSIZE_X, "PARTIDA 2", (optm == 1));
		centr_txt(CFG->_WSIZE_X, "PARTIDA 3", (optm == 2)); nl(1);
		centr_txt(CFG->_WSIZE_X, "VOLVER", (optm == 3));
		do
		{
			k_in = getch();
			if ((int)k_in == CFG->_UP)	 { optm--; }
			if ((int)k_in == CFG->_DOWN) { optm++; }
			if ((int)k_in == CFG->_ACT)
			{
				switch (optm)
				{
				case 0: { nl(2); centr_txt(CFG->_WSIZE_X, "slot1();", 0); break; }
				case 1: { nl(2); centr_txt(CFG->_WSIZE_X, "slot2();", 0); break; }
				case 2: { nl(2); centr_txt(CFG->_WSIZE_X, "slot3();", 0); break; }
				case 3: { exit = 1; break; }
				}
			}
			if (optm > optotal - 1) { optm = 0; }
			if (optm < 0) { optm = optotal - 1; }
		} while (((int)k_in != CFG->_UP) & ((int)k_in != CFG->_DOWN) & exit == 0);
	} while (exit == 0);
}

/*--------------------------------------
// END OF FILE
--------------------------------------*/