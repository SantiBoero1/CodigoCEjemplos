#include <stdio.h>
#include <string.h>

// Creamos nuestra estructura con datos similares 
struct infopersona
{
	char direccion[25];
	char ciudad[20];
	char provincia[20];
	long int codigo_postal;	
};

// Creamos nuestra estructura empleado
struct empleado
{
	char nombre_empleado[25];
	// agregamos la estructura infopersona con nombre direcc_empleado
	struct infopersona direcc_empleado; 
	double salario;
};

// Creamos nuestra estructura cliente
struct cliente
{
	char nombre_cliente[25];
	// agregamos la estructura infopersona con nombre direcc_cliente
	struct infopersona direcc_cliente;
	double saldo;
};

int main(void)
{
	// Creamos un nuevo cliente
	struct cliente MiCliente;
	
	// Inicializamos un par de datos de Micliente
	strcpy(MiCliente.nombre_cliente,"Cosme fulanito");
	strcpy(MiCliente.direcc_cliente.direccion, "Calle falsa 123");
	
	
	// Imprimimos los datos
	printf("\n Cliente: ");
	printf("\n Nombre: %s", MiCliente.nombre_cliente);
	printf("\n Direccion: %s", MiCliente.direcc_cliente.direccion); 
	
	// Creamos un nuevo empleado
	struct empleado MiEmpleado;
	
	// Inicializamos un par de datos de MiEmplado
	strcpy(MiEmpleado.nombre_empleado,"Pepito el pepe");
	strcpy(MiEmpleado.direcc_empleado.ciudad,"CABA");
	
	
	// Imprimimos los datos
	printf("\n");
	printf("\n Empleado: ");
	printf("\n Nombre: %s", MiEmpleado.nombre_empleado);
	printf("\n Ciudad: %s", MiEmpleado.direcc_empleado.ciudad);
	
	return 0;
}