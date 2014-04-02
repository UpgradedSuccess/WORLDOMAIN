/*--------------------------------------
// FUNCIONES AUXILIARES
// Adaptadas al idioma: Español
--------------------------------------*/
#include "..\headers\alldirections.h"

/*--------------------------------------
// Función: nl
// Introduce tantos retornos de carro
// como se quieran
--------------------------------------*/
void nl(int a)
{
	for (i = 0; i < a; i++) printf("\n");
}

/*--------------------------------------
// Función: pause
// Establece un alto en el camino
--------------------------------------*/
void pause(int a)
{
	switch (a) {
	case 0:
		spa_printf("\n\Siguiente ... ");
		break;
	case 1:
		spa_printf("\n\nPulsa cualquier tecla.");
		break;
	case 2:
		spa_printf("\n\nFin de archivo.");
		break;
	case 3:
		spa_printf("\n\nPulsa cualquier tecla\n"
			"para volver atrás.");
		break;
	case 8:
		spa_printf("\n\nFIN DEL PROGRAMA.");
		break;
	case 9:
		spa_printf("\n\n\n\tESTE PROGRAMA VA A FINALIZAR\n"
			"\n\tPULSA CUALQUIER TECLA PARA ACABAR\n"
			"\tDE UNA VEZ POR TODAS CON ESTO");
		break;
	default:
		spa_printf("\n\nPulsa cualquier tecla para "
			"continuar.");
		break;
	}
	fflush(stdin);
	getch();
	system("cls");
}
/*--------------------------------------
// Función: error
// Cuando se produce un error que
// termina el programa
--------------------------------------*/
void error(char* mes)
{
	fprintf(stderr, "\n\nEl programa se ha rotido "
		"de forma inesperada.\n");
	spa_printf("\nRazón:\n\t");
	spa_printf(mes);
	pause(1);
}
/*--------------------------------------
// Función: opt_e
// Lee una opción a introducir
--------------------------------------*/
int opt_e(char* mes)
{
	spa_printf(mes);
	printf(": ");
	opt = getche();
	return toupper(opt) - 48;
}
/*--------------------------------------
// Función: opt_yn
// Lee una opción a introducir de sí/no
--------------------------------------*/
int opt_yn(char* mes)
{
	spa_printf(mes);
	printf(" (y/n):  ");
	do{
		printf("\b");
		opt = getche();
		opt = toupper(opt);
	} while ((opt != 'Y') && (opt != 'N'));

	return (opt == 'Y');
}
/*--------------------------------------
// Función: 
// 
--------------------------------------*/

/*--------------------------------------
// END OF FILE
--------------------------------------*/