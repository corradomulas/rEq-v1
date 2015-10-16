/*
################Risolutore di equazioni lineari di primo grado###############
#                                                                           #
#Copyright © 2015 Corrado Mulas.                                            #
#                                                                           #
#	Rilasciato dietro licenza GNU GENERAL PUBLIC LICENSE VERSION 3          #
#                                                                           #
#    This program is free software: you can redistribute it and/or modify   #
#    it under the terms of the GNU General Public License as published by   #
#    the Free Software Foundation, either version 3 of the License, or      #
#    (at your option) any later version.                                    #
#                                                                           #
#    This program is distributed in the hope that it will be useful,        #
#    but WITHOUT ANY WARRANTY; without even the implied warranty of         #
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          #
#    GNU General Public License for more details.                           #
#                                                                           #
#    You should have received a copy of the GNU General Public License      #
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.  #
#                                                                           #
#############################################################################
*/
#include <stdio.h>

int a,b,x;

int main(void)
{
	printf("Risolutore di equazioni di primo grado ax+b=0\n\n");
	
	printf("\nInserire valore di a:");
		scanf("%d", &a);
	
	printf("\n\nInserire valore di b:");
		scanf("%d", &b);
	
	if(a != 0)
	{
		x = (-b/a);
		printf("\nx=%d", x);
	}
	else
	{
		printf("\n\nImpossibile risolvere equazioni per 0");
	}
}
