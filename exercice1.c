#include <stdio.h>
#include <string.h>

int main()
{
	char prenom[20]; /*Chaine de caractere vide de 20 donc 19 exploitable avec le' \0'*/
	printf("Quel est votre prenom ?\n"); /*Demande du prenom*/
	scanf("%19s", prenom); /*Recuperation du prenom via la chaine de caractere*/
	printf("Hello, %s", prenom); /*Affiche Hello + Prenom de l'utilisateur*/
	return 0;
}
