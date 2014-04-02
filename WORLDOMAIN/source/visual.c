/*--------------------------------------
// ELEMENTOS VISUALES
// Adaptadas al idioma: Español
--------------------------------------*/
#include "..\headers\alldirections.h"

/*--------------------------------------
// Función: title
// Coloca un título al principio
// de un menú
--------------------------------------*/
void title(int size, char* mes)
{
	system("cls");
	nl(2);
	centr_txt(size, mes, 0);
	nl(2);
}

/*--------------------------------------
// Función: l_lite
// Crea una línea
--------------------------------------*/
void l_lite(int size)
{
	for (i = 0; i <= size; i++) putchar('\xCD');
}
/*--------------------------------------
// Función: l_bold
// Crea una línea
--------------------------------------*/
void l_bold(int size)
{
	for (i = 0; i <= size; i++) putchar('\xDB');
}
/*--------------------------------------
// Función: centr_title
// Centra el título
--------------------------------------*/
void centr_title(int size, char* mes)
{
	int m_sz = strlen(mes);			// Tamaño del mensaje
	int b_sz;						// Longitud de los espacios en blanco (dcha e izqda)

	size -= 2;
	b_sz = (size - m_sz) / 2;

	printf("\xDB");
	for (i = 0; i <= size; i++) { putchar(255); }
	printf("\xDB\xDB");
	for (i = 0; i <= b_sz; i++) { putchar(255); }
	spa_printf(mes);
	if (m_sz % 2 == 0) b_sz++;
	for (i = 0; i<b_sz; i++) { putchar(255); }
	printf("\xDB\xDB");
	for (i = 0; i <= size; i++) { putchar(255); }
	printf("\xDB");
}
/*--------------------------------------
// Función: centr_txt
// Centra un texto
--------------------------------------*/
void centr_txt(int size, char* mes, int sel)
{
	int m_sz = strlen(mes);			// Tamaño del mensaje
	int b_sz;						// Longitud de los espacios en blanco (dcha e izqda)

	b_sz = ( (size - m_sz) / 2 ) - 1;

	for (i = 0; i <= b_sz; i++) { putchar(255); }
	if (sel == 1) {	printf("\b\b> "); }
	spa_printf(mes);
	if (sel == 1) printf(" <");
	nl(1);
}

/*--------------------------------------
// END OF FILE
--------------------------------------*/