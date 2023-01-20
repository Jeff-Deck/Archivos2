#include <stdio.h>
int a=1;
int cont=1;
int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("archivo.txt","r+");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    } 
while (cont<5){
    
    fgets(buffer,100,archivo);
    printf("la línea %d es %s",a, buffer);
a=a++;
/*
    fgets(buffer,100,archivo);
    printf("la primera línea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la segunda línea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la tercera línea es %s",buffer);

    fscanf(archivo, "%lf", &pi);
    printf("el número en la cuarta línea es %lf",pi);

*/
}

    fprintf(archivo,"\n");

    fputs("se agrega una quinta línea",archivo);
 

    fclose(archivo);


    return 0;
}
