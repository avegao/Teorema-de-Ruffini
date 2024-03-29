/*
 * main.c
 * Copyright (C) Álvaro de la Vega Olmedilla (Xinjia) 2011 <alvarodlvo@gmail.com>
 *
 * Teorema de Ruffini is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Teorema de Ruffini is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pause() {

	printf( "\nPulse una tecla para continuar...\n" );
    getchar();
	getchar();

}

int ruffini_4( int coeficiente1, int coeficiente2, int coeficiente3, int coeficiente4, int divisor ) {

	int calculo[7];

	if (divisor == -89) {

		printf("Calculando...\n");

		calculo[7] = 200;

		for (divisor = -15; calculo[7] != 0; divisor++) {

			calculo[7] =  ((((((coeficiente1 * divisor) + coeficiente2) * divisor) + coeficiente3) * divisor) + coeficiente4);

		}

	} else {

		divisor++;

	}

	divisor--;
	calculo[1] = coeficiente1 * divisor;
	calculo[2] = calculo[1] + coeficiente2;
	calculo[3] = calculo[2] * divisor;
	calculo[4] = calculo[3] + coeficiente3;
	calculo[5] = calculo[4] * divisor;
	calculo[6] = calculo[5] + coeficiente4;

	printf("\n\n");
	printf("  |%i  %i  %i  %i\n", coeficiente1, coeficiente2, coeficiente3, coeficiente4);
	printf("  |\n");
	printf(" %i|    %i   %i %i\n", divisor, calculo[1], calculo[3], calculo[5]);
	printf("__|____________________\n");
	printf("   %i   %i   %i |%i|\n", coeficiente1, calculo[2], calculo[4], calculo[6]);

    return 0;

}

int ruffini_5( int coeficiente1, int coeficiente2, int coeficiente3, int coeficiente4, int coeficiente5, int divisor ) {

	int calculo[12];

		if (divisor == -89) {

			printf("Calculando...\n");

			calculo[9] = 200;

			for (divisor = -20; calculo[9] != 0; divisor++) {

				calculo[9] = ((((((((coeficiente1 * divisor) + coeficiente2) * divisor) + coeficiente3) * divisor) + coeficiente4) * divisor) + coeficiente5);

			}

		} else {

			divisor++;

		}

		divisor--;
		calculo[1] = coeficiente1 * divisor;
		calculo[2] = calculo[1] + coeficiente2;
		calculo[3] = calculo[2] * divisor;
		calculo[4] = calculo[3] + coeficiente3;
		calculo[5] = calculo[4] * divisor;
		calculo[6] = calculo[5] + coeficiente4;
		calculo[7] = calculo[6] * divisor;
		calculo[8] = calculo[7]+ coeficiente5;

		printf("\n\n");
		printf("  |%i  %i  %i  %i  %i\n", coeficiente1, coeficiente2, coeficiente3, coeficiente4, coeficiente5);
		printf("  |\n");
		printf(" %i|    %i   %i  %i %i\n", divisor, calculo[1], calculo[3], calculo[5], calculo[7]);
		printf("__|____________________\n");
		printf("   %i   %i   %i  %i |%i|\n", coeficiente1, calculo[2], calculo[4], calculo[6], calculo[8]);

	    return 0;

}

int main() {

    unsigned int NumeroCoeficientes;
    int coeficiente[5], divisor;
    char OpcionDivisor;

    printf( "Ruffini\n" );

    printf( "Introduce el número de coeficientes: " );
    scanf( "%d" , &NumeroCoeficientes );

    while( NumeroCoeficientes < 3 || NumeroCoeficientes > 5 ) {

        printf( "El número de coeficientes tiene que estar entre 3 y 5\n" );
        printf( "Introduce el número de coeficientes: " );
        scanf( "%d" , &NumeroCoeficientes );

    }

    switch ( NumeroCoeficientes ) {

        case 4:

            printf( "Introduce los 4 coeficientes:\n" );
            printf( "1-> " );
            scanf( "%i", &coeficiente[0] );
            printf( "2-> " );
            scanf( "%i", &coeficiente[1] );
            printf( "3-> " );
            scanf( "%i", &coeficiente[2] );
            printf( "4-> " );
            scanf( "%i", &coeficiente[3] );
            printf( "¿Quieres hallar el divisor?[S/N]: " );
            scanf( "%s", &OpcionDivisor );

            switch ( OpcionDivisor ) {

                case 83://S

                    ruffini_4( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], -89 );

                    break;

                case 115://s

                    ruffini_4( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], -89 );

                    break;

                case 78://N

                    printf( "Introduce el divisor: " );
                    scanf( "%i", &divisor );

                    ruffini_4( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], divisor );

                    break;

                case 110://n

                    printf( "Introduce el divisor: " );
                    scanf( "%i", &divisor );

                    ruffini_4( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], divisor );

                    break;
            }

            break;

        case 5:

            printf( "Introduce los 5 coeficientes:\n" );
            printf( "1-> " );
            scanf( "%i", &coeficiente[0] );
            printf( "2-> " );
            scanf( "%i", &coeficiente[1] );
            printf( "3-> " );
            scanf( "%i", &coeficiente[2] );
            printf( "4-> " );
            scanf( "%i", &coeficiente[3] );
            printf( "5-> " );
            scanf( "%i", &coeficiente[4] );
            printf( "¿Quieres hallar el divisor?[S/N]: " );
            scanf( "%s", &OpcionDivisor );

            switch ( OpcionDivisor ) {

                case 83://S

                    ruffini_5( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], coeficiente[4], -89 );

                    break;

                case 115://s

                    ruffini_5( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], coeficiente[4], -89 );

                    break;

                case 78://N

                    printf( "Introduce el divisor: " );
                    scanf( "%i", &divisor );

                    ruffini_5( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], coeficiente[4], divisor );

                    break;

                case 110://n

                    printf( "Introduce el divisor: " );
                    scanf( "%i", &divisor );

                    ruffini_5( coeficiente[0], coeficiente[1], coeficiente[2], coeficiente[3], coeficiente[4], divisor );

                    break;
            }

            break;

    }

	pause();

    return 0;

}
