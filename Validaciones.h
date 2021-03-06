#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED
#include "Cronograma.h"

bool validaNroSemana( int );
bool validaIdAgencia( int );
bool validaIdRegion( int );
bool validaIdBuque( int );
bool validaIdTerminal( int );
bool validaDiaSemana( int );
bool validaHora( int );
bool validaPositivo( int );
bool validaNombreAgencia ( char *);
bool validaNombreBuque ( char *);
bool validaCodigoRegion ( char *);
bool validaNombreRegion ( char *);
bool validaNombreTerminal ( char *);
bool validaMesCarga( int  );
bool validaMayorCero( int );
bool validaUsuario(char*);
bool validaIdBaseCalculo( Cronograma crono);


#endif // VALIDACIONES_H_INCLUDED
