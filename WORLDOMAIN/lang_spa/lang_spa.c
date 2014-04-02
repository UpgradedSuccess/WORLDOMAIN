/*--------------------------------------
// FUNCIONES OUTPUT IDIOMAS
// Idioma: Español
--------------------------------------*/
#include "lang_spa.h"

/*--------------------------------------
// Función: spa_printf
// Imprime por pantalla introduciendo
// bien las tildes, la "ñ" y el
// signo de interrogación "¿"
--------------------------------------*/
void spa_printf(char* mes)
{
	int i;
	for (i = 0; i < (int)strlen(mes); i++)
	{
		switch ((int)mes[i])
		{
		case -15: {putchar(n_);     break; }
		case -47: {putchar(N_);     break; }
		case -31: {putchar(a_);     break; }
		case -63: {putchar(A_);     break; }
		case -23: {putchar(e_);     break; }
		case -55: {putchar(E_);     break; }
		case -19: {putchar(i_);     break; }
		case -51: {putchar(I_);     break; }
		case -13: {putchar(o_);     break; }
		case -45: {putchar(O_);     break; }
		case  -6: {putchar(u_);     break; }
		case -38: {putchar(U_);     break; }
		case -65: {putchar(lqm_);   break; }
		default:  {putchar(mes[i]); break; }
		}
	}
}

/*--------------------------------------
// END OF FILE
--------------------------------------*/