struct empleado // Creamos una estructura llamado empleado
{
	char nombre_empleado[25];
	char direccion[25];
	char ciudad[20];
	char provincia[20];
	long int codigo_postal;
	double salario;
};



struct cliente // Creamos una estructura llamada cliente
{
	char nombre_cliente[25];
	char direccion[25];
	char ciudad[20];
	char provincia[20];
	long int codigo_postal;
	double saldo;
}; 

// Fijemonos que ambas estructuras tienen en comun muchos datos, podriamos abstraer en una estructura comun esto